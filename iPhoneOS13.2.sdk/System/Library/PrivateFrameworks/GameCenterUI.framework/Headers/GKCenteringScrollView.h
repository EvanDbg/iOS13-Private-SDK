//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView;

@interface GKCenteringScrollView : UIScrollView
{
    UIView *_contentView;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)centerContentViewIfDesirable;
- (void)layoutSubviews;
- (void)dealloc;

@end

