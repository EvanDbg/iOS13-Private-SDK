//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSProgress, NSUUID;

@protocol HKCloudSyncObserverServerInterface <NSObject>
- (NSProgress *)remote_startSyncIfRestoreNotCompletedWithUUID:(NSUUID *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)remote_startObservingSyncStatusWithCompletion:(void (^)(void))arg1;
@end

