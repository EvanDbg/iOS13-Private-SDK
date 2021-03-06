//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEORoutePreloader.h>

#import <GeoServices/GEORoutePreloaderSubclass-Protocol.h>

@class GEOMapServiceTraits, GEOTransitSuggestedRoute, NSObject, NSTimer, _GEOTransitRoutePreloaderData;
@protocol OS_os_log;

@interface GEOTransitRoutePreloader : GEORoutePreloader <GEORoutePreloaderSubclass>
{
    GEOTransitSuggestedRoute *_suggestedRoute;
    _GEOTransitRoutePreloaderData *_reserved;
    GEOMapServiceTraits *_traits;
    double _endRoutePosition;
    NSUInteger _indexOfLastStepWithPreparedBatch;
    NSTimer *_geodCrashTimer;
    double _radialDistanceToImplicateTilesMeters;
    long long _tilesRequested;
    BOOL _shouldPreloadEntireRoute;
}

// - (void).cxx_destruct;
- (void)_geodCrashed:(id)arg1;
- (void)_loadPlacecardsForBatch:(id)arg1;
- (void)_loadTilesForBatch:(id)arg1;
- (void)_processedFinishedBatch:(id)arg1 withPartialStatus:(NSUInteger)arg2;
- (void)_processBatches;
- (void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned int)arg2;
- (void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1;
- (void)_makePreloadBatchForSteps:(id)arg1;
- (void)_makePreloadBatchForGraph;
- (void)_makeBatchForTilesAroundStationsForSteps:(id)arg1;
- (void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1;
- (void)_makeBatchesForSteps:(id)arg1;
- (void)_performNextRequests;
// - (struct PolylineCoordinate)_polylineCoordinateForDouble:(double)arg1;
- (void)_cancelAllBatches;
- (void)stopLoading;
- (void)beginLoading;
- (id)route;
- (void)updateWithRouteMatch:(id)arg1;
// - (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee )arg1 maxLength:(NSUInteger)arg2 actualLength:(NSUInteger )arg3;
// - (int)preloadStateForTile:(const struct _GEOTileKey )arg1;
- (BOOL)isSufficientlyLoaded;
@property(readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
- (BOOL)fullDebuggingEnabled;
- (BOOL)minimalDebuggingEnabled;
- (void)setShouldPreloadEntireRoute:(BOOL)arg1;
- (long long)tilesRequested;
- (void)setTraits:(id)arg1;
- (void)performTearDown;
- (void)_cancelPreloadTasks;
- (void)_resetErrorCounts;
- (void)_retryFailuresWithErrorsReset:(BOOL)arg1;
- (id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(CDUnknownBlockType)arg5;

@end

