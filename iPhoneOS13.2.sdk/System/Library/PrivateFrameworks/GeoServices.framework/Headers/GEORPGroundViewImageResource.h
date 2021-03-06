//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

@interface GEORPGroundViewImageResource : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _cameraNumber;
    int _loadStatus;
    unsigned int _lod;
    struct {
        unsigned int has_cameraNumber:1;
        unsigned int has_loadStatus:1;
        unsigned int has_lod:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
- (int)StringAsLoadStatus:(id)arg1;
- (id)loadStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasLoadStatus;
@property(nonatomic) int loadStatus;
@property(nonatomic) BOOL hasLod;
@property(nonatomic) unsigned int lod;
@property(nonatomic) BOOL hasCameraNumber;
@property(nonatomic) unsigned int cameraNumber;

@end

