//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardUIServices/_SBSUICFUserNotificationContentExtensionRemoteInterface-Protocol.h>

@protocol SBSUIUserNotificationContentProviding;

@interface _SBSUICFUserNotificationContentRemoteContainerViewController : UIViewController <_SBSUICFUserNotificationContentExtensionRemoteInterface>
{
    BOOL _isLegacyContentViewController;
    UIViewController<SBSUIUserNotificationContentProviding> *_extensionViewController;
}

+ (BOOL)_isSecureForRemoteViewService;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(retain, nonatomic) UIViewController<SBSUIUserNotificationContentProviding> *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
// - (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (void)_trackChildViewController:(id)arg1;
- (id)userNotificationContentExtensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;

@end

