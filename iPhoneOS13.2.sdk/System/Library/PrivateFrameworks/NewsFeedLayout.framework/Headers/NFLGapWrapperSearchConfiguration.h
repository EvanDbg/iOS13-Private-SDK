//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedLayoutSearchConfiguration-Protocol.h>

@class NSArray;
@protocol NFLFeedLayoutSearchConfiguration;

@interface NFLGapWrapperSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration>
{
    id <NFLFeedLayoutSearchConfiguration> _headlineSearchConfiguration;
}

+ (id)gapWrapperSearchConfigurationWithHeadlineSearchConfiguration:(id)arg1;
@property(retain, nonatomic) id <NFLFeedLayoutSearchConfiguration> headlineSearchConfiguration; // @synthesize headlineSearchConfiguration=_headlineSearchConfiguration;
// - (void).cxx_destruct;
- (id)preferredOrderingOfTileInfos:(id)arg1;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (double)transitionRankFromRowTypeToNone:(NSUInteger)arg1;
- (double)transitionRankFromRowType:(NSUInteger)arg1 toRowType:(NSUInteger)arg2;
- (id)nextRowTypeCandidatesForRowType:(NSUInteger)arg1;
- (double)transitionRankFromNoneToRowType:(NSUInteger)arg1;
- (BOOL)mayRowType:(NSUInteger)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3;
// - (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(NSUInteger)arg1 withTileInfos:(id)arg2;
- (Class)subBatchLayoutTilingOperationClassForRowType:(NSUInteger)arg1;
- (NSUInteger)numberOfTileInfosUsedByRowType:(NSUInteger)arg1;
- (id)descriptionForRowType:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *allRowTypes;
@property(readonly, nonatomic) NSUInteger preferredTileInfoBatchSize;
- (BOOL)supportsTileInfoType:(NSUInteger)arg1;
@property(nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithHeadlineSearchConfiguration:(id)arg1;

@end

