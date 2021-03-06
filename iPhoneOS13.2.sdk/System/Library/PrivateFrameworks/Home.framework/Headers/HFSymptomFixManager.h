//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HMSymptomFixSessionDelegate-Protocol.h>

@class NSMutableSet;

@interface HFSymptomFixManager : NSObject <HMSymptomFixSessionDelegate>
{
    NSMutableSet *_items;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSMutableSet *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (void)fixSession:(id)arg1 didChangeState:(long long)arg2;
- (id)_itemForFixSession:(id)arg1;
- (id)_itemForSymptom:(id)arg1 accessory:(id)arg2;
- (void)fixSymptom:(id)arg1 forFixableObject:(id)arg2 presentingViewController:(id)arg3;
- (long long)fixStateForSymptom:(id)arg1 accessory:(id)arg2;
- (BOOL)anySymptomIsBeingFixedForFixableObject:(id)arg1;
- (id)init;

@end

