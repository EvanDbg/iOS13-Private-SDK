//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface CPSNavigationAlertProgressView : UIView
{
    BOOL _hasStartedAnimating;
    double _duration;
    UIView *_progressView;
}

@property(nonatomic) BOOL hasStartedAnimating; // @synthesize hasStartedAnimating=_hasStartedAnimating;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (void)startAnimating;
- (id)initWithFrame:(CGRect)arg1 duration:(double)arg2;

@end

