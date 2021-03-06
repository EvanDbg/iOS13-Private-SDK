//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, TSDInteractiveCanvasController, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@protocol TSDGesture <NSObject>
@property(readonly, nonatomic) int gestureState;
@property(retain, nonatomic) TSDRep *targetRep;
@property(retain, nonatomic) NSString *gestureKind;
@property(nonatomic) id <TSDGestureDelegate> gestureDelegate;
@property(retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget;
- (BOOL)isDone;
- (CGPoint)naturalLocationForRep:(TSDRep *)arg1;
- (CGPoint)boundsLocationForICC:(TSDInteractiveCanvasController *)arg1;
- (CGPoint)unscaledLocationForICC:(TSDInteractiveCanvasController *)arg1;
@end

