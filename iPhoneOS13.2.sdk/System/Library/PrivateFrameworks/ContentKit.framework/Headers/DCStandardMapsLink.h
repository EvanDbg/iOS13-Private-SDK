//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/DCMapsLink.h>

@class NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface DCStandardMapsLink : DCMapsLink
{
    NSURL *_URL;
    NSDictionary *_queryDictionary;
}

+ (id)mapsLinkWithURL:(id)arg1;
+ (BOOL)isMapsURL:(id)arg1;
+ (BOOL)isStandardGoogleMapsURL:(id)arg1;
+ (BOOL)isStandardAppleMapsURL:(id)arg1;
@property(copy, nonatomic) NSDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (id)streetViewLocation;
- (BOOL)showsBicycling;
- (BOOL)showsStreetView;
- (BOOL)showsTransit;
- (BOOL)showsTraffic;
- (NSUInteger)mapType;
- (long long)zoomLevel;
- (id)centerLocation;
- (NSUInteger)directionsMode;
- (id)destinationAddress;
- (id)startAddress;
- (id)searchLocation;
- (id)searchNearQuery;
- (id)searchQuery;
- (id)initWithURL:(id)arg1;

@end

