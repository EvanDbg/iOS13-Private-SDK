//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFTargetRangeUtilities : NSObject
{
}

+ (id)targetValueForService:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
+ (id)targetValueWithTargetMode:(NSUInteger)arg1 currentMode:(NSUInteger)arg2 rawTargetResponse:(id)arg3 minimumThresholdResponse:(id)arg4 maximumThresholdResponse:(id)arg5;
+ (id)targetRelativePercentValueWithTargetMode:(NSUInteger)arg1 currentMode:(NSUInteger)arg2 rawTargetResponse:(id)arg3 minimumThresholdResponse:(id)arg4 maximumThresholdResponse:(id)arg5;
+ (id)targetRelativePercentValueWithTargetMode:(NSUInteger)arg1 currentMode:(NSUInteger)arg2 rawTargetRelativePercentValue:(id)arg3 minimumThresholdRelativePercentValue:(id)arg4 maximumThresholdRelativePercentValue:(id)arg5;
+ (NSUInteger)rangeModeForCurrentHumidifierDehumidifierState:(long long)arg1;
+ (NSUInteger)rangeModeForTargetHumidifierDehumidifierState:(long long)arg1;
+ (NSUInteger)rangeModeForCurrentHeaterCoolerState:(long long)arg1;
+ (NSUInteger)rangeModeForTargetHeaterCoolerState:(long long)arg1;
+ (NSUInteger)rangeModeForHeatingCoolingMode:(long long)arg1;

@end

