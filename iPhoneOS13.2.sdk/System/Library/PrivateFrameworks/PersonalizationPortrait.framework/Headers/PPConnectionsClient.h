//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPConnectionsClientProtocol-Protocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPConnectionsClient : NSObject <PPConnectionsClientProtocol>
{
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)recentLocationsBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (_Bool)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id *)arg6 handleBatch:(id /* block */)arg7;
- (_Bool)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id *)arg3 handleBatch:(id /* block */)arg4;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (id)init;

@end
