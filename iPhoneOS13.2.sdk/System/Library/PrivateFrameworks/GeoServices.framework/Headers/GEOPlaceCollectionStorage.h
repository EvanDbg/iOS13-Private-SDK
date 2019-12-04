//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOPDAttribution, GEOPDPlaceCollection, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPlaceCollectionStorage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAttribution *_attribution;
    GEOPDPlaceCollection *_placeCollection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attribution:1;
        unsigned int read_placeCollection:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attribution:1;
        unsigned int wrote_placeCollection:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDAttribution *attribution;
@property(readonly, nonatomic) _Bool hasAttribution;
- (void)_readAttribution;
@property(retain, nonatomic) GEOPDPlaceCollection *placeCollection;
@property(readonly, nonatomic) _Bool hasPlaceCollection;
- (void)_readPlaceCollection;
- (id)initWithData:(id)arg1;
- (id)init;

@end
