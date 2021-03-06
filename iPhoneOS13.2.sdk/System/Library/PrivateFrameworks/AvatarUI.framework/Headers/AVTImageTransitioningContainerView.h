//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVTUIAnimatingImageView, UIImage;

@interface AVTImageTransitioningContainerView : UIView
{
    UIView *_liveView;
    UIImage *_staticImage;
    long long _layoutMode;
    AVTUIAnimatingImageView *_imageViewsContainer;
    UIView *_borderMaskView;
    CGSize _aspectRatio;
}

+ (CGRect)borderMaskRectForContentRect:(CGRect)arg1;
+ (CGRect)imageViewRectForContentRect:(CGRect)arg1 liveViewRect:(CGRect)arg2 imageSize:(CGSize)arg3 scale:(double)arg4;
+ (CGRect)liveViewRectForContentRect:(CGRect)arg1 aspectRatio:(CGSize)arg2 layoutMode:(long long)arg3 scale:(double)arg4;
@property(readonly, nonatomic) UIView *borderMaskView; // @synthesize borderMaskView=_borderMaskView;
@property(readonly, nonatomic) AVTUIAnimatingImageView *imageViewsContainer; // @synthesize imageViewsContainer=_imageViewsContainer;
@property(readonly, nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(nonatomic) CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) UIImage *staticImage; // @synthesize staticImage=_staticImage;
@property(retain, nonatomic) UIView *liveView; // @synthesize liveView=_liveView;
// - (void).cxx_destruct;
- (void)setStaticViewVisible:(BOOL)arg1;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
- (void)layoutSubviews;
- (void)setStaticImage:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UIView *staticView;
- (id)initWithFrame:(CGRect)arg1 layoutMode:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

