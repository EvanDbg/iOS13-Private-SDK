//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem
{
    BOOL _newAccount;
    BOOL _promptToDisable;
}

@property(nonatomic, getter=isNewAccount) BOOL newAccount; // @synthesize newAccount=_newAccount;
- (void)notNow;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)initWithAccountURL:(id)arg1 newAccount:(BOOL)arg2 promptToDisable:(BOOL)arg3;

@end

