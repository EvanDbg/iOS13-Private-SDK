//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSDBCache.h>

@interface PGCurationCache : CLSDBCache
{
}

+ (id)defaultCacheName;
- (void)_invalidateCacheForEventsWithIdentifiers:(id)arg1;
- (void)_invalidateCacheForEventWithIdentifier:(id)arg1 precision:(NSUInteger)arg2;
- (void)_invalidateCacheForEventWithIdentifier:(id)arg1;
- (void)_setProperties:(id)arg1 forCurationObjectWithEntityName:(id)arg2 eventIdentifier:(id)arg3 precision:(NSUInteger)arg4 predicate:(id)arg5;
- (id)_fetchCurationObjectForEntityName:(id)arg1 predicate:(id)arg2;
- (void)_setCuratedKeyAsset:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3;
- (id)_curatedKeyAssetIdentifierForEventWithIdentifier:(id)arg1 options:(id)arg2;
- (void)_setCuratedAssets:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3;
- (id)_curatedAssetIdentifiersForEventWithIdentifier:(id)arg1 options:(id)arg2;
- (void)invalidateCacheForCollectionWithIdentifier:(id)arg1;
- (id)curatedKeyAssetIdentifierForMoment:(id)arg1 options:(id)arg2;
- (id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 options:(id)arg2;
- (void)setCuratedKeyAsset:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3;
- (id)curatedAssetIdentifiersForCollectionWithIdentifier:(id)arg1 options:(id)arg2;
- (void)setCuratedAssets:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3;
- (double)contentScoreForMomentLocalIdentifier:(id)arg1 precision:(NSUInteger)arg2 isCached:(BOOL )arg3;
- (BOOL)isMomentLocalIdentifierInteresting:(id)arg1 precision:(NSUInteger)arg2 isCached:(BOOL )arg3;
- (double)contentScoreForMoment:(id)arg1 precision:(NSUInteger)arg2 isCached:(BOOL )arg3;
- (BOOL)isMomentInteresting:(id)arg1 precision:(NSUInteger)arg2 isCached:(BOOL )arg3;
- (id)curatedAssetIdentifiersForMoment:(id)arg1 options:(id)arg2;
- (void)setMeanContentScore:(double)arg1 forMoment:(id)arg2 precision:(NSUInteger)arg3;
- (void)setContentScore:(double)arg1 forMoment:(id)arg2 precision:(NSUInteger)arg3;
- (void)setMomentInteresting:(BOOL)arg1 forMoment:(id)arg2 precision:(NSUInteger)arg3;
- (void)setCuratedAssets:(id)arg1 forMoment:(id)arg2 options:(id)arg3;
- (void)setCuratedKeyAsset:(id)arg1 forMoment:(id)arg2 options:(id)arg3;
- (void)invalidateCacheForEventIdentifiers:(id)arg1;
- (void)invalidateCacheForMomentIdentifier:(id)arg1 precision:(NSUInteger)arg2;
- (void)invalidateCacheForMomentIdentifier:(id)arg1;
- (id)dataModelName;
- (id)initAtURL:(id)arg1;

@end

