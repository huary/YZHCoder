//
//  YZHCoder.m
//  PBDemo
//
//  Created by yuan on 2019/5/26.
//  Copyright © 2019年 yuan. All rights reserved.
//

#import "YZHCoder.h"
#import "type.h"
#import "macro.h"

#define TYPE_FIELD_OFFSET    (4)

typedef union Convert {
    double dVal;
    uint64_t intVal;
}CONVERT_U;

@interface YZHCoder ()

/* <#注释#> */
//@property (nonatomic, strong) NSMutableData *codeData;

@end

@implementation YZHCoder

//-(NSMutableData*)codeData
//{
//    if (_codeData == nil) {
//        _codeData = [[NSMutableData alloc] init];
//    }
//    return _codeData;
//}

-(NSData*)encodeObject:(id)object
{
    return [self _encodeObject:object];
}

-(id)decodeObjectWithData:(NSData*)data
{
    return [self _decodeObjectFromBuffer:(uint8_t*)data.bytes length:data.length offset:NULL];
}

-(NSData*)encodeObject:(id)object forKey:(id)key
{
    NSData *keyDt = [self _encodeObject:key];
    NSData *objDt = [self _encodeObject:object];
    NSMutableData *dt = nil;
    if (keyDt && objDt) {
        dt = [NSMutableData dataWithData:keyDt];
        [dt appendData:objDt];
    }
    return dt;
}

int64_t integerToZigzag(int64_t n)
{
    return (n << 1 ) ^ (n >> 63);
}

int64_t zigzagToInteger(int64_t n)
{
    return (((uint64_t)n) >> 1 ) ^ (-(n & 1));
}

-(NSInteger)_encodeInt64Size:(int64_t)val
{
    return TYPEULL_BYTES_N(val);
}

-(NSData*)_encodeInt64:(int64_t)val
{
    uint8_t len = TYPEULL_BYTES_N(val);
    NSMutableData *dt = [NSMutableData dataWithLength:len];
    uint8_t *ptr = dt.mutableBytes;
    for (uint8_t i = 0; i < len; ++i) {
        ptr[i] = TYPE_AND(TYPE_RS(val, TYPE_LS(i, 3)), FIR_BYTE_MASK);
    }
    return dt;//[dt copy];
}

-(void)_encodeInt64:(int64_t)val toBuffer:(uint8_t*)buffer
{
    if (buffer == NULL) {
        return;
    }
    uint8_t len = TYPEULL_BYTES_N(val);
    for (uint8_t i = 0; i < len; ++i) {
        buffer[i] = TYPE_AND(TYPE_RS(val, TYPE_LS(i, 3)), FIR_BYTE_MASK);
    }
}

-(int64_t)_decodeInt64:(uint8_t*)ptr len:(uint8_t)len
{
    int64_t val = 0;
    for (uint8_t i = 0; i < len; ++i) {
        int64_t v = ptr[i];
        val |= TYPE_LS(v, TYPE_LS(i, 3));
    }
    return val;
}

-(NSData*)_encodeDouble:(double)val
{
    CONVERT_U convert = {.dVal = val};
    uint8_t len = sizeof(val);
    NSMutableData *dt = [NSMutableData dataWithLength:len];
    uint8_t *ptr = dt.mutableBytes;
    for (uint8_t i = 0; i < len; ++i) {
        ptr[i] = TYPE_AND(TYPE_RS(convert.intVal, TYPE_LS(i, 3)), FIR_BYTE_MASK);
    }
    return dt;//[dt copy];
}

-(void)_encodeDouble:(double)val toBuffer:(uint8_t*)buffer
{
    if (buffer == NULL) {
        return;
    }
    CONVERT_U convert = {.dVal = val};
    uint8_t len = sizeof(val);
    for (uint8_t i = 0; i < len; ++i) {
        buffer[i] = TYPE_AND(TYPE_RS(convert.intVal, TYPE_LS(i, 3)), FIR_BYTE_MASK);
    }
}

-(double)_decodeDouble:(uint8_t*)ptr
{
    CONVERT_U convert = {.dVal = 0.0};
    uint8_t len = sizeof(double);
    for (uint8_t i = 0; i < len; ++i) {
        uint8_t v = ptr[i];
        convert.intVal |= TYPE_LS(v, TYPE_LS(i, 3));
    }
    return convert.dVal;
}



-(NSData*)_encodeObject:(id)object
{
    uint8_t type = TYPE_LS(1, 7);
    NSMutableData *dt = nil;
    uint8_t *ptr = NULL;

    if ([object isKindOfClass:[NSNumber class]]) {
        NSNumber *num = object;
        if (strcmp(num.objCType, "d") == 0) {
            double val = [num doubleValue];
            uint8_t cnt = sizeof(val);
            type |= TYPE_AND(cnt-1, NUM_4_POWOFTWO_MASK);
            type |= TYPE_LS(TYPE_AND(YZHCodeItemTypeReal, NUM_3_POWOFTWO_MASK), TYPE_FIELD_OFFSET);
            
            dt = [NSMutableData dataWithLength: 1 + cnt];
            ptr = dt.mutableBytes;
            
            ptr[0] = type;
            ++ptr;
            [self _encodeDouble:val toBuffer:ptr];
        }
        else {
            int64_t val = [num longLongValue];
            val = integerToZigzag(val);
            uint8_t cnt = TYPEULL_BYTES_N(val);
            type |= TYPE_AND(cnt-1, NUM_4_POWOFTWO_MASK);
            type |= TYPE_LS(TYPE_AND(YZHCodeItemTypeInteger, NUM_3_POWOFTWO_MASK), TYPE_FIELD_OFFSET);
            
            dt = [NSMutableData dataWithLength: 1 + cnt];
            ptr = dt.mutableBytes;
            
            ptr[0] = type;
            ++ptr;
            [self _encodeInt64:val toBuffer:ptr];
        }
    }
    else if ([object isKindOfClass:[NSString class]]) {
        NSString *text = object;
        NSData *buf = [text dataUsingEncoding:NSUTF8StringEncoding];
        int64_t len = buf.length;
        uint8_t cnt = TYPEULL_BYTES_N(len);
        type |= TYPE_AND(cnt - 1, NUM_4_POWOFTWO_MASK);
        type |= TYPE_LS(TYPE_AND(YZHCodeItemTypeText, NUM_3_POWOFTWO_MASK), TYPE_FIELD_OFFSET);
        
        dt = [NSMutableData dataWithLength: 1 + cnt + len];
        ptr = dt.mutableBytes;
        
        ptr[0] = type;
        ++ptr;

        [self _encodeInt64:len toBuffer:ptr];
        ptr += cnt;
        memcpy(ptr, buf.bytes, len);
    }
    else if ([object isKindOfClass:[NSData class]]) {
        NSData *buf = object;
        int64_t len = buf.length;
        uint8_t cnt = TYPEULL_BYTES_N(len);
        type |= TYPE_AND(cnt - 1, NUM_4_POWOFTWO_MASK);
        type |= TYPE_LS(TYPE_AND(YZHCodeItemTypeBlob, NUM_3_POWOFTWO_MASK), TYPE_FIELD_OFFSET);
        
        dt = [NSMutableData dataWithLength: 1 + cnt + len];
        ptr = dt.mutableBytes;
        
        ptr[0] = type;
        ++ptr;

        [self _encodeInt64:len toBuffer:ptr];
        ptr += cnt;
        memcpy(ptr, buf.bytes, len);
    }
    else if ([object isKindOfClass:[NSArray class]]) {
        NSArray *array = object;
        NSMutableData *buf = [NSMutableData data];

        [array enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
            NSData *objTmp  = [self _encodeObject:obj];
            [buf appendData:objTmp];
        }];
        
        int64_t len = buf.length;
        uint8_t cnt = TYPEULL_BYTES_N(len);
        type |= TYPE_AND(cnt - 1, NUM_4_POWOFTWO_MASK);
        type |= TYPE_LS(TYPE_AND(YZHCodeItemTypeArray, NUM_3_POWOFTWO_MASK), TYPE_FIELD_OFFSET);
        
        dt = [NSMutableData dataWithLength: 1 + cnt + len];
        ptr = dt.mutableBytes;
        
        ptr[0] = type;
        ++ptr;
        
        [self _encodeInt64:len toBuffer:ptr];
        ptr += cnt;
        memcpy(ptr, buf.bytes, len);
    }
    else if ([object isKindOfClass:[NSDictionary class]]) {
        NSDictionary *dict = object;
        __block NSMutableData *buf = [NSMutableData dataWithCapacity:1024];
        [dict enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, id  _Nonnull obj, BOOL * _Nonnull stop) {
            
            NSData *keyTmp = [self _encodeObject:key];
            NSData *objTmp  = [self _encodeObject:obj];
            
            [buf appendData:keyTmp];
            [buf appendData:objTmp];
        }];
        
        int64_t len = buf.length;
        uint8_t cnt = TYPEULL_BYTES_N(len);
        type |= TYPE_AND(cnt - 1, NUM_4_POWOFTWO_MASK);
        type |= TYPE_LS(TYPE_AND(YZHCodeItemTypeDictionary, NUM_3_POWOFTWO_MASK), TYPE_FIELD_OFFSET);
        
        dt = [NSMutableData dataWithLength: 1 + cnt + len];
        ptr = dt.mutableBytes;

        ptr[0] = type;
        ++ptr;
        
        [self _encodeInt64:len toBuffer:ptr];
        ptr += cnt;
        memcpy(ptr, buf.bytes, len);
    }
    return [dt copy];
}

-(id)_decodeObjectFromBuffer:(uint8_t*)buffer length:(NSInteger)length offset:(int64_t*)offset
{
    if (buffer == nil) {
        if (offset) {
            *offset = 0;
        }
        return nil;
    }
    uint8_t *ptr = buffer;
    uint8_t type = ptr[0];
    if (type < TYPE_LS(1, 7)) {
        if (offset) {
            *offset = 1;
        }
        return nil;
    }
    uint8_t len = TYPE_AND(type, NUM_4_POWOFTWO_MASK) + 1;
    uint8_t codeType = TYPE_AND(TYPE_RS(type, TYPE_FIELD_OFFSET), NUM_3_POWOFTWO_MASK);
    if (length < 1 + len) {
        if (offset) {
            *offset = 1;
        }
        return nil;
    }
    ++ptr;
    if (codeType == YZHCodeItemTypeReal) {
        double val = [self _decodeDouble:ptr];
        if (offset) {
            *offset = 1 + sizeof(val);
        }
        return @(val);
    }
    else if (codeType == YZHCodeItemTypeInteger) {
        int64_t val = [self _decodeInt64:ptr len:len];
        val = zigzagToInteger(val);
        if (offset) {
            *offset = 1 + len;
        }
        return @(val);
    }
    else if (codeType == YZHCodeItemTypeText) {
        uint64_t size = [self _decodeInt64:ptr len:len];
        ptr += len;
        if (offset) {
            *offset = 1 + len;
        }
        if (length < 1 + len + size) {
            return nil;
        }
        NSString *text = [[NSString alloc] initWithBytes:ptr
                                                  length:size
                                                encoding:NSUTF8StringEncoding];
        if (offset) {
            *offset = 1 + len + size;
        }
        return text;
    }
    else if (codeType == YZHCodeItemTypeBlob) {
        uint64_t size = [self _decodeInt64:ptr len:len];
        ptr += len;
        if (offset) {
            *offset = 1 + len;
        }
        if (length < 1 + len + size) {
            return nil;
        }
        NSData *data = [NSData dataWithBytes:ptr length:size];
        if (offset) {
            *offset = 1 + len + size;
        }
        return data;
    }
    else if (codeType == YZHCodeItemTypeArray) {
        uint64_t size = [self _decodeInt64:ptr len:len];
        ptr += len;
        if (offset) {
            *offset = 1 + len;
        }
        if (length < 1 + len + size) {
            return nil;
        }
        if (offset) {
            *offset = 1 + len + size;
        }
        
        NSMutableArray *array = [NSMutableArray array];
        while (size > 0) {
            int64_t offset = 0;
            id obj = [self _decodeObjectFromBuffer:ptr length:size offset:&offset];
            if (obj) {
                [array addObject:obj];
            }
            ptr += offset;
            size -= offset;
        }
        

        return array;
    }
    else if (codeType == YZHCodeItemTypeDictionary) {
        uint64_t size = [self _decodeInt64:ptr len:len];
        ptr += len;
        if (offset) {
            *offset = 1 + len;
        }
        if (length < 1 + len + size) {
            return nil;
        }
        if (offset) {
            *offset = 1 + len + size;
        }
        
        NSMutableDictionary *dict = [NSMutableDictionary dictionary];
        while (size > 0) {
            int64_t offset = 0;
            id key = [self _decodeObjectFromBuffer:ptr length:size offset:&offset];
            ptr += offset;
            size -= offset;
            if (size <= 0) {
                break;
            }
            
            id obj = [self _decodeObjectFromBuffer:ptr length:size offset:&offset];
            ptr += offset;
            size -= offset;
            if (key && obj) {
                [dict setObject:obj forKey:key];
            }
        }
        return dict;
        
    }
    return nil;
}

@end
