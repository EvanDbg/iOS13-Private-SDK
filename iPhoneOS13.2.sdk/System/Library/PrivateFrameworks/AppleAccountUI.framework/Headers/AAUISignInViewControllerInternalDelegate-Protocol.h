//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccountUI/AAUISignInViewControllerDelegate-Protocol.h>

@class AKAppleIDAuthenticationContext, AKAppleIDAuthenticationInAppContext;

@protocol AAUISignInViewControllerInternalDelegate <AAUISignInViewControllerDelegate>

@optional
- (void)willAuthenticateWithContext:(AKAppleIDAuthenticationContext *)arg1;
- (AKAppleIDAuthenticationInAppContext *)authenticationContext;
@end

