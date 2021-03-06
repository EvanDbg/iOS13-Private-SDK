//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSArray, NSLayoutConstraint, UIStackView, UIViewController;

@interface MCLViewControllerCollection : UIScrollView <UIScrollViewDelegate>
{
    UIStackView *_contentView;
    NSLayoutConstraint *_widthConstraint;
    UIViewController *_owner;
    NSArray *_views;
}

@property(copy, nonatomic) NSArray *views; // @synthesize views=_views;
@property(nonatomic) __weak UIViewController *owner; // @synthesize owner=_owner;
// - (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) double spacing;
- (id)initWithFrame:(CGRect)arg1;

@end

