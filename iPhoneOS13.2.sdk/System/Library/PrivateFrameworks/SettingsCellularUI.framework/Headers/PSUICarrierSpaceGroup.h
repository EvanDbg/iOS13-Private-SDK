//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>
#import <SettingsCellularUI/RemoteUIControllerDelegate-Protocol.h>

@class CTCarrierSpaceCapabilities, NSString, PSListController, PSSpecifier, PSUICarrierSpaceOptInSplashScreen, RemoteUIController;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceGroup : NSObject <RemoteUIControllerDelegate, PSSpecifierGroup>
{
    RemoteUIController *_remoteUIController;
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_parentSpecifier;
    CTCarrierSpaceCapabilities *_capabilities;
    PSUICarrierSpaceOptInSplashScreen *_optInSplashScreen;
}

@property(retain, nonatomic) PSUICarrierSpaceOptInSplashScreen *optInSplashScreen; // @synthesize optInSplashScreen=_optInSplashScreen;
@property(retain, nonatomic) CTCarrierSpaceCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(retain, nonatomic) RemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)disagreeOrCancelPressed;
- (void)agreePressed;
- (void)openURLWithSpecifier:(id)arg1;
- (void)showTermsAndConditions:(id)arg1 consentFlowInfo:(id)arg2;
- (void)showConsentFlow:(id)arg1;
- (void)carrierSpaceChanged;
- (id)descriptionForUsage:(id)arg1;
- (id)descriptionForPlans:(id)arg1;
- (void)newCarrierNotification;
- (id)carrierServicesSpecifier;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
