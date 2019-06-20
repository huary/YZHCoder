//
//  ViewController.m
//  YZHCoderDemo
//
//  Created by yuan on 2019/6/20.
//  Copyright © 2019年 yuan. All rights reserved.
//

#import "ViewController.h"
#import "YZHCoder.h"
#include <mach/mach_time.h>


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self _test];
    
}

int64_t getUptimeInMilliseconds()
{
    const int64_t kOneMillion = 1000 * 1000;
    static mach_timebase_info_data_t s_timebase_info;
    
    if (s_timebase_info.denom == 0) {
        (void) mach_timebase_info(&s_timebase_info);
    }
    
    // mach_absolute_time() returns billionth of seconds,
    // so divide by one million to get milliseconds
    return ((mach_absolute_time() * s_timebase_info.numer) / (kOneMillion * s_timebase_info.denom));
}

-(void)_test
{
    NSNumber *n = @(1);
    NSLog(@"n=%@,n.type=%s",n,[n objCType]);
    NSDictionary *dict = [[NSBundle mainBundle] infoDictionary];//[NSDictionary dictionaryWithObject:@(123230008907998329) forKey:@"a"];
//        NSMutableDictionary *dict = [NSMutableDictionary dictionary];
//        [dict setObject:@(1) forKey:@"1"];
//        [dict setObject:@[@"a",@"b"] forKey:@"2"];
    
    
    NSLog(@"dict=%@",dict);
    
    NSInteger cnt = 1;
    
    int64_t start = getUptimeInMilliseconds();
    for (NSInteger i = 0; i < cnt; ++i) {
        @autoreleasepool {
            NSError *error = nil;
            NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dict options:0 error:&error];
            NSLog(@"jsonLen=%ld",jsonData.length);
            id obj = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingMutableLeaves error:&error];
        }
    }
    int64_t end = getUptimeInMilliseconds();
    NSLog(@"differ=%@",@(end - start));
    
    
    
    YZHCoder *coder = [[YZHCoder alloc] init];
    start = getUptimeInMilliseconds();
    for (NSInteger i = 0; i < cnt; ++i) {
        @autoreleasepool {
            NSData *dt = [coder encodeObject:dict];
            NSLog(@"dtlen=%ld",dt.length);
            NSDictionary *dic = [coder decodeObjectWithData:dt];
            NSLog(@"dic=%@",dic);
        }
    }
    end = getUptimeInMilliseconds();
    NSLog(@"differ=%@",@(end - start));
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
