//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableDictionary, NSMutableIndexSet, PXLayoutPerformerOutput, PXRoundedCornerOverlayView, PXUIMediaProvider, UIColor;

@interface PXAssetCollageView : UIView
{
    BOOL _allowVideoPlayback;
    BOOL _allowLoopPlayback;
    BOOL _allowAnimatedImagePlayback;
    PXUIMediaProvider *_mediaProvider;
    double _spacing;
    double _cornerRadius;
    UIColor *_cornerBackgroundColor;
    NSMutableDictionary *_assets;
    NSMutableDictionary *_assetViews;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    NSMutableIndexSet *_hiddenItemIndexes;
    PXLayoutPerformerOutput *_layoutOutput;
}

+ (long long)maximumNumberOfItems;
@property(readonly, nonatomic) PXLayoutPerformerOutput *layoutOutput; // @synthesize layoutOutput=_layoutOutput;
@property(readonly, nonatomic) NSMutableIndexSet *hiddenItemIndexes; // @synthesize hiddenItemIndexes=_hiddenItemIndexes;
@property(readonly, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView; // @synthesize roundedCornerOverlayView=_roundedCornerOverlayView;
@property(readonly, nonatomic) NSMutableDictionary *assetViews; // @synthesize assetViews=_assetViews;
@property(readonly, nonatomic) NSMutableDictionary *assets; // @synthesize assets=_assets;
@property(nonatomic) BOOL allowAnimatedImagePlayback; // @synthesize allowAnimatedImagePlayback=_allowAnimatedImagePlayback;
@property(nonatomic) BOOL allowLoopPlayback; // @synthesize allowLoopPlayback=_allowLoopPlayback;
@property(nonatomic) BOOL allowVideoPlayback; // @synthesize allowVideoPlayback=_allowVideoPlayback;
@property(retain, nonatomic) UIColor *cornerBackgroundColor; // @synthesize cornerBackgroundColor=_cornerBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
// - (void).cxx_destruct;
- (void)_updateRoundedCornerOverlayView;
- (void)_removeAllAssetViews;
- (void)_removeAssetView:(id)arg1;
- (double)_firstAssetAspectRatio;
- (id)_displayAssetViewWithIndex:(long long)arg1;
- (id)_displayAssetViews;
- (void)_updateAssetViewsAnimatedContentEnabled;
- (id)_checkoutAndConfigureAssetViewForAsset:(id)arg1 withIndex:(long long)arg2;
- (void)_updateHiddenViews;
- (void)resetViewState;
- (id)displayAssetViewAtPoint:(CGPoint)arg1;
- (id)displayAssetViewWithAsset:(id)arg1;
- (void)setHidden:(BOOL)arg1 forItemAtIndex:(long long)arg2;
- (void)setAsset:(id)arg1 forItemAtIndex:(long long)arg2;
@property(readonly, nonatomic) long long numberOfItems;
- (void)layoutSubviews;
@property(readonly, nonatomic) BOOL portraitBias;
- (id)initWithFrame:(CGRect)arg1 mediaProvider:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

