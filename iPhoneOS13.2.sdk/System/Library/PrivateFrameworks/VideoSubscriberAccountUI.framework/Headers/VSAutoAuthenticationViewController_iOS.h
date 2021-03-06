//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <VideoSubscriberAccountUI/VSAutoAuthenticationViewController-Protocol.h>

@class UIButton, UILabel, UIScrollView, VSAutoAuthenticationViewModel, VSFontCenter, VSIdentityProviderLogoView, VSViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewController_iOS : UIViewController <VSAutoAuthenticationViewController>
{
    BOOL _cancellationAllowed;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSAutoAuthenticationViewModel *_viewModel;
    UIScrollView *_scrollView;
    VSIdentityProviderLogoView *_logoView;
    UILabel *_accountNameLabel;
    UILabel *_messageTitleLabel;
    UILabel *_messageLabel;
    UILabel *_noticeLabel;
    UILabel *_manualSignInTitleLabel;
    UIButton *_manualSignInButton;
    VSFontCenter *_fontCenter;
}

@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) UIButton *manualSignInButton; // @synthesize manualSignInButton=_manualSignInButton;
@property(retain, nonatomic) UILabel *manualSignInTitleLabel; // @synthesize manualSignInTitleLabel=_manualSignInTitleLabel;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *messageTitleLabel; // @synthesize messageTitleLabel=_messageTitleLabel;
@property(retain, nonatomic) UILabel *accountNameLabel; // @synthesize accountNameLabel=_accountNameLabel;
@property(retain, nonatomic) VSIdentityProviderLogoView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) VSViewModel *viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
// - (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) CGSize preferredLogoSize;
- (void)_manualSignInButtonPressed:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

