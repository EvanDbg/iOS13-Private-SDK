//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, GEORouteHypothesizerUpdater, NSError;

@protocol GEORouteHypothesizerUpdaterDelegate <NSObject>
- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg1 receivedNewRoute:(GEOComposedRoute *)arg2 request:(GEODirectionsRequest *)arg3 response:(GEODirectionsResponse *)arg4;
- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg1 willRequestNewRoute:(GEODirectionsRequest *)arg2;

@optional
- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg1 faultedWithError:(NSError *)arg2;
- (void)routeHypothesizerUpdaterDidArrive:(GEORouteHypothesizerUpdater *)arg1;
- (void)routeHypothesizerUpdater:(GEORouteHypothesizerUpdater *)arg1 didChangeTravelState:(BOOL)arg2;
@end

