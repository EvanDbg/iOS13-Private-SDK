//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GKLeaderboard, GKPlayer, GKScore, GKTournamentDefinition, GKTournamentInternal, GKTournamentParticipant;
@protocol GKCustomTournamentDelegate;

@interface GKTournament : NSObject <NSSecureCoding>
{
    GKTournamentDefinition *_tournamentDefinition;
    GKScore *_bestScore;
    GKPlayer *_winningPlayer;
    GKTournamentParticipant *_localParticipant;
    GKLeaderboard *_leaderboard;
    NSObject<GKCustomTournamentDelegate> *_customTournamentDelegate;
    GKTournamentInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
+ (void)notifyPlayerForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)lookForAcceptedCustomTournament;
+ (id)defaultCustomTournamentForTournamentDefinition:(id)arg1;
+ (void)loadTournamentWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain) GKTournamentInternal *internal; // @synthesize internal=_internal;
@property(retain, nonatomic) NSObject<GKCustomTournamentDelegate> *customTournamentDelegate; // @synthesize customTournamentDelegate=_customTournamentDelegate;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKTournamentParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(retain, nonatomic) GKPlayer *winningPlayer; // @synthesize winningPlayer=_winningPlayer;
@property(retain, nonatomic) GKScore *bestScore; // @synthesize bestScore=_bestScore;
@property(retain, nonatomic) GKTournamentDefinition *tournamentDefinition; // @synthesize tournamentDefinition=_tournamentDefinition;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)getShareURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)declineInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acceptInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)verifyPlayerForMatchmaking:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadScoresWithScope:(long long)arg1 range:(NSRange *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTournamentStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadParticipantsWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLocalParticipantWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL registrationOpen;
- (void)getFriendCountForGroup:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTotalPlayerCountForGroup:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resumePlayWithTryToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginPlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resignFromTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerPlayerInGroup:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportScore:(long long)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;

@end

