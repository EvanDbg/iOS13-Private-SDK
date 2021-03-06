//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKActionMenuGestureVelocitySample;

@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer
{
    CKActionMenuGestureVelocitySample *_velocitySample;
    CKActionMenuGestureVelocitySample *_previousVelocitySample;
    double _lastTouchTime;
    CGPoint _lastScreenLocation;
}

+ (id)actionMenuGestureRecognizer;
// - (void).cxx_destruct;
- (CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;
- (CGPoint)velocityInView:(id)arg1;
- (void)setAllowableMovement:(double)arg1;
- (void)setNumberOfTouchesRequired:(NSUInteger)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

