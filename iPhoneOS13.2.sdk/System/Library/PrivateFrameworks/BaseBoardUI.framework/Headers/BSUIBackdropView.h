//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface BSUIBackdropView : _UIBackdropView
{
    double _transitionProgress;
    double _initialScale;
    double _finalScale;
    double _scaleForNoBlur;
    double _rasterizationScale;
}

@property(nonatomic) double rasterizationScale; // @synthesize rasterizationScale=_rasterizationScale;
@property(nonatomic) double scaleForNoBlur; // @synthesize scaleForNoBlur=_scaleForNoBlur;
- (void)transitionComplete;
- (void)applySettings:(id)arg1;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;

@end

