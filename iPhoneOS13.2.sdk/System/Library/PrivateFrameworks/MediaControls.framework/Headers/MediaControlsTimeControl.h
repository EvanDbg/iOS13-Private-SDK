//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class AVTimeFormatter, CADisplayLink, CAGradientLayer, MPCPlayerResponse, MPCPlayerResponseItem, MTVisualStylingProvider, NSArray, NSLayoutConstraint, NSString, UILabel, UILayoutGuide, UIView;

__attribute__((visibility("hidden")))
@interface MediaControlsTimeControl : UIControl <MTVisualStylingProviderObservingPrivate, UIGestureRecognizerDelegate>
{
    NSArray *_defaultConstraints;
    NSArray *_trackingConstraints;
    NSArray *_initialConstraints;
    NSLayoutConstraint *_knobViewXConstraint;
    CADisplayLink *_displayLink;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    double _lastRecordedTime;
    double _currentTimeInTrack;
    NSString *_elapsedTime;
    NSString *_remainingTime;
    BOOL _debugPreviousDisplayLinkPaused;
    BOOL _transitioning;
    BOOL _empty;
    BOOL _timeControlOnScreen;
    BOOL _currentlyTracking;
    long long _style;
    MPCPlayerResponse *_response;
    MPCPlayerResponseItem *_responseItem;
    MTVisualStylingProvider *_visualStylingProvider;
    UIView *_elapsedTrack;
    UIView *_remainingTrack;
    UIView *_knobView;
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    UILabel *_liveLabel;
    UIView *_liveBackground;
    CAGradientLayer *_liveBackgroundMask;
    UILayoutGuide *_trackLayoutGuide;
    double _sliderValue;
//     CDStruct_fce57115 _durationSnapshot;
}

@property(nonatomic, getter=isCurrentlyTracking) BOOL currentlyTracking; // @synthesize currentlyTracking=_currentlyTracking;
@property(nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
@property(retain, nonatomic) UILayoutGuide *trackLayoutGuide; // @synthesize trackLayoutGuide=_trackLayoutGuide;
@property(retain, nonatomic) CAGradientLayer *liveBackgroundMask; // @synthesize liveBackgroundMask=_liveBackgroundMask;
@property(retain, nonatomic) UIView *liveBackground; // @synthesize liveBackground=_liveBackground;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(retain, nonatomic) UIView *knobView; // @synthesize knobView=_knobView;
@property(retain, nonatomic) UIView *remainingTrack; // @synthesize remainingTrack=_remainingTrack;
@property(retain, nonatomic) UIView *elapsedTrack; // @synthesize elapsedTrack=_elapsedTrack;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(nonatomic, getter=isTimeControlOnScreen) BOOL timeControlOnScreen; // @synthesize timeControlOnScreen=_timeControlOnScreen;
// @property(nonatomic) CDStruct_fce57115 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property(retain, nonatomic) MPCPlayerResponseItem *responseItem; // @synthesize responseItem=_responseItem;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property(nonatomic, getter=isTransitioning) BOOL transitioning; // @synthesize transitioning=_transitioning;
// - (void).cxx_destruct;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBackgroundMask;
- (void)invalidateDisplayLinkIfNeeded;
- (void)createDisplayLinkIfNeeded;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_updateDisplayLinkPause;
- (void)_updateTimeControl;
- (void)_displayLinkTick:(id)arg1;
- (void)_updateStyle;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)updateLabelAvoidance;
- (void)_updateLabels:(double)arg1 withRemainingDuration:(double)arg2;
// - (void)_updateLabels:(CDStruct_fce57115)arg1 withTargetTimestamp:(double)arg2;
- (void)updateSliderConstraint;
- (void)_updateSliderPosition;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)viewDidMoveToSuperview;
- (id)initWithFrame:(CGRect)arg1;

@end

