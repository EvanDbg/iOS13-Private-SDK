//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, WFScrollPositionPinningCollectionView;

@interface WFPinnedScrollPosition : NSObject
{
    WFScrollPositionPinningCollectionView *_scrollView;
    UIView *_view;
    CGPoint _center;
}

@property(readonly, nonatomic) CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) __weak WFScrollPositionPinningCollectionView *scrollView; // @synthesize scrollView=_scrollView;
// - (void).cxx_destruct;
- (CGRect)adjustedBounds:(CGRect)arg1 contentSize:(CGSize)arg2;
- (id)initWithScrollView:(id)arg1 view:(id)arg2;

@end

