//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>
#import <HomeUI/HUAppleMusicAccountModuleControllerDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HUAppleMusicAccountModuleController, NADeallocationSentinel, NAFuture, NSString, UIAlertController;

@interface HUAppleMusicAccountViewController : HUItemTableViewController <HUAppleMusicAccountModuleControllerDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol>
{
    HUAppleMusicAccountModuleController *_appleMusicAccountModuleController;
    NAFuture *_accountArbitrationFuture;
    NADeallocationSentinel *_appleMusicLoadingViewControllerDeallocationSentinel;
    UIAlertController *_appleMusicLoadingViewController;
}

@property(retain, nonatomic) UIAlertController *appleMusicLoadingViewController; // @synthesize appleMusicLoadingViewController=_appleMusicLoadingViewController;
@property(retain, nonatomic) NADeallocationSentinel *appleMusicLoadingViewControllerDeallocationSentinel; // @synthesize appleMusicLoadingViewControllerDeallocationSentinel=_appleMusicLoadingViewControllerDeallocationSentinel;
@property(retain, nonatomic) NAFuture *accountArbitrationFuture; // @synthesize accountArbitrationFuture=_accountArbitrationFuture;
@property(retain, nonatomic) HUAppleMusicAccountModuleController *appleMusicAccountModuleController; // @synthesize appleMusicAccountModuleController=_appleMusicAccountModuleController;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (_Bool)_accessorySupportsMultiUser;
- (id)_appleMusicFooterMessage;
- (id)_appleMusicFooterView;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)appleMusicModuleControllerPresentSignInFlow:(id)arg1;
- (void)appleMusicModuleControllerDidUpdateAuthenticationState:(id)arg1;
- (void)appleMusicModuleController:(id)arg1 willPresentContext:(id)arg2 account:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)itemModuleControllers;
- (void)viewDidLoad;
- (id)initWithAccessoryGroupItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
