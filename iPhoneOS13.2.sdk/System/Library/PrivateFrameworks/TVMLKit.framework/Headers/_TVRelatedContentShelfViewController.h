//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/__TVShelfViewControllerDelegate-Protocol.h>

@class _TVShelfViewController;

__attribute__((visibility("hidden")))
@interface _TVRelatedContentShelfViewController : UIViewController <__TVShelfViewControllerDelegate, TVAppTemplateImpressionable>
{
    _TVShelfViewController *_shelfViewController;
}

@property(retain, nonatomic) _TVShelfViewController *shelfViewController; // @synthesize shelfViewController=_shelfViewController;
// - (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2;
- (void)loadView;

@end

