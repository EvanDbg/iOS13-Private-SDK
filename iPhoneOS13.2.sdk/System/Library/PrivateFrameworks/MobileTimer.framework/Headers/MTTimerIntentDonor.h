//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTTimerObserver-Protocol.h>

@class MTTimerStorage, NSMutableSet, NSString;
@protocol NAScheduler;

@interface MTTimerIntentDonor : NSObject <MTTimerObserver>
{
    MTTimerStorage *_storage;
    NSMutableSet *_donatedTimerIDs;
    id <NAScheduler> _serializer;
}

@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(readonly, nonatomic) NSMutableSet *donatedTimerIDs; // @synthesize donatedTimerIDs=_donatedTimerIDs;
@property(readonly, nonatomic) MTTimerStorage *storage; // @synthesize storage=_storage;
- (void)_queue_donateCreateTimerIntent:(id)arg1 source:(id)arg2;
- (void)nextTimerDidChange:(id)arg1;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
