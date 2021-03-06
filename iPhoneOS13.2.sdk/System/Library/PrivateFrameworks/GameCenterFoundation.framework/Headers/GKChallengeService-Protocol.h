//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKChallengeInternal, NSArray, NSDictionary, NSString;

@protocol GKChallengeService <NSObject>
- (oneway void)abortChallenges:(NSArray *)arg1 handler:(void (^)(void))arg2;
- (oneway void)issueChallenge:(GKChallengeInternal *)arg1 toPlayers:(NSArray *)arg2 handler:(void (^)(NSError *))arg3;
- (oneway void)getChallengeDetailsForChallengeIDs:(NSArray *)arg1 receiverID:(NSString *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getChallengeDetailsForChallengeIDs:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getChallengesForGameDescriptor:(NSDictionary *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

