//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTextViewPane.h>

#import <InternalPreferences/MFMailComposeViewControllerDelegate-Protocol.h>

@class MFMailComposeViewController, PSRootController, UIBarButtonItem;

@interface PropertyListPane : PSTextViewPane <MFMailComposeViewControllerDelegate>
{
    UIBarButtonItem *_emailButton;
    MFMailComposeViewController *_mailComposeController;
    PSRootController *_rootController;
}

@property(nonatomic) __weak PSRootController *rootController; // @synthesize rootController=_rootController;
@property(retain, nonatomic) MFMailComposeViewController *mailComposeController; // @synthesize mailComposeController=_mailComposeController;
@property(retain, nonatomic) UIBarButtonItem *emailButton; // @synthesize emailButton=_emailButton;
// - (void).cxx_destruct;
- (void)emailFile:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)setPreferenceSpecifier:(id)arg1;

@end

