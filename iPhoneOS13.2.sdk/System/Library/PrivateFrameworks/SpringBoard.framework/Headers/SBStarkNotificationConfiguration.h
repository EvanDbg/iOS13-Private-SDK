//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBStarkNotificationsConfiguring-Protocol.h>
#import <SpringBoard/SBWindowLayoutStrategy-Protocol.h>

@class BSServiceConnectionEndpoint, CRCarPlayAppPolicyEvaluator, FBSDisplayIdentity, NSHashTable, NSMutableDictionary, NSString, UIWindow;

@interface SBStarkNotificationConfiguration : NSObject <SBStarkNotificationsConfiguring, SBWindowLayoutStrategy>
{
    UIWindow *_focusWindow;
    FBSDisplayIdentity *_displayIdentity;
    _Bool _connectedWirelessly;
    CRCarPlayAppPolicyEvaluator *_appPolicyEvaluator;
    NSMutableDictionary *_appPolicyForBundleID;
    BSServiceConnectionEndpoint *_openServiceEndpoint;
    struct CGRect _sceneBounds;
    NSHashTable *_layoutObservers;
}

@property(readonly, nonatomic) BSServiceConnectionEndpoint *openServiceEndpoint; // @synthesize openServiceEndpoint=_openServiceEndpoint;
@property(readonly, nonatomic, getter=isConnectedWirelessly) _Bool connectedWirelessly; // @synthesize connectedWirelessly=_connectedWirelessly;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
@property(readonly, nonatomic) UIWindow *focusWindow; // @synthesize focusWindow=_focusWindow;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)shouldClipForWindow:(id)arg1;
- (struct CGRect)frameWithInterfaceOrientation:(long long)arg1;
- (id)policyForApp:(id)arg1;
- (void)setGeoSupported:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
