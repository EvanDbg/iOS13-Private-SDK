//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKServerChangeToken, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthCheckOperation : _BRCOperation <BRCOperationSubclass>
{
    CKServerChangeToken *_changeToken;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_deletedRecordIds;
}

// - (void).cxx_destruct;
- (void)main;
- (void)completedZoneHealthSyncDownWithRequestID:(NSUInteger)arg1 error:(id)arg2;
- (void)receivedUpdatedServerChangeToken:(id)arg1 requestID:(NSUInteger)arg2;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;

@end

