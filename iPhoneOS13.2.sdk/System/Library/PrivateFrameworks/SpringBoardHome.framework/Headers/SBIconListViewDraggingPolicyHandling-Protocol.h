//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBIconView;
@protocol UIDropSession;

@protocol SBIconListViewDraggingPolicyHandling <UIDropInteractionDelegate>
- (void)handleSpringLoadOnIconView:(SBIconView *)arg1;
- (BOOL)allowsSpringLoadForSession:(id <UIDropSession>)arg1 onIconView:(SBIconView *)arg2;
@end

