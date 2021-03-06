//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HomeUI/HUViewControllerCell-Protocol.h>

@class UIViewController;

@interface HUViewControllerTableViewCell : UITableViewCell <HUViewControllerCell>
{
    BOOL _ignoreRounding;
    UIViewController *_viewController;
    UIViewController *_parentViewController;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) BOOL ignoreRounding; // @synthesize ignoreRounding=_ignoreRounding;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (void)_removeFromParentViewControllerAndClearProperty:(BOOL)arg1;
- (void)removeFromParentViewController;
- (void)addToParentViewController:(id)arg1;
- (void)layoutSubviews;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)prepareForReuse;

@end

