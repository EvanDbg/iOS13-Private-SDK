//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalDeviceLockObservable-Protocol.h>

@class CalDarwinNotificationListener;
@protocol OS_dispatch_queue;

@interface CalDeviceLockObserver : NSObject <CalDeviceLockObservable>
{
    BOOL _internalHasBeenUnlockedSinceBoot;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CalDarwinNotificationListener *_notificationListener;
    id /* CDUnknownBlockType */ _stateChangedCallback;
}

+ (id)stateChangedNotificationName;
+ (BOOL)hasBeenUnlockedSinceBoot;
@property(nonatomic) BOOL internalHasBeenUnlockedSinceBoot; // @synthesize internalHasBeenUnlockedSinceBoot=_internalHasBeenUnlockedSinceBoot;
@property(copy, nonatomic) id /* CDUnknownBlockType */ stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(retain, nonatomic) CalDarwinNotificationListener *notificationListener; // @synthesize notificationListener=_notificationListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
- (void)_notificationReceived;
- (id)initWithStateChangedCallback:(CDUnknownBlockType)arg1;
- (id)init;

@end

