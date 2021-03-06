//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface CAMIntensityButton : UIButton
{
    double _intensityValue;
    long long _layoutStyle;
    long long _orientation;
    UIEdgeInsets _tappableEdgeInsets;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) double intensityValue; // @synthesize intensityValue=_intensityValue;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_updateColorsAnimated:(BOOL)arg1;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isActive) BOOL active;
- (UIEdgeInsets)alignmentRectInsets;
- (id)initWithLayoutStyle:(long long)arg1;

@end

