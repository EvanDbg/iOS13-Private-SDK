//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class PSSpecifier;

@interface CNFRegDisabledController : CNFRegFirstRunController
{
    PSSpecifier *_spinner;
    PSSpecifier *_turnOnButton;
}

// - (void).cxx_destruct;
- (id)getAccountNameForSpecifier:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)_setupAccountHandlersForDisabledOperation;
- (void)turnOnTapped:(id)arg1;
- (void)_deactivateSpinner;
- (void)_activateSpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_rightButtonItem;
- (id)specifierList;
- (id)bundle;

@end

