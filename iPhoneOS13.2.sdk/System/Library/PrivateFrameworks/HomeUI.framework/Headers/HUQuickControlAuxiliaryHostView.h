//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol HUQuickControlAuxiliaryView;

@interface HUQuickControlAuxiliaryHostView : UIView
{
    UIView<HUQuickControlAuxiliaryView> *_auxiliaryView;
}

@property(retain, nonatomic) UIView<HUQuickControlAuxiliaryView> *auxiliaryView; // @synthesize auxiliaryView=_auxiliaryView;
// - (void).cxx_destruct;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;

@end

