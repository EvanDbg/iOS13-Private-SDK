//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIFirstTimeExperienceViewController.h>

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController
{
    BOOL _hasBeenDisplayed;
}

+ (void)updateViewCountToCount:(long long)arg1;
+ (void)dismissForever;
+ (long long)viewCount;
+ (BOOL)needsDisplay;
@property BOOL hasBeenDisplayed; // @synthesize hasBeenDisplayed=_hasBeenDisplayed;
- (void)updateViewCount;
- (id)initWithSupportedDomains:(NSUInteger)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;

@end

