//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKExtraLargeTimeView, NTKFaceColorScheme, UILabel, UITapGestureRecognizer, UIView;

@interface NTKExtraLargeFaceView : NTKFaceView
{
    UIView *_zoomingIconCircleView;
    UIView *_zoomingIconTimeView;
    NTKFaceColorScheme *_colorScheme;
    NSUInteger _faceColor;
    double _currentFaceViewScale;
    double _currentFaceOffsetY;
    NTKExtraLargeTimeView *_largeTimeLabel;
    NTKDigitalTimeLabel *_smallTimeLabel;
    NTKDigitalTimeLabelStyle *_smallTimeLabelStyle;
    UILabel *_timeTravelLabel;
    NTKDigitalTimeLabelStyle *_timeTravelStyle;
    UIView *_timeTravelExitView;
    UITapGestureRecognizer *_timeTravelExitRecognizer;
    BOOL _viewsOffsetForStatusBar;
    BOOL _isEditing;
    BOOL _complicationIsVisible;
    BOOL _snapshotContentViewsLoaded;
    UIView *_complicationEditingTimeOverlayView;
}

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
// - (void).cxx_destruct;
- (void)_removeTimeViews;
- (void)_createTimeViews;
- (void)_initLargeTimeLabelIfNecessary;
- (void)_initSmallTimeLabelIfNecessary;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_updateComplicationVisibility;
- (void)_configureLargeTimeLabelColors;
- (void)_configureSmallTimeLabelColors;
- (id)_complicationView;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (NSUInteger)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (double)_smallTimeAlphaForEditMode:(long long)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_noteComplicationVisibilityChanged;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_cleanupAfterZoom;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(BOOL)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_applyFrozen;
- (void)_layoutForegroundContainerView;
- (BOOL)_needsForegroundContainerView;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (id)_timeTravelStyle;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleTimeTravelTapGesture:(id)arg1;
- (BOOL)_wantsTimeTravelStatusModule;
- (BOOL)_canStartTimeScrubbing;
- (BOOL)_supportsTimeScrubbing;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (double)_statusBarOffsetForComplicationBackground;
- (double)_statusBarOffsetForComplication;
- (double)_statusBarOffsetForSmallTime;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end

