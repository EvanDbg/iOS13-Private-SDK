//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMTimerTrigger.h>

#import <Home/HFTriggerProtocol-Protocol.h>

@interface HMTimerTrigger (HFTimerTriggerAdditions) <HFTriggerProtocol>
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 timeString:(id)arg2 fireDate:(id)arg3 recurrences:(id)arg4 type:(NSUInteger)arg5;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3 recurrences:(id)arg4 type:(NSUInteger)arg5;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 fireDate:(id)arg2 recurrences:(id)arg3 type:(NSUInteger)arg4;
- (NSUInteger)hf_triggerType;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(NSUInteger)arg2;
@end

