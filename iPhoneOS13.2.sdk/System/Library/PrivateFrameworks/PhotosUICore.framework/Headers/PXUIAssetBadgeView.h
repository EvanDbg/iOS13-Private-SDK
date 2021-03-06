//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UILabel, _PXUIAssetBadgeImageView, _PXUIAssetBadgeTopGroup;
@protocol PXUIAssetBadgeViewDelegate;

@interface PXUIAssetBadgeView : UIView
{
   struct {
        BOOL userDidSelectBadges;
    } _delegateRespondsTo;
    BOOL _isPerformingUpdate;
   struct {
        BOOL topLeftElements;
        BOOL topRightElements;
        BOOL bottomLeadingImage;
        BOOL bottomTrailingImage;
        BOOL bottomLabel;
        BOOL background;
        BOOL contentSize;
    } _needsUpdateFlags;
    _PXUIAssetBadgeTopGroup *_topLeftPrimaryGroup;
    _PXUIAssetBadgeTopGroup *_topLeftSecondaryGroup;
    _PXUIAssetBadgeTopGroup *_topRightGroup;
    _PXUIAssetBadgeImageView *_bottomLeadingImageView;
    _PXUIAssetBadgeImageView *_bottomTrailingImageView;
    UILabel *_bottomLabel;
    CGSize _contentSize;
    BOOL _overContent;
    id <PXUIAssetBadgeViewDelegate> _delegate;
    long long _style;
    double _contentWidth;
    CGSize _bottomElementsPadding;
//    struct PXAssetBadgeInfo _badgeInfo;
}

+ (id)measuringLabel;
+ (double)preferredHeightForStyle:(long long)arg1;
+ (void)preloadResourcesForStyle:(long long)arg1;
@property(nonatomic) CGSize bottomElementsPadding; // @synthesize bottomElementsPadding=_bottomElementsPadding;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(nonatomic, getter=isOverContent) BOOL overContent; // @synthesize overContent=_overContent;
@property(nonatomic) long long style; // @synthesize style=_style;
// property(nonatomic) struct PXAssetBadgeInfo badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(nonatomic) __weak id <PXUIAssetBadgeViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateContentSizeIfNeeded;
- (void)_invalidateContentSize;
- (void)_updateBackgroundIfNeeded;
- (void)_invalidateBackground;
- (void)_updateBottomLabelIfNeeded;
- (void)_invalidateBottomLabel;
- (void)_updateBottomTrailingImageIfNeeded;
- (void)_invalidateBottomTrailingImage;
- (void)_updateBottomLeadingImageIfNeeded;
- (void)_invalidateBottomLeadingImage;
//  (id)_updateTopGroup:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo)arg2;
- (void)_updateTopRightElementsIfNeeded;
- (void)_updateTopLeftElementsIfNeeded;
- (void)_invalidateTopRightElements;
- (void)_invalidateTopLeftElements;
- (void)_invalidate;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)_setBackgroundImage:(id)arg1;
- (void)_handleButton:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_layoutBottomLabel;
- (void)_layoutBottomCornersImages;
- (void)_removeViewsFromGroup:(id)arg1;
- (void)_layoutTopGroup:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL _wantsBottomLabel;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

