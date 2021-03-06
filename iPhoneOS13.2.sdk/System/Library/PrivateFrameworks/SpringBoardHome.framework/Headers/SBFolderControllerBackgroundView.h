//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTMaterialView, UIImageView;
@protocol SBFolderControllerBackgroundViewDelegate;

@interface SBFolderControllerBackgroundView : UIView
{
    MTMaterialView *_blurView;
    UIImageView *_blurViewSnapshot;
    UIView *_tintView;
    UIView *_debugFreezingView;
    BOOL _transitionCancelled;
    BOOL _effectActive;
    BOOL _expanding;
    BOOL _frozen;
    BOOL _reduceTransparencyEnabled;
    id <SBFolderControllerBackgroundViewDelegate> _delegate;
    NSUInteger _effect;
    NSUInteger _currentEffect;
}

+ (id)_tintColorForEffect:(NSUInteger)arg1;
@property(nonatomic) NSUInteger currentEffect; // @synthesize currentEffect=_currentEffect;
@property(nonatomic, getter=isReduceTransparencyEnabled) BOOL reduceTransparencyEnabled; // @synthesize reduceTransparencyEnabled=_reduceTransparencyEnabled;
@property(nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen=_frozen;
@property(nonatomic, getter=isExpanding) BOOL expanding; // @synthesize expanding=_expanding;
@property(nonatomic, getter=isEffectActive) BOOL effectActive; // @synthesize effectActive=_effectActive;
@property(nonatomic) NSUInteger effect; // @synthesize effect=_effect;
@property(nonatomic, getter=isTransitionCancelled) BOOL transitionCancelled; // @synthesize transitionCancelled=_transitionCancelled;
@property(nonatomic) __weak id <SBFolderControllerBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (double)minimumHomeScreenScale;
- (BOOL)_isCurrentlyExpanding;
- (void)_updateCurrentEffect;
- (id)currentEffectMaterialRecipeName;
@property(readonly, nonatomic) NSUInteger concreteEffect;
- (void)layoutSubviews;
- (void)_reduceTransparencyEnabledStateChanged;
- (id)initWithFrame:(CGRect)arg1;

@end

