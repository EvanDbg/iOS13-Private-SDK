//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/SBHardwareButtonGestureParametersObserver-Protocol.h>

@class SBAccessibilityHardwareButtonInteraction, SBApplication, SBHardwareButtonGestureParameters, SBHardwareButtonService, SBProximitySensorManager, SBSiriHardwareButtonInteraction, SBSleepWakeHardwareButtonInteraction, SBWalletPreArmController, SOSManager;
@protocol SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver>
{
    long long _homeButtonType;
    SBApplication *_lastLockButtonEventRecipient;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    SBWalletPreArmController *_walletPreArmController;
    SOSManager *_sosManager;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;
    long long _sosTriggerMechanism;
    BOOL _isButtonDown;
    SBSiriHardwareButtonInteraction *_siriButtonInteraction;
    SBAccessibilityHardwareButtonInteraction *_accessibilityButtonInteraction;
    SBSleepWakeHardwareButtonInteraction *_sleepWakeButtonInteraction;
    id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _proximitySensorButtonInteraction;
}

@property(retain, nonatomic) id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction; // @synthesize proximitySensorButtonInteraction=_proximitySensorButtonInteraction;
@property(retain, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction; // @synthesize sleepWakeButtonInteraction=_sleepWakeButtonInteraction;
@property(retain, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction; // @synthesize accessibilityButtonInteraction=_accessibilityButtonInteraction;
@property(retain, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction; // @synthesize siriButtonInteraction=_siriButtonInteraction;
@property(readonly, nonatomic) BOOL isButtonDown; // @synthesize isButtonDown=_isButtonDown;
// - (void).cxx_destruct;
- (void)_sendButtonEventToApp:(id)arg1 down:(BOOL)arg2;
- (BOOL)_sendButtonDownToRegisteredApp;
- (BOOL)_sendButtonUpToRegisteredApp;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (void)_registeredLockButtonAppsDidChange:(id)arg1;
- (BOOL)_isSOSActive;
- (void)_performSOSDidTriggerActions;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (id)hardwareButtonGestureParameters;
- (BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
- (BOOL)disallowsLongPressForReason:(id )arg1;
- (BOOL)disallowsTriplePressForReason:(id )arg1;
- (BOOL)disallowsDoublePressForReason:(id )arg1;
- (BOOL)disallowsSinglePressForReason:(id )arg1;
- (BOOL)_shouldWaitForDoublePress;
- (void)performLongPressCancelledActions;
- (void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performTriplePressActions;
- (void)performDoublePressActions;
- (void)performSinglePressAction;
- (BOOL)performButtonUpPreActions;
- (void)performSinglePressDidFailActions;
- (void)performForceResetSequenceBeganActions;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (void)performLongPressActions;
- (void)performSecondButtonDownActions;
- (void)performInitialButtonUpActions;
- (void)performInitialButtonDownActions;
- (void)performFinalButtonUpActions;
- (void)performSOSGestureEndedActions;
- (void)performSOSGestureBeganActions;
- (BOOL)reverseFadeOutIfNeeded;
- (id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2;

@end

