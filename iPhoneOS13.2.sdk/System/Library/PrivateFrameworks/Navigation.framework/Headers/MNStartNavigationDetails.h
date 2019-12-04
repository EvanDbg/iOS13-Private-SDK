//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, MNTraceRecordingData, NSArray, NSDictionary, NSString;

@interface MNStartNavigationDetails : NSObject <NSSecureCoding>
{
    int _navigationType;
    _Bool _fullGuidance;
    NSString *_tracePlaybackPath;
    MNTraceRecordingData *_traceRecordingData;
    _Bool _shouldSimulateLocations;
    NSString *_traceRecordingNameOverride;
    _Bool _copyTraceToCrashReporter;
    GEORouteAttributes *_routeAttributes;
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsResponse *_directionsResponse;
    NSString *_requestingAppIdentifier;
    NSArray *_routes;
    unsigned long long _selectedRouteIndex;
    NSDictionary *_traffic;
    _Bool _isReconnecting;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool copyTraceToCrashReporter; // @synthesize copyTraceToCrashReporter=_copyTraceToCrashReporter;
@property(copy, nonatomic) NSString *traceRecordingNameOverride; // @synthesize traceRecordingNameOverride=_traceRecordingNameOverride;
@property(nonatomic) _Bool shouldSimulateLocations; // @synthesize shouldSimulateLocations=_shouldSimulateLocations;
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(copy, nonatomic) NSString *tracePlaybackPath; // @synthesize tracePlaybackPath=_tracePlaybackPath;
@property(copy, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(copy, nonatomic) NSDictionary *traffic; // @synthesize traffic=_traffic;
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(copy, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
@property(copy, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(copy, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(nonatomic) _Bool fullGuidance; // @synthesize fullGuidance=_fullGuidance;
@property(nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) NSString *fullDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isReconnecting;

@end
