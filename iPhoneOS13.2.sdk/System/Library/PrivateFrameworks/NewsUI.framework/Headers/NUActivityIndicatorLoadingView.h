//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NewsUI/NULoadingViewProviding-Protocol.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface NUActivityIndicatorLoadingView : UIView <NULoadingViewProviding>
{
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void)loadingViewStopAnimating;
- (void)loadingViewStartAnimating;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithText:(id)arg1 activityIndicatorStyle:(long long)arg2;
- (id)initWithActivityIndicatorStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
