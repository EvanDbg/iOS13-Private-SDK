//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WFDrawerAnimation;

@protocol WFDrawerDragTracking <NSObject>
@property(readonly) double maxTranslationY;
@property(readonly) double minTranslationY;
- (void)updateDragForVerticalTranslation:(double)arg1;
- (void)endDraggingWithAnimation:(WFDrawerAnimation *)arg1;
- (void)endDragging;
- (void)beginDragging;
@end

