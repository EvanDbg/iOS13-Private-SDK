//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCSolHeuristic : NSObject
{
    BOOL _alternate;
    BOOL _enforcePublisherCap;
    NSArray *_groupSizes;
    long long _iterations;
    long long _maxPublisherOccurrences;
    long long _maxUnpaidArticles;
    long long _heuristicSampleSize;
    id /* CDUnknownBlockType */ _utilityBlock;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ utilityBlock; // @synthesize utilityBlock=_utilityBlock;
@property(readonly, nonatomic) long long heuristicSampleSize; // @synthesize heuristicSampleSize=_heuristicSampleSize;
@property(readonly, nonatomic) long long maxUnpaidArticles; // @synthesize maxUnpaidArticles=_maxUnpaidArticles;
@property(readonly, nonatomic) BOOL enforcePublisherCap; // @synthesize enforcePublisherCap=_enforcePublisherCap;
@property(readonly, nonatomic) long long maxPublisherOccurrences; // @synthesize maxPublisherOccurrences=_maxPublisherOccurrences;
@property(readonly, nonatomic) long long iterations; // @synthesize iterations=_iterations;
@property(readonly, nonatomic) BOOL alternate; // @synthesize alternate=_alternate;
@property(retain, nonatomic) NSArray *groupSizes; // @synthesize groupSizes=_groupSizes;
// - (void).cxx_destruct;
- (double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)fillGroupsWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 maxPublisherOccurrences:(long long)arg6 enforcePublisherCap:(BOOL)arg7 maxUnpaidArticles:(long long)arg8 heuristicSampleSize:(long long)arg9 utilityBlock:(CDUnknownBlockType)arg10;

@end

