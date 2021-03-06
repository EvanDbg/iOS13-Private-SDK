//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMSetupSupport/TSSIMSetupFlow.h>

#import <SIMSetupSupport/TSCellularPlanManagerCacheDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSError, NSString, UIBarButtonItem, UIViewController;
@protocol TSSetupFlowItem;

@interface TSActivationCodeOnlyFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>
{
    BOOL _confirmationCodeRequired;
    NSError *_planInstallError;
    NSString *_carrierName;
    NSUInteger _userConsentType;
    UIBarButtonItem *_cancelButton;
    UIViewController<TSSetupFlowItem> *_currentViewController;
    BOOL _isPreinstallingViewControllerActive;
}

@property BOOL isPreinstallingViewControllerActive; // @synthesize isPreinstallingViewControllerActive=_isPreinstallingViewControllerActive;
// - (void).cxx_destruct;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;
- (void)popViewController:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;
- (long long)signupUserConsentResponse;
- (id)nextViewControllerFrom:(id)arg1;
- (void)firstViewController:(CDUnknownBlockType)arg1;
- (id)firstViewController;
- (void)dealloc;
- (id)init;

@end

