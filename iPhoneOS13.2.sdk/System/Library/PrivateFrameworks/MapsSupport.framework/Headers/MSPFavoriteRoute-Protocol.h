//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPFavorite-Protocol.h>

@class GEOComposedWaypoint;

@protocol MSPFavoriteRoute <MSPFavorite>
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property(readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
@end

