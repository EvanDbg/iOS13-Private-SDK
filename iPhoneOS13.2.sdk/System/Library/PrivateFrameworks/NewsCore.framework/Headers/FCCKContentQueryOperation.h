//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCNetworkOperation.h>

@class CKQuery, CKQueryCursor, FCCKContentDatabase, FCEdgeCacheHint, NSArray, NSDictionary;

@interface FCCKContentQueryOperation : FCNetworkOperation
{
    FCCKContentDatabase *_database;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    NSUInteger _resultsLimit;
    NSArray *_desiredKeys;
    id /* CDUnknownBlockType */ _recordFetchedBlock;
    id /* CDUnknownBlockType */ _queryCompletionBlock;
    NSArray *_requestUUIDs;
    long long _networkEventType;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    CKQueryCursor *_resultCursor;
}

@property(retain, nonatomic) CKQueryCursor *resultCursor; // @synthesize resultCursor=_resultCursor;
@property(copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(copy, nonatomic) FCEdgeCacheHint *edgeCacheHint; // @synthesize edgeCacheHint=_edgeCacheHint;
@property(copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property(nonatomic) long long networkEventType; // @synthesize networkEventType=_networkEventType;
@property(copy, nonatomic) NSArray *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property(copy, nonatomic) id /* CDUnknownBlockType */ queryCompletionBlock; // @synthesize queryCompletionBlock=_queryCompletionBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) NSUInteger resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) CKQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) FCCKContentDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (id)_ckCursorFromQueryResponse:(id)arg1;
- (id)_ckRecordsFromQueryResponse:(id)arg1;
- (id)_requestOperations;
- (id)throttleGroup;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end

