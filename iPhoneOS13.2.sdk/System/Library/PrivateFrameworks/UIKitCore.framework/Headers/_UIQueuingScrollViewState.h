//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITransitionState.h>

@class UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollViewState : _UITransitionState
{
    UIView *_view;
    UIViewController *_viewController;
    BOOL _manual;
}

@property(readonly, nonatomic, getter=isManual) BOOL manual; // @synthesize manual=_manual;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isCompatibleWithTransitionInDirection:(long long)arg1;
- (id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;

@end

