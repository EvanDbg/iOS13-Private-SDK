//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKDatabaseStore-Protocol.h>

@class CKServerChangeToken, NSDate, NSMutableDictionary;

@interface SCKDatabaseMemoryStore : NSObject <SCKDatabaseStore>
{
    BOOL _cloudBackupEnabled;
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSMutableDictionary *_zoneStoresByName;
}

@property(copy, nonatomic) NSMutableDictionary *zoneStoresByName; // @synthesize zoneStoresByName=_zoneStoresByName;
@property(nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled; // @synthesize cloudBackupEnabled=_cloudBackupEnabled;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate; // @synthesize lastDirtyDate=_lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
// - (void).cxx_destruct;
- (id)zoneStoreForSchema:(id)arg1;
- (id)init;

@end

