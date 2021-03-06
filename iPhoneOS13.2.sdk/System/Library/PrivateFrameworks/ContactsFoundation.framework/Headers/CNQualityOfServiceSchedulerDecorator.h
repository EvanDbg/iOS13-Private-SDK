//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@protocol CNScheduler;

@interface CNQualityOfServiceSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;
    NSUInteger _qualityOfService;
}

@property(readonly, nonatomic) NSUInteger qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
// - (void).cxx_destruct;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(NSUInteger)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(NSUInteger)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(NSUInteger)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithScheduler:(id)arg1 qualityOfService:(NSUInteger)arg2;

@end

