//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, UIEvent, UITouch;

@protocol PKDrawingGestureTarget <NSObject>
- (void)drawingEstimatedPropertiesUpdated:(NSSet *)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(UITouch *)arg1;
- (void)drawingMoved:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)drawingBegan:(UITouch *)arg1;

@optional
- (BOOL)drawingShouldBegin:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

