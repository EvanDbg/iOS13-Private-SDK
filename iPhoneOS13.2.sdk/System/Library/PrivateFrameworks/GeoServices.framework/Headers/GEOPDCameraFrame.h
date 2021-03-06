//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEOPDCameraFrame : PBCodable <NSCopying>
{
    double _altitude;
    double _latitude;
    double _longitude;
    double _pitch;
    double _roll;
    double _yaw;
//     CDStruct_3c2347a5 _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasRoll;
@property(nonatomic) double roll;
@property(nonatomic) BOOL hasPitch;
@property(nonatomic) double pitch;
@property(nonatomic) BOOL hasYaw;
@property(nonatomic) double yaw;
@property(nonatomic) BOOL hasAltitude;
@property(nonatomic) double altitude;
@property(nonatomic) BOOL hasLongitude;
@property(nonatomic) double longitude;
@property(nonatomic) BOOL hasLatitude;
@property(nonatomic) double latitude;

@end

