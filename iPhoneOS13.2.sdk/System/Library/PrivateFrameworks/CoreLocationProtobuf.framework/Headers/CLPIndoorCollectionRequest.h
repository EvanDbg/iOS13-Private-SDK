//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class CLPMeta, NSMutableArray;

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_bundleIds;
    NSMutableArray *_indoorCMAttitudes;
    NSMutableArray *_indoorCMPedometers;
    NSMutableArray *_indoorLocations;
    NSMutableArray *_indoorMotionActivitys;
    NSMutableArray *_indoorPressures;
    NSMutableArray *_indoorWifis;
    CLPMeta *_meta;
}

+ (Class)bundleIdType;
+ (Class)indoorPressureType;
+ (Class)indoorMotionActivityType;
+ (Class)indoorCMPedometerType;
+ (Class)indoorCMAttitudeType;
+ (Class)indoorLocationsType;
+ (Class)indoorWifisType;
@property(retain, nonatomic) NSMutableArray *bundleIds; // @synthesize bundleIds=_bundleIds;
@property(retain, nonatomic) NSMutableArray *indoorPressures; // @synthesize indoorPressures=_indoorPressures;
@property(retain, nonatomic) NSMutableArray *indoorMotionActivitys; // @synthesize indoorMotionActivitys=_indoorMotionActivitys;
@property(retain, nonatomic) NSMutableArray *indoorCMPedometers; // @synthesize indoorCMPedometers=_indoorCMPedometers;
@property(retain, nonatomic) NSMutableArray *indoorCMAttitudes; // @synthesize indoorCMAttitudes=_indoorCMAttitudes;
@property(retain, nonatomic) NSMutableArray *indoorLocations; // @synthesize indoorLocations=_indoorLocations;
@property(retain, nonatomic) NSMutableArray *indoorWifis; // @synthesize indoorWifis=_indoorWifis;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)bundleIdAtIndex:(NSUInteger)arg1;
- (NSUInteger)bundleIdsCount;
- (void)addBundleId:(id)arg1;
- (void)clearBundleIds;
- (id)indoorPressureAtIndex:(NSUInteger)arg1;
- (NSUInteger)indoorPressuresCount;
- (void)addIndoorPressure:(id)arg1;
- (void)clearIndoorPressures;
- (id)indoorMotionActivityAtIndex:(NSUInteger)arg1;
- (NSUInteger)indoorMotionActivitysCount;
- (void)addIndoorMotionActivity:(id)arg1;
- (void)clearIndoorMotionActivitys;
- (id)indoorCMPedometerAtIndex:(NSUInteger)arg1;
- (NSUInteger)indoorCMPedometersCount;
- (void)addIndoorCMPedometer:(id)arg1;
- (void)clearIndoorCMPedometers;
- (id)indoorCMAttitudeAtIndex:(NSUInteger)arg1;
- (NSUInteger)indoorCMAttitudesCount;
- (void)addIndoorCMAttitude:(id)arg1;
- (void)clearIndoorCMAttitudes;
- (id)indoorLocationsAtIndex:(NSUInteger)arg1;
- (NSUInteger)indoorLocationsCount;
- (void)addIndoorLocations:(id)arg1;
- (void)clearIndoorLocations;
- (id)indoorWifisAtIndex:(NSUInteger)arg1;
- (NSUInteger)indoorWifisCount;
- (void)addIndoorWifis:(id)arg1;
- (void)clearIndoorWifis;

@end

