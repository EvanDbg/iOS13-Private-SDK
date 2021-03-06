//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardArbiter/_UIKeyboardArbitration-Protocol.h>

@class BKSProcessAssertion, BSServiceConnectionEndpointInjector, FBSCAContextSceneLayer, NSArray, NSMutableSet, NSString, NSXPCConnection, _UIKeyboardArbiter;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration>
{
    BOOL _invalidated;
    NSString *_bundleIdentifier;
    _UIKeyboardArbiter *_owner;
    BOOL _running;
    FBSCAContextSceneLayer *_sceneLayer;
    NSString *_remoteSceneID;
    BOOL _active;
    NSUInteger _wantedState;
    double _level;
    NSMutableSet *_hostedPids;
    BOOL _checkingShowability;
    int _suppressionCount;
    BOOL _wantsFence;
    BKSProcessAssertion *_remoteKeepAliveAssertion;
    NSUInteger _remoteKeepAliveAssertionCount;
    NSUInteger _remoteKeepAliveTimerCount;
    NSArray *_cachedContext;
    BSServiceConnectionEndpointInjector *_endpointGrantInjector;
    NSXPCConnection *_connection;
    double _iavHeight;
}

+ (id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2;
@property(readonly) BOOL wantsFence; // @synthesize wantsFence=_wantsFence;
@property(readonly) double iavHeight; // @synthesize iavHeight=_iavHeight;
@property(readonly) double level; // @synthesize level=_level;
@property(readonly) NSUInteger wantedState; // @synthesize wantedState=_wantedState;
@property(readonly) BOOL active; // @synthesize active=_active;
@property(readonly, retain) NSString *remoteSceneID; // @synthesize remoteSceneID=_remoteSceneID;
@property(readonly, retain) FBSCAContextSceneLayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;
@property BOOL running; // @synthesize running=_running;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (void)signalEventSourceChanged:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)focusApplicationWithProcessIdentifier:(int)arg1 sceneDeferringToken:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)uncacheWindowContext;
- (void)cacheWindowContext;
- (void)releaseProcessAssertion;
- (void)takeProcessAssertionOnRemoteWithQueue:(id)arg1;
- (BOOL)isHostingPID:(int)arg1;
- (BOOL)isHandlerShowableWithHandler:(id)arg1;
- (id)description;
- (void)retrieveMoreDebugInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveDebugInformation:(CDUnknownBlockType)arg1;
- (void)transition:(id)arg1 eventStage:(NSUInteger)arg2 withInfo:(id)arg3;
- (void)notifyHostedPIDsOfSuppression:(BOOL)arg1;
- (void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2;
- (void)notifyIAVHeight:(double)arg1;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)setWantsFencing:(BOOL)arg1;
- (void)didDetachLayer;
- (void)didAttachLayer;
- (void)checkActivation:(NSUInteger)arg1;
- (void)_reevaluateRemoteSceneID:(id)arg1;
- (void)setWindowContextID:(unsigned int)arg1 sceneIdentifier:(id)arg2 windowState:(NSUInteger)arg3 withLevel:(double)arg4;
- (void)_deactivateScene;
- (void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(BOOL)arg3 withSuppression:(int)arg4 onConnected:(CDUnknownBlockType)arg5;
@property(readonly) int processIdentifier;
- (void)dealloc;

@end

