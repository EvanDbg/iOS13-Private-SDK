//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray;

@interface SUHitTestView : UIView
{
    NSMutableArray *_hitTestTargets;
}

- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)removeHitTestTarget:(id)arg1;
- (void)addHitTestTarget:(id)arg1;
- (void)dealloc;

@end

