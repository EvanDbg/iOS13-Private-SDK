//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <NewsUI/NULoadingViewProviding-Protocol.h>

@class UIActivityIndicatorView, UILabel;

@interface NUActivityIndicatorLoadingView : UIView <NULoadingViewProviding>
{
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
// - (void).cxx_destruct;
- (void)loadingViewStopAnimating;
- (void)loadingViewStartAnimating;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithText:(id)arg1 activityIndicatorStyle:(long long)arg2;
- (id)initWithActivityIndicatorStyle:(long long)arg1;

@end

