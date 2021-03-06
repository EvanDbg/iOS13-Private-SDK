//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVFocusRedirectView.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _TVProductBannerView : _TVFocusRedirectView <TVAppTemplateImpressionable>
{
    double _height;
    UIView *_backgroundImageView;
    UIView *_infoListView;
    UIView *_stackView;
    UIView *_heroImageView;
}

+ (id)productBannerViewWithElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) UIView *heroImageView; // @synthesize heroImageView=_heroImageView;
@property(retain, nonatomic) UIView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIView *infoListView; // @synthesize infoListView=_infoListView;
@property(retain, nonatomic) UIView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
// - (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)preferredFocusEnvironments;
- (id)initWithFrame:(CGRect)arg1;

@end

