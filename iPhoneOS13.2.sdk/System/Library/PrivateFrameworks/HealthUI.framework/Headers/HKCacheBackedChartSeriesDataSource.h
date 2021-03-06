//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

#import <HealthUI/HKChartDataCacheObserver-Protocol.h>

@class HKChartCache;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver>
{
//     CDStruct_6ca94699 _lastStartPath;
//     CDStruct_6ca94699 _lastEndPath;
    HKChartCache *_chartCache;
}

@property(retain, nonatomic) HKChartCache *chartCache; // @synthesize chartCache=_chartCache;
// - (void).cxx_destruct;
- (void)_resetCachedPaths;
- (void)chartCacheDidUpdate:(id)arg1;
- (void)invalidateCache;
// - (BOOL)hasAvailableBlocksBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
// - (BOOL)hasPendingQueriesBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
// - (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
// - (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (id)init;

@end

