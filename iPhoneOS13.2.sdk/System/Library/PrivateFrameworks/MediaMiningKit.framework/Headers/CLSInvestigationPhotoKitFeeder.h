//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class CLSFeederPrefetchOptions, NSArray, PHAssetCollection, PHFetchOptions, PHFetchResult;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder
{
    NSUInteger _assetPrefetchOptions;
    PHFetchResult *_fetchResult;
    NSArray *_allItems;
    NSUInteger _numberOfAllPeople;
    PHAssetCollection *_assetCollection;
    PHFetchOptions *_assetFetchOptions;
    CLSFeederPrefetchOptions *_prefetchOptions;
}

+ (id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3;
@property(readonly, copy, nonatomic) CLSFeederPrefetchOptions *prefetchOptions; // @synthesize prefetchOptions=_prefetchOptions;
@property(readonly, copy, nonatomic) PHFetchOptions *assetFetchOptions; // @synthesize assetFetchOptions=_assetFetchOptions;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double behavioralScore;
@property(readonly, nonatomic) NSUInteger numberOfRegularGemItems;
@property(readonly, nonatomic) NSUInteger numberOfShinyGemItems;
- (CGImageRef)itemThumbnailAtIndex:(NSUInteger)arg1 withResolution:(NSUInteger)arg2;
- (void)enumerateItemsWithOptions:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(NSUInteger)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
@property(readonly, nonatomic) NSUInteger numberOfAllPeople;
- (id)localEndDate;
- (id)localStartDate;
- (id)universalEndDate;
- (id)universalStartDate;
@property(readonly, nonatomic) BOOL hasNonJunkAssets;
@property(readonly, nonatomic) BOOL hasBestScoringAssets;
@property(readonly, nonatomic) BOOL hasFavoritedAssets;
@property(readonly, nonatomic) BOOL hasPeople;
- (NSUInteger)numberOfItems;
- (BOOL)_shouldPrefetchCurationInformation;
- (id)initWithFeederWithAssetCollection:(id)arg1 assetFetchOptions:(id)arg2 feederPrefetchOptions:(id)arg3;

@end

