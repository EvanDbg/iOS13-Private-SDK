//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBSceneDisconnectionManager : NSObject
{
    BOOL _isExecuting;
    NSUInteger _numberOfRecentScenesExcludedFromDisconnection;
}

+ (id)sharedManager;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) NSUInteger numberOfRecentScenesExcludedFromDisconnection; // @synthesize numberOfRecentScenesExcludedFromDisconnection=_numberOfRecentScenesExcludedFromDisconnection;
- (NSUInteger)positionOf:(id)arg1 inSwitcher:(id)arg2;
- (id)liveScenesForApplication:(id)arg1;
- (id)sceneManager;
- (void)disconnectScenes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldDisconnectScene:(id)arg1 inSwitcher:(id)arg2;
- (void)_beginSceneCleanupWithBackgroundedSceneEntities:(id)arg1;
- (id)init;

@end

