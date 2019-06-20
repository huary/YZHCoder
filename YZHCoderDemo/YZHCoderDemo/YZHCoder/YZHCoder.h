//
//  YZHCoder.h
//  PBDemo
//
//  Created by yuan on 2019/5/26.
//  Copyright © 2019年 yuan. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, YZHCodeItemType)
{
    //是一个null值
//    YZHCodeItemTypeNULL         = 0,
    //是一个整数，可以是1-8个字节
    YZHCodeItemTypeInteger      = 0,
    //是一个浮点数，，存储为 8 字节的 IEEE 浮点数字。
    YZHCodeItemTypeReal         = 1,
    //是一个文本字段
    YZHCodeItemTypeText         = 2,
    //是一个二进制数据
    YZHCodeItemTypeBlob         = 3,
    //是一个数组[]
    YZHCodeItemTypeArray        = 4,
    //是一个字典{}
    YZHCodeItemTypeDictionary   = 5,
};

/*
 *第1个字节：最高位为1，第5位到第7位为上面的值，第4位到1位为字节数(最大支持到16字节存储的数值：2^128的值)
 *第2-8个字节：存储后面数据长度的数值，(正真存储的字节数按第一字节的最后4比特位组成的数字+1来决定)
 *附后：数据
 *
 */

@interface YZHCoder : NSObject

-(NSData*)encodeObject:(id)object;

-(id)decodeObjectWithData:(NSData*)data;

-(NSData*)encodeObject:(id)object forKey:(id)key;

@end
