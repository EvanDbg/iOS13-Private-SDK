//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, _TVCommonSenseFooterView;

__attribute__((visibility("hidden")))
@interface _TVCommonSenseView : UIView
{
    UIView *_containerView;
    UIView *_headerView;
    NSArray *_infoViews;
    _TVCommonSenseFooterView *_footerView;
}

@property(retain, nonatomic) _TVCommonSenseFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *infoViews; // @synthesize infoViews=_infoViews;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

