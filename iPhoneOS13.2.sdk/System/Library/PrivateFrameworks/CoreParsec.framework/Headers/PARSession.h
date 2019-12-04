//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/SFFeedbackListener-Protocol.h>
#import <CoreParsec/SFResourceLoader-Protocol.h>

@class GEOSearchFoundationFeedbackListener, NSFileManager, NSSet, NSString, NSXPCConnection, PARBag, PARSearchClient, PARSessionConfiguration;
@protocol PARSessionDelegate;

@interface PARSession : NSObject <SFFeedbackListener, SFResourceLoader>
{
    NSFileManager *_fileManager;
    GEOSearchFoundationFeedbackListener *_mapsListener;
    PARBag *_bag;
    // Error parsing type: AB, name: _sampled
    PARSearchClient *_client;
    PARSessionConfiguration *_configuration;
    id <PARSessionDelegate> _delegate;
    NSSet *_allowedAppsForSiriSuggestions;
}

+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 startImmediately:(_Bool)arg3;
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sharedSession;
+ (id)sharedPARSessionWithConfiguration:(id)arg1;
@property(retain) NSSet *allowedAppsForSiriSuggestions; // @synthesize allowedAppsForSiriSuggestions=_allowedAppsForSiriSuggestions;
@property __weak id <PARSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) PARSearchClient *client; // @synthesize client=_client;
- (void)didUpdateSiriSuggestionsAppWhitelist;
- (void)sendCBAEngagementFeedback:(id)arg1 query:(unsigned long long)arg2;
- (void)reportFeedback:(id)arg1 queryId:(unsigned long long)arg2;
- (void)reportFeedback:(id)arg1;
- (void)reportEvent:(id)arg1;
- (void)didSubmitUserReportFeedback:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)didGradeLookupHintRelevancy:(id)arg1;
- (void)didGradeResultRelevancy:(id)arg1;
- (void)didGoToSearch:(id)arg1;
- (void)didGoToSite:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didAppendLateSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)_flushUsingConnectionToFBF:(id)arg1;
- (void)_scheduleEagerFlush;
- (void)sendCustomFeedback:(id)arg1;
- (void)sendCustomFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)didErrorOccur:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (_Bool)loadMoreResults:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (_Bool)loadCard:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (_Bool)loadImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (unsigned long long)enabledStatus;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(id /* block */)arg2;
- (void)loadTask:(id)arg1;
- (id)taskWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)awaitBag;
@property(retain) PARBag *bag;
@property(readonly, nonatomic) NSXPCConnection *connection;
- (void)start;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2 delegate:(id)arg3 startImmediately:(_Bool)arg4;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
