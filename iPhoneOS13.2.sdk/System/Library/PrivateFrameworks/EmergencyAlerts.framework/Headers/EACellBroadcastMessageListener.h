//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAEmergencyAlertCenter;

@interface EACellBroadcastMessageListener : NSObject
{
    EAEmergencyAlertCenter *_emergencyAlertCenter;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (id)init;
- (void)_cellBroadcastMessageReceived:(id)arg1;

@end

