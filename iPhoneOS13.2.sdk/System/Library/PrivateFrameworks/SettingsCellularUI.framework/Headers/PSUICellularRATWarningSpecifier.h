//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSConfirmationSpecifier.h>

@class PSListController;

__attribute__((visibility("hidden")))
@interface PSUICellularRATWarningSpecifier : PSConfirmationSpecifier
{
    PSListController *_RATModeDrillDownController;
}

@property(retain, nonatomic) PSListController *RATModeDrillDownController; // @synthesize RATModeDrillDownController=_RATModeDrillDownController;
// - (void).cxx_destruct;
- (void)canceledRATSwitch;
- (void)acceptedRATSwitch;
- (id)initWithDrillDownController:(id)arg1;

@end

