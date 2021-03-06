//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SetupAssistantUI/BFFPasscodeCreationDelegate-Protocol.h>
#import <SetupAssistantUI/BFFPasscodeInputViewDelegate-Protocol.h>

@class BFFPasscodeCreationManager, NSObject;
@protocol BFFPasscodeViewControllerDelegate;

@interface BFFPasscodeViewController : UIViewController <BFFPasscodeCreationDelegate, BFFPasscodeInputViewDelegate>
{
    BOOL _footerButtonIsSkip;
    BOOL _showingSpinner;
    NSObject<BFFPasscodeViewControllerDelegate> *_passcodeCreationDelegate;
    BFFPasscodeCreationManager *_passcodeManager;
}

+ (id)localizedFirstEntryInstructionsForTouchID;
+ (BOOL)allowSkip;
@property(retain, nonatomic) BFFPasscodeCreationManager *passcodeManager; // @synthesize passcodeManager=_passcodeManager;
@property(nonatomic) __weak NSObject<BFFPasscodeViewControllerDelegate> *passcodeCreationDelegate; // @synthesize passcodeCreationDelegate=_passcodeCreationDelegate;
// - (void).cxx_destruct;
- (void)_showPasscodeOptionsSheet;
- (id)passcodeOptionAlertController;
- (void)_commitPasscodeEntryTypeChange;
- (void)_showSkipPasscodeAlert;
- (void)_showWeakWarningAlert;
- (void)configurePasscodeTypeUsingAnimations:(BOOL)arg1;
- (id)_firstEntryInstructions;
- (id)instructionsForState:(NSUInteger)arg1;
- (id)titleForState:(NSUInteger)arg1;
- (void)_finishedWithPasscode:(id)arg1;
- (void)clear;
- (void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2;
- (void)passcodeManager:(id)arg1 didSetPasscodeWithSuccess:(BOOL)arg2 error:(id)arg3;
- (void)passcodeManagerWillSetPasscode:(id)arg1;
- (void)passcodeManager:(id)arg1 didTransitionFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)_animatedPasscodeViewTransitionToState:(NSUInteger)arg1 animation:(NSUInteger)arg2;
- (id)_passcodeInputViewForState:(NSUInteger)arg1;
- (id)passcodeInputView;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (void)passcodeInput:(id)arg1 willChangeContents:(id)arg2;
- (BOOL)_allowSkip;
- (void)_updateNextButtonForPasscode:(id)arg1;
- (void)_updateNextButton;
- (void)nextButtonPressed;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_setupFirstEntry;
- (void)loadView;
- (void)dealloc;

@end

