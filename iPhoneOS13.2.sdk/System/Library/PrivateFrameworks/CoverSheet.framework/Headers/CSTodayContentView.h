//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewBase.h>

@class UIView;

@interface CSTodayContentView : CSCoverSheetViewBase
{
    BOOL _bouncing;
    UIView *_navigationView;
    UIView *_todayView;
}

@property(nonatomic, getter=isBouncing) BOOL bouncing; // @synthesize bouncing=_bouncing;
@property(nonatomic) __weak UIView *todayView; // @synthesize todayView=_todayView;
@property(nonatomic) __weak UIView *navigationView; // @synthesize navigationView=_navigationView;
// - (void).cxx_destruct;
- (void)_resetContentAfterEdgeBounce;
- (void)_adjustContentForEdgeBounce;
- (void)layoutSubviews;

@end

