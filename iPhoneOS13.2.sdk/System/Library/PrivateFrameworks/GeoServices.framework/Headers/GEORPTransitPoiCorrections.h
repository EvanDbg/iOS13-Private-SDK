//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEORPAccessPointCorrections, GEORPAmenityCorrections, GEORPCorrectedCoordinate, GEORPMapLocation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPTransitPoiCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAccessPointCorrections *_accessPoint;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPCorrectedCoordinate *_coordinate;
    GEORPMapLocation *_mapLocation;
    NSString *_name;
    NSString *_originalName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    BOOL _lineScheduleDelay;
    BOOL _lineShapeIncorrect;
    struct {
        unsigned int has_lineScheduleDelay:1;
        unsigned int has_lineShapeIncorrect:1;
        unsigned int read_unknownFields:1;
        unsigned int read_accessPoint:1;
        unsigned int read_amenity:1;
        unsigned int read_businessHours:1;
        unsigned int read_coordinate:1;
        unsigned int read_mapLocation:1;
        unsigned int read_name:1;
        unsigned int read_originalName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_accessPoint:1;
        unsigned int wrote_amenity:1;
        unsigned int wrote_businessHours:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_mapLocation:1;
        unsigned int wrote_name:1;
        unsigned int wrote_originalName:1;
        unsigned int wrote_lineScheduleDelay:1;
        unsigned int wrote_lineShapeIncorrect:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)businessHoursType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *originalName;
@property(readonly, nonatomic) BOOL hasOriginalName;
- (void)_readOriginalName;
@property(retain, nonatomic) GEORPAccessPointCorrections *accessPoint;
@property(readonly, nonatomic) BOOL hasAccessPoint;
- (void)_readAccessPoint;
@property(nonatomic) BOOL hasLineScheduleDelay;
@property(nonatomic) BOOL lineScheduleDelay;
@property(nonatomic) BOOL hasLineShapeIncorrect;
@property(nonatomic) BOOL lineShapeIncorrect;
@property(retain, nonatomic) GEORPMapLocation *mapLocation;
@property(readonly, nonatomic) BOOL hasMapLocation;
- (void)_readMapLocation;
@property(retain, nonatomic) GEORPCorrectedCoordinate *coordinate;
@property(readonly, nonatomic) BOOL hasCoordinate;
- (void)_readCoordinate;
- (id)businessHoursAtIndex:(NSUInteger)arg1;
- (NSUInteger)businessHoursCount;
- (void)_addNoFlagsBusinessHours:(id)arg1;
- (void)addBusinessHours:(id)arg1;
- (void)clearBusinessHours;
@property(retain, nonatomic) NSMutableArray *businessHours;
- (void)_readBusinessHours;
@property(retain, nonatomic) GEORPAmenityCorrections *amenity;
@property(readonly, nonatomic) BOOL hasAmenity;
- (void)_readAmenity;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

