//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICAgeVerificationState, NSError;
@protocol MPCExplicitContentAuthorizationDelegate;

@interface MPCExplicitContentAuthorizationManager : NSObject
{
    id <MPCExplicitContentAuthorizationDelegate> _delegate;
    long long _status;
    NSError *_authorizationError;
    ICAgeVerificationState *_lastKnownAgeVerificationState;
}

+ (id)sharedManager;
@property(copy, nonatomic) ICAgeVerificationState *lastKnownAgeVerificationState; // @synthesize lastKnownAgeVerificationState=_lastKnownAgeVerificationState;
@property(copy, nonatomic) NSError *authorizationError; // @synthesize authorizationError=_authorizationError;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <MPCExplicitContentAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_explicitContentErrorWithUnderlyingError:(id)arg1 message:(id)arg2;
- (_Bool)_askPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2;
- (_Bool)_shouldAskPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2;
- (void)_setupWithAgeVerificationState:(id)arg1;
- (void)_setupWithAgeGateForItem:(id)arg1;
- (void)_updateAuthorizationStatusWithAuthorizationState:(id)arg1 forItem:(id)arg2;
- (id)_retrieveAgeVerificationStateForUserIdentity:(id)arg1;
@property(readonly, nonatomic) long long authorizationReason;
- (id)_init;
- (_Bool)isItemAuthorized:(id)arg1 shouldAskForAuthorization:(_Bool)arg2;
- (_Bool)isItemAuthorized:(id)arg1;

@end
