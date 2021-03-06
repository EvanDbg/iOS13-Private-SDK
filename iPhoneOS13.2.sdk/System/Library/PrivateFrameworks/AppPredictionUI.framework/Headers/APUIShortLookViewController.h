//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AppPredictionUI/APUIIntentHandlingViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDataSource-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardPresentationDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/PLClickPresentationInteractionManagerDelegate-Protocol.h>
#import <AppPredictionUI/PLClickPresentationInteractionPresenting-Protocol.h>
#import <AppPredictionUI/SearchUIResultShortLook-Protocol.h>

@class APUIIntentHandlingViewController, APUILongLookViewController, APUITVIntentHandler, ATXAction, CRKCardPresentation, INIntent, INInteraction, NSString, NSUserActivity, NSUserDefaults, PLClickPresentationInteractionManager, SFSearchResult, UIView;
@protocol APUIShortLookViewControllerDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling, PLClickPresentationInteractionPresentable;

@interface APUIShortLookViewController : UIViewController <APUIIntentHandlingViewControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate, SearchUIResultShortLook>
{
    APUILongLookViewController<PLClickPresentationInteractionPresentable> *_presentableViewController;
    APUITVIntentHandler *_tvIntentHandler;
    double _preferredPlatterContentHeight;
    BOOL _acceptPlatterTaps;
    long long _dismissalReason;
    BOOL _actionCompletedSuccessfully;
    BOOL _hasShownLongLook;
    BOOL _wasPresentedImmediately;
    BOOL _representsVoiceShortcut;
    NSUserDefaults *_userDefaults;
    INIntent *_intent;
    NSUserActivity *_userActivity;
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;
    NSString *_bundleId;
    SFSearchResult *_searchResult;
    id <APUIShortLookViewControllerDelegate> _delegate;
    APUIIntentHandlingViewController *_intentHandlingViewController;
    ATXAction *_atxAction;
    INInteraction *_interaction;
    CRKCardPresentation *_cardPresentation;
    UIViewController<CRKCardViewControlling> *_currentCardViewController;
}

@property(retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController; // @synthesize currentCardViewController=_currentCardViewController;
@property(retain, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(retain, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(retain, nonatomic) ATXAction *atxAction; // @synthesize atxAction=_atxAction;
@property(retain, nonatomic) APUIIntentHandlingViewController *intentHandlingViewController; // @synthesize intentHandlingViewController=_intentHandlingViewController;
@property(nonatomic) __weak id <APUIShortLookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // @synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager;
// - (void).cxx_destruct;
- (void)intentHandlingViewController:(id)arg1 didComplete:(BOOL)arg2;
- (void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;
- (void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;
- (void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(CGSize)arg2;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)longLookPlatterDidTapUtilityButton:(id)arg1;
- (BOOL)longLookPlatterShouldShowUtilityButton:(id)arg1;
- (void)handOverIntentHandlingToApp;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (BOOL)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (id)_titleForLongLookViewController:(id)arg1;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)interfaceActionsForLongLook:(id)arg1;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
- (void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
- (BOOL)clickPresentationInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (id)containerViewForclickPresentationInteractionManager:(id)arg1;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (id)_debugStringForNSUA;
- (BOOL)_isDoNotDisturbIntent;
- (BOOL)_shouldAcceptPlatterTaps;
- (long long)_actionTypeForMetrics;
- (void)_dismissLongLookWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1;
- (id)_intentConfirmationActions;
- (void)_handleActionButtonForIntent;
- (id)_cardContentWithIntentResponse:(id)arg1;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void)_resetRepresentedObjectState;
- (id)_defaults;
@property(readonly, nonatomic) UIView *viewForPreview;
- (BOOL)presentImmediately:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

