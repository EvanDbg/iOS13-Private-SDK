//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer;

@interface DOCDeterminateProgressRingView : UIView
{
    CALayer *_squareLayer;
    BOOL _canShowStopButton;
    double _progress;
}

+ (Class)layerClass;
@property(nonatomic) BOOL canShowStopButton; // @synthesize canShowStopButton=_canShowStopButton;
@property(nonatomic) double progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)_updateShapePath;
- (void)setTintColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

