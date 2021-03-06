//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAGraphRegistration-Protocol.h>
#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>

@class PFDispatchQueue, PGManager, PHAServiceClientHandler;

@interface PHAGraphServiceClientHandler : NSObject <PHAGraphRegistration, PHAServiceOperationHandling>
{
    PHAServiceClientHandler *_serviceClientHandler;
    PGManager *_pgGraphManager;
    PFDispatchQueue *_requestQueue;
    NSUInteger _requestCount;
}

// - (void).cxx_destruct;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateDidStop;
- (id)currentlyUnavailableError;
- (void)operationDidFinish:(id)arg1;
- (void)operationWillStart:(id)arg1;
- (void)handleOperation:(id)arg1;
- (void)_endGraphOperation;
- (void)_beginGraphOperation:(id)arg1;
- (BOOL)wantsGraphUpdateNotifications;
- (BOOL)wantsLiveGraphUpdates;
- (id)phaGraphManager;
- (id)initWithServiceClientHandler:(id)arg1;
- (id)libraryTemporarilyUnavailableError;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)runCurationWithItems:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)generateQuestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(NSUInteger)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(NSUInteger)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(NSUInteger)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end

