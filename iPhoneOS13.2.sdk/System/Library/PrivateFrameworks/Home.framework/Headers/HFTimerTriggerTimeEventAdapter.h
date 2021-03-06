//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFEventBuilder;
@protocol HFTimeEventBuilder;

@interface HFTimerTriggerTimeEventAdapter : NSObject
{
    HFEventBuilder<HFTimeEventBuilder> *_eventBuilder;
}

+ (id)adapterWithEventBuilder:(id)arg1;
@property(readonly, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder; // @synthesize eventBuilder=_eventBuilder;
// - (void).cxx_destruct;
- (id)updateTrigger:(id)arg1;
- (id)createTriggerWithName:(id)arg1 timeZone:(id)arg2 recurrences:(id)arg3;
- (id)initWithEventBuilder:(id)arg1;
- (id)init;

@end

