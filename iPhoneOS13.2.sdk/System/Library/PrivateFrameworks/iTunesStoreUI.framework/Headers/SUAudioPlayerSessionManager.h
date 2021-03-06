//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SUAudioPlayerSessionManager : NSObject
{
    NSMutableDictionary *_sessions;
}

+ (id)sessionManager;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (id)stopAllAudioPlayerSessions;
- (id)startSessionWithURL:(id)arg1;
- (id)endSessionForURL:(id)arg1;
- (id)audioPlayerForURL:(id)arg1;
@property(readonly, nonatomic) NSArray *allSessionURLs;
- (void)dealloc;
- (id)init;

@end

