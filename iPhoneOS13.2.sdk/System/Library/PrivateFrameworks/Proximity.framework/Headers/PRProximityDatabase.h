//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRProximityDatabase : NSObject
{
}

+ (BOOL)getDeviceBtRxOffsetFromModel:(long long)arg1;
+ (BOOL)getDeviceBtTxPowerFromModel:(long long)arg1;
+ (long long)getScannerDeviceModel;
+ (long long)getPRDeviceModelFromModelId:(id)arg1;
+ (BOOL)getProximityDeviceParameters:(id )arg1 forDeviceModel:(id)arg2 withError:(id )arg3;
+ (id)getDeviceData;
- (id)init;

@end

