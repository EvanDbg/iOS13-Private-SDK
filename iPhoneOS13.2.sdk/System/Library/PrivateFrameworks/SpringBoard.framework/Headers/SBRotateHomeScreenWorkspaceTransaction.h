//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/SBUIAnimationControllerObserver-Protocol.h>

@class SBDismissOverlaysAnimationController;

@interface SBRotateHomeScreenWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBDismissOverlaysAnimationController *_animationController;
}

// - (void).cxx_destruct;
- (void)begin;

@end

