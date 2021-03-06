//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSKeepAlive : NSObject
{
    NSXPCConnection *_serverConnection;
    long long _audioType;
    BOOL _active;
    BOOL _keepAudioSessionActive;
}

@property(nonatomic) BOOL keepAudioSessionActive; // @synthesize keepAudioSessionActive=_keepAudioSessionActive;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) long long audioType; // @synthesize audioType=_audioType;
// - (void).cxx_destruct;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;
- (id)_serverConnection;
- (void)dealloc;

@end

