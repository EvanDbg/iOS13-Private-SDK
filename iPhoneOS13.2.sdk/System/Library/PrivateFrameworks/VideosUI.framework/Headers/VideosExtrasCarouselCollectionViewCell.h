//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <VideosUI/VideosExtrasCarouselCollectionViewCell-Protocol.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, NSString, UILabel, UIPinchGestureRecognizer, UIView, VideosExtrasConstrainedArtworkContainerView, VideosExtrasZoomingImageInteractiveTransitionSourceContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasCarouselCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, VideosExtrasCarouselCollectionViewCell>
{
    BOOL _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    VideosExtrasConstrainedArtworkContainerView *_thumbnailImageContainerView;
    NSLayoutConstraint *_thumbnailImageContainerViewHeightConstraint;
    NSArray *_thumbnailImageContainerViewConstraints;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    MPUContentSizeLayoutConstraint *_descriptionLabelBaselineConstraint;
    UIView *_textContainer;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    NSUInteger _itemIndex;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSString *_zoomingImageTransitionIdentifier;
    CGSize _windowSize;
}

@property(nonatomic) CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(copy, nonatomic) NSString *zoomingImageTransitionIdentifier; // @synthesize zoomingImageTransitionIdentifier=_zoomingImageTransitionIdentifier;
@property(nonatomic) BOOL allowsPinchingThumbnailImageForInteractiveZoomingImageTransition; // @synthesize allowsPinchingThumbnailImageForInteractiveZoomingImageTransition=_allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext; // @synthesize interactiveTransitionSourceContext=_interactiveTransitionSourceContext;
@property(nonatomic) NSUInteger itemIndex; // @synthesize itemIndex=_itemIndex;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLabelBaselineConstraint; // @synthesize descriptionLabelBaselineConstraint=_descriptionLabelBaselineConstraint;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleBaselineConstraint; // @synthesize subtitleBaselineConstraint=_subtitleBaselineConstraint;
@property(retain, nonatomic) NSArray *thumbnailImageContainerViewConstraints; // @synthesize thumbnailImageContainerViewConstraints=_thumbnailImageContainerViewConstraints;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailImageContainerViewHeightConstraint; // @synthesize thumbnailImageContainerViewHeightConstraint=_thumbnailImageContainerViewHeightConstraint;
@property(retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *thumbnailImageContainerView; // @synthesize thumbnailImageContainerView=_thumbnailImageContainerView;
// - (void).cxx_destruct;
- (void)_updateThumbnailArtworkViewBorder;
- (void)_setupDescriptionLabelWithConstraintsAccumulator:(id)arg1;
- (void)_setupSubtitleLabelWithConstraintsAccumulator:(id)arg1;
- (void)_setupTitleLabelWithConstraintsAccumulator:(id)arg1;
- (void)_setupThumbnailImageContainerViewWithConstraintsAccumulator:(id)arg1;
- (double)_descriptionLabelTopInset;
- (void)_handlePinchGesture:(id)arg1;
@property(readonly, nonatomic) double thumbnailImageContainerHeight;
- (id)descriptionTextStyle;
- (id)subtitleTextStyle;
- (id)titleTextStyle;
- (CGSize)thumbnailMaxSize;
- (void)setThumbnailMaxSize:(CGSize)arg1;
- (id)lockupElement;
- (void)setDescriptionText:(id)arg1;
- (id)descriptionText;
- (void)setSubtitleText:(id)arg1;
- (id)subtitleText;
- (void)setTitleText:(id)arg1;
- (id)titleText;
- (void)setThumbnailImageAccessibilityText:(id)arg1;
- (id)thumbnailImageAccessibilityText;
- (void)setThumbnailOverlayImage:(id)arg1;
- (void)setThumbnailImagePlaceholder:(id)arg1;
- (id)thumbnailImagePlaceholder;
- (void)setThumbnailBorderColor:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (id)thumbnailImage;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void)dealloc;

@end

