//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKChallenge, GKPlayer;

@protocol GKChallengeListener <NSObject>

@optional
- (void)player:(GKPlayer *)arg1 issuedChallengeWasCompleted:(GKChallenge *)arg2 byFriend:(GKPlayer *)arg3;
- (void)player:(GKPlayer *)arg1 didCompleteChallenge:(GKChallenge *)arg2 issuedByFriend:(GKPlayer *)arg3;
- (void)player:(GKPlayer *)arg1 didReceiveChallenge:(GKChallenge *)arg2;
- (void)player:(GKPlayer *)arg1 wantsToPlayChallenge:(GKChallenge *)arg2;
@end

