//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebBookmarkCollectionSyncFlags : NSObject
{
    BOOL _syncAllowed;
    BOOL _postSyncNotificationWhenUnlocking;
    BOOL _unlockSyncRequested;
    int _syncLockFileDescriptor;
    long long _syncNotificationType;
    NSMutableSet *_lockSyncHoldRequestorPointers;
}

@property(nonatomic) BOOL unlockSyncRequested; // @synthesize unlockSyncRequested=_unlockSyncRequested;
@property(readonly, nonatomic) NSMutableSet *lockSyncHoldRequestorPointers; // @synthesize lockSyncHoldRequestorPointers=_lockSyncHoldRequestorPointers;
@property(nonatomic) BOOL postSyncNotificationWhenUnlocking; // @synthesize postSyncNotificationWhenUnlocking=_postSyncNotificationWhenUnlocking;
@property(nonatomic) long long syncNotificationType; // @synthesize syncNotificationType=_syncNotificationType;
@property(nonatomic) int syncLockFileDescriptor; // @synthesize syncLockFileDescriptor=_syncLockFileDescriptor;
@property(readonly, nonatomic) BOOL syncAllowed; // @synthesize syncAllowed=_syncAllowed;
// - (void).cxx_destruct;
- (id)initWithSyncAllowed:(BOOL)arg1;

@end

