//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsUI/SGSuggestionDelegate-Protocol.h>

@class NSArray, SGBanner, SGSuggestionAction, SGSuggestionStore, UIViewController;
@protocol SGSuggestionPresenterDelegate;

@interface SGSuggestionPresenter : NSObject <UIPopoverPresentationControllerDelegate, SGSuggestionDelegate>
{
    SGBanner *_banner;
    SGSuggestionAction *_bannerPrimaryAction;
    SGSuggestionAction *_bannerDismissAction;
    UIViewController *_presentedViewController;
    SGSuggestionStore *_suggestionStore;
    BOOL _wantsToShowBanner;
    id <SGSuggestionPresenterDelegate> _delegate;
}

+ (id)formatList:(id)arg1;
@property(nonatomic) BOOL wantsToShowBanner; // @synthesize wantsToShowBanner=_wantsToShowBanner;
@property(nonatomic) __weak id <SGSuggestionPresenterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)arg1;
- (BOOL)presentationControllerShouldDismiss:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)_dismissPresentedViewController:(id)arg1;
- (id)_presentedControllerCancelButtonItem;
- (id)_presentedControllerDoneButtonItem;
- (void)_dismissViewControllerAnimated:(BOOL)arg1;
- (void)_presentModalViewController:(id)arg1 fromSourceView:(id)arg2;
- (void)_presentModalViewControllerFromButton:(id)arg1;
- (id)_presentingViewController;
- (id)_viewControllerForPresentingFromBanner;
- (long long)suggestionsUIContext;
- (void)suggestionWasUpdated:(id)arg1;
- (void)suggestion:(id)arg1 actionFinished:(BOOL)arg2;
- (void)dismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (id)formatMixedCategoriesSubtitle:(id)arg1;
- (id)formatMixedCategoriesTitle:(id)arg1;
- (void)_updateBanner;
- (void)_bannerDismiss;
- (void)_bannerPrimaryAction;
@property(readonly, nonatomic) SGBanner *banner;
- (void)removeSuggestion:(id)arg1;
- (void)addSuggestion:(id)arg1;
@property(copy, nonatomic) NSArray *suggestions;
- (void)_listDidChangeNotification:(id)arg1;
- (id)suggestionStore;
- (id)init;
- (void)dealloc;

@end

