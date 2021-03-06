//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBPrivacyLinkController.h>

@class OBPrivacyLinkButton, UIImageView, UITextView;

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController
{
    OBPrivacyLinkButton *_linkButton;
    BOOL bundleTitlesMatch;
    BOOL bundlesIncludePII;
}

// - (void).cxx_destruct;
@property(readonly) UITextView *textView;
@property(readonly) UIImageView *iconView;
- (void)setLinkEnabled:(BOOL)arg1;
- (void)processBundlesForTitleInformation;
- (void)loadView;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithPrivacyBundle:(id)arg1;

@end

