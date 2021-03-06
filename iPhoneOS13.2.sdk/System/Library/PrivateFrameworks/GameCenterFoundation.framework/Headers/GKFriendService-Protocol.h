//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKPlayerInternal, NSArray;

@protocol GKFriendService <NSObject>
- (oneway void)establishNearbyRelationshipsUsingPlayerTokens:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getNearbyTokenForLocalPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getChallengableFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

