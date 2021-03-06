//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDCKSyncState;
@protocol IMDCKAbstractSyncControllerDelegate;

@interface IMDCKAbstractSyncController : NSObject
{
    BOOL _isSyncing;
    id <IMDCKAbstractSyncControllerDelegate> _delegate;
}

@property __weak id <IMDCKAbstractSyncControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isSyncing; // @synthesize isSyncing=_isSyncing;
// - (void).cxx_destruct;
- (BOOL)_fetchedAllChangesFromCloudKit;
- (void)syncBatchCompleted:(NSUInteger)arg1;
- (void)addSyncDebuggingInfoToDictionary:(id)arg1;
- (id)syncStateDebuggingInfo:(id)arg1;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToUploading;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateStateToFinished;
- (long long)syncControllerRecordType;
- (void)clearLocalSyncState:(NSUInteger)arg1;
@property(readonly, nonatomic) IMDCKSyncState *syncState;
- (id)ckUtilities;
@property(readonly, nonatomic) BOOL isUsingStingRay;

@end

