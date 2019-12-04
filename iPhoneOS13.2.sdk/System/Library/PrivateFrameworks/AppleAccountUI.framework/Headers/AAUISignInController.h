//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <AppleAccountUI/AAUISignInViewControllerInternalDelegate-Protocol.h>
#import <AppleAccountUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSDictionary, NSString;
@protocol AAUISignInControllerDelegate, AIDAServiceOwnerProtocol;

@interface AAUISignInController : UINavigationController <AAUISignInViewControllerInternalDelegate, UIAdaptivePresentationControllerDelegate>
{
    NSDictionary *_authenticationResults;
    id <AIDAServiceOwnerProtocol> _serviceOwnersManager;
    long long _aidaOperationUIPermissions;
    long long _currentStyle;
    _Bool _canEditUsername;
    _Bool __shouldForceOperation;
    NSString *_username;
    NSString *_serviceType;
}

@property(nonatomic, setter=_setShouldForceOperation:) _Bool _shouldForceOperation; // @synthesize _shouldForceOperation=__shouldForceOperation;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) _Bool canEditUsername; // @synthesize canEditUsername=_canEditUsername;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (unsigned long long)supportedInterfaceOrientations;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)willAuthenticateWithContext:(id)arg1;
- (void)signInViewControllerDidCancel:(id)arg1;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticationResults:(id)arg2;
- (void)_delegate_signInControllerDidCancel;
- (void)_delegate_signInControllerDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_attemptSignInForService:(id)arg1 withAuthenticationResults:(id)arg2 parentViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)_performSilentRenewalWithResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_performAuthenticationForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)_mainQueue_presentSpinnerViewControllerInParentViewController:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_mainQueue_presentAlertForError:(id)arg1 inViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_attemptSignInForServices:(id)arg1 withAuthenticationResults:(id)arg2 parentViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)_mainQueue_continueSignInWithAuthenticationResults:(id)arg1 parentViewController:(id)arg2;
- (void)_mainQueue_presentContinueUsingInViewController:(id)arg1 account:(id)arg2 serviceType:(id)arg3 completion:(id /* block */)arg4;
- (void)prepareInViewController:(id)arg1 completion:(id /* block */)arg2;
@property(retain, nonatomic, setter=_setServiceOwnersManager:) id <AIDAServiceOwnerProtocol> _serviceOwnersManager;
@property(retain, nonatomic, setter=_setAuthenticationResults:) NSDictionary *_authenticationResults;
- (_Bool)_isAuthenticatingPrimary:(id)arg1;
- (_Bool)_showsServiceIconsForService:(id)arg1;
- (_Bool)_allowsAccountCreationForService:(id)arg1;
- (id)_spinnerMessageForService:(id)arg1;
- (id)_messageStringForService:(id)arg1;
- (id)_spinnerViewController;
- (id)_signInViewController;
- (id)_continueUsingControllerForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)_updateStyleIfNeeded;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AAUISignInControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
