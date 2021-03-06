//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMediaLibraryFetchController.h>

@class NSArray, VUIMediaEntityFetchResponse;
@protocol VUIMediaEntitiesFetchControllerDelegate;

@interface VUIMediaEntitiesFetchController : VUIMediaLibraryFetchController
{
    id <VUIMediaEntitiesFetchControllerDelegate> _delegate;
    NSArray *_requests;
    VUIMediaEntityFetchResponse *_response;
    NSArray *_responses;
}

@property(copy, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(readonly, nonatomic) VUIMediaEntityFetchResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) __weak id <VUIMediaEntitiesFetchControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_notifyFetchRequests:(id)arg1 didFailWithError:(id)arg2;
- (void)_notifyFetchRequests:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(BOOL)arg2;
- (void)_handleContentsChangeFetchControllerOperationDidComplete:(id)arg1;
- (void)_handleManualFetchControllerOperationDidComplete:(id)arg1;
- (void)_didCompleteFetchOperation:(id)arg1;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)cancelFetch;
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1;

@end

