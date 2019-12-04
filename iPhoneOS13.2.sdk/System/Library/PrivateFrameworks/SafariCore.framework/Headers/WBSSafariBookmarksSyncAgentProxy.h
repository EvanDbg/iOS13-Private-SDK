//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/WBSSafariBookmarksSyncAgentProtocol-Protocol.h>

@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>
{
    NSXPCConnection *__connection;
}

+ (id)sharedProxy;
@property(retain) NSXPCConnection *_connection; // @synthesize _connection=__connection;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)arg1;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)arg1;
- (void)clearLocalDataIncludingMigrationState:(_Bool)arg1 completionHandler:(id /* block */)arg2;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)arg1;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)arg1;
- (void)beginMigrationFromDAV;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)arg1;
- (void)userDidUpdateBookmarkDatabase;
- (void)userAccountDidChange:(long long)arg1;
- (void)fetchUserIdentityWithCompletionHandler:(id /* block */)arg1;
- (void)setUsesOpportunisticPushTopic:(_Bool)arg1;
- (void)registerForPushNotificationsIfNeeded;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
