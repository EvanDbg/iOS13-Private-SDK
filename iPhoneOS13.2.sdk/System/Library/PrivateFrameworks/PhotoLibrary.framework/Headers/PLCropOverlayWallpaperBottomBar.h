//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PLWallpaperButton, _UIBackdropView, _UILegibilityLabel;

@interface PLCropOverlayWallpaperBottomBar : UIView
{
    BOOL _motionToggleHidden;
    BOOL _shouldOnlyShowLockScreenButton;
    BOOL _shouldOnlyShowHomeScreenButton;
    PLWallpaperButton *_doCancelButton;
    PLWallpaperButton *_doSetButton;
    PLWallpaperButton *_doSetHomeScreenButton;
    PLWallpaperButton *_doSetLockScreenButton;
    PLWallpaperButton *_doSetBothScreenButton;
    PLWallpaperButton *_motionToggle;
    _UILegibilityLabel *_titleLabel;
    UIView *_separatorLine;
    _UIBackdropView *_backdropView;
    double _maxToggleWidth;
}

@property(nonatomic) double maxToggleWidth; // @synthesize maxToggleWidth=_maxToggleWidth;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) _UILegibilityLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL shouldOnlyShowHomeScreenButton; // @synthesize shouldOnlyShowHomeScreenButton=_shouldOnlyShowHomeScreenButton;
@property(nonatomic) BOOL shouldOnlyShowLockScreenButton; // @synthesize shouldOnlyShowLockScreenButton=_shouldOnlyShowLockScreenButton;
@property(nonatomic) BOOL motionToggleHidden; // @synthesize motionToggleHidden=_motionToggleHidden;
@property(readonly, retain, nonatomic) PLWallpaperButton *motionToggle; // @synthesize motionToggle=_motionToggle;
@property(readonly, retain, nonatomic) PLWallpaperButton *doSetBothScreenButton; // @synthesize doSetBothScreenButton=_doSetBothScreenButton;
@property(readonly, retain, nonatomic) PLWallpaperButton *doSetLockScreenButton; // @synthesize doSetLockScreenButton=_doSetLockScreenButton;
@property(readonly, retain, nonatomic) PLWallpaperButton *doSetHomeScreenButton; // @synthesize doSetHomeScreenButton=_doSetHomeScreenButton;
@property(readonly, retain, nonatomic) PLWallpaperButton *doSetButton; // @synthesize doSetButton=_doSetButton;
@property(readonly, retain, nonatomic) PLWallpaperButton *doCancelButton; // @synthesize doCancelButton=_doCancelButton;
- (void)updateForChangedSettings:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)_sizeForString:(id)arg1;
- (void)setText:(id)arg1;
- (double)widthForToggleText;
- (void)_layoutSubviewsPad;
- (void)_layoutSubviewsPhone;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
- (void)_commonPLCropOverlayWallpaperBottomBarInitialization;

@end

