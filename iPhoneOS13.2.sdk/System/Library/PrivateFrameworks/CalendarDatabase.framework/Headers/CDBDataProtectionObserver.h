//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject
{
    id /* CDUnknownBlockType */ _stateChangedCallback;
    CalDeviceLockObserver *_deviceLockObserver;
}

+ (id)stateChangedNotificationName;
@property(retain, nonatomic) CalDeviceLockObserver *deviceLockObserver; // @synthesize deviceLockObserver=_deviceLockObserver;
@property(copy, nonatomic) id /* CDUnknownBlockType */ stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL dataIsAccessible;
- (void)_deviceLockStateChanged;
- (id)init;

@end

