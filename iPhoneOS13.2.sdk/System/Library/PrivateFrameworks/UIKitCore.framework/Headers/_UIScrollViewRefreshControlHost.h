//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIRefreshControlHosting-Protocol.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting>
{
    UIScrollView *_scrollView;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
}

// - (void).cxx_destruct;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (void)incrementInsetHeight:(double)arg1;
- (void)decrementInsetHeight:(double)arg1;
@property(readonly) __weak UIScrollView *scrollView;
@property(readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
- (id)initWithScrollView:(id)arg1;

@end

