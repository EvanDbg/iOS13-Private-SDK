//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface SVButton : UIButton
{
    id /* CDUnknownBlockType */ _touchUpInsideBlock;
    UIEdgeInsets _touchInsets;
}

@property(copy, nonatomic, setter=onTouchUpInside:) id /* CDUnknownBlockType */ touchUpInsideBlock; // @synthesize touchUpInsideBlock=_touchUpInsideBlock;
@property(nonatomic) UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
// - (void).cxx_destruct;
- (void)_privateButtonTapped;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

