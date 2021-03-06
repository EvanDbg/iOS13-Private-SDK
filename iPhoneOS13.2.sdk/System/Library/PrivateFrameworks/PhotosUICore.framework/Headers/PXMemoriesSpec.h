//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class UIColor, UIFont;

@interface PXMemoriesSpec : PXFeatureSpec
{
    BOOL _feedShouldAllowHeaders;
    BOOL _alwaysShowFavoritesBadge;
    BOOL _shouldRemoveHighlightOnScroll;
    UIColor _feedBackgroundColor;
    UIColor _selectionHighlightColor;
    long long _feedHeroPosition;
    long long _feedAxis;
    NSUInteger _feedMemoriesPerRow;
    double _feedEntryHeaderHeight;
    double _firstFeedEntryHeaderHeight;
    double _distanceBetweenHeaderBaselineAndImageTop;
    double _feedInteritemSpacing;
    long long _idiom;
    double _feedHeroImageAspectRatio;
    double _feedAdditionalContentThreshold;
    UIFont _tabTitleFont;
    UIColor _tabTitleTextColor;
    double _tabTitleBaselineOffset;
    double _tabTopContentPadding;
    UIColor _borderColor;
    double _borderWidth;
    double _orbPreviewSize;
    NSUInteger __style;
    double __displayScale;
    double __columnWidth;
    CGSize _favoriteBadgeSize;
    CGPoint _highlightedSectionHeaderOffset;
    CGPoint _borderOffset;
    UIEdgeInsets _feedEntryEdgeInsets;
    UIEdgeInsets _favoriteBadgeInset;
}

@property(readonly, nonatomic) double _columnWidth; // @synthesize _columnWidth=__columnWidth;
@property(readonly, nonatomic) double _displayScale; // @synthesize _displayScale=__displayScale;
@property(readonly, nonatomic) NSUInteger _style; // @synthesize _style=__style;
@property(readonly, nonatomic) double orbPreviewSize; // @synthesize orbPreviewSize=_orbPreviewSize;
@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(readonly, nonatomic) CGPoint borderOffset; // @synthesize borderOffset=_borderOffset;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) double tabTopContentPadding; // @synthesize tabTopContentPadding=_tabTopContentPadding;
@property(readonly, nonatomic) double tabTitleBaselineOffset; // @synthesize tabTitleBaselineOffset=_tabTitleBaselineOffset;
@property(readonly, nonatomic) UIColor *tabTitleTextColor; // @synthesize tabTitleTextColor=_tabTitleTextColor;
@property(readonly, nonatomic) UIFont *tabTitleFont; // @synthesize tabTitleFont=_tabTitleFont;
@property(readonly, nonatomic) double feedAdditionalContentThreshold; // @synthesize feedAdditionalContentThreshold=_feedAdditionalContentThreshold;
@property(readonly, nonatomic) BOOL shouldRemoveHighlightOnScroll; // @synthesize shouldRemoveHighlightOnScroll=_shouldRemoveHighlightOnScroll;
@property(readonly, nonatomic) CGPoint highlightedSectionHeaderOffset; // @synthesize highlightedSectionHeaderOffset=_highlightedSectionHeaderOffset;
@property(readonly, nonatomic) UIEdgeInsets favoriteBadgeInset; // @synthesize favoriteBadgeInset=_favoriteBadgeInset;
@property(readonly, nonatomic) CGSize favoriteBadgeSize; // @synthesize favoriteBadgeSize=_favoriteBadgeSize;
@property(readonly, nonatomic) BOOL alwaysShowFavoritesBadge; // @synthesize alwaysShowFavoritesBadge=_alwaysShowFavoritesBadge;
@property(readonly, nonatomic) double feedHeroImageAspectRatio; // @synthesize feedHeroImageAspectRatio=_feedHeroImageAspectRatio;
@property(readonly, nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(readonly, nonatomic) double feedInteritemSpacing; // @synthesize feedInteritemSpacing=_feedInteritemSpacing;
@property(readonly, nonatomic) double distanceBetweenHeaderBaselineAndImageTop; // @synthesize distanceBetweenHeaderBaselineAndImageTop=_distanceBetweenHeaderBaselineAndImageTop;
@property(readonly, nonatomic) double firstFeedEntryHeaderHeight; // @synthesize firstFeedEntryHeaderHeight=_firstFeedEntryHeaderHeight;
@property(readonly, nonatomic) double feedEntryHeaderHeight; // @synthesize feedEntryHeaderHeight=_feedEntryHeaderHeight;
@property(readonly, nonatomic) BOOL feedShouldAllowHeaders; // @synthesize feedShouldAllowHeaders=_feedShouldAllowHeaders;
@property(readonly, nonatomic) UIEdgeInsets feedEntryEdgeInsets; // @synthesize feedEntryEdgeInsets=_feedEntryEdgeInsets;
@property(readonly, nonatomic) NSUInteger feedMemoriesPerRow; // @synthesize feedMemoriesPerRow=_feedMemoriesPerRow;
@property(readonly, nonatomic) long long feedAxis; // @synthesize feedAxis=_feedAxis;
@property(readonly, nonatomic) long long feedHeroPosition; // @synthesize feedHeroPosition=_feedHeroPosition;
@property(readonly, nonatomic) UIColor *selectionHighlightColor; // @synthesize selectionHighlightColor=_selectionHighlightColor;
@property(readonly, nonatomic) UIColor *feedBackgroundColor; // @synthesize feedBackgroundColor=_feedBackgroundColor;
// - (void).cxx_destruct;
- (double)_feedInteritemSpacingForReferenceSize:(CGSize)arg1;
- (void)_calculateSectionInsetWithExtendedTraitCollection:(id)arg1;
@property(readonly, nonatomic) UIEdgeInsets layoutInsets;
- (UIColor )feedCategoryLabelTextColor;
@property(readonly, nonatomic) double feedSecondaryImagePaddingBottom;
@property(readonly, nonatomic) double bottomShadowPadding;
@property(readonly, nonatomic) double feedHeroImagePaddingBottom;
@property(readonly, nonatomic) double feedHeroImagePaddingTop;
@property(readonly, nonatomic) long long feedSectionLayoutAxis;
- (id)newLayoutGeneratorWithMetrics:(id)arg1;
@property(readonly, nonatomic) Class feedTransitionAnimationCoordinatorClass;
@property(readonly, nonatomic) Class feedLayoutMetricsClass;
@property(readonly, nonatomic) Class feedDataSourceManagerClass;
//  (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(NSUInteger)arg2 style:(NSUInteger)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(NSUInteger)arg2;

@end

