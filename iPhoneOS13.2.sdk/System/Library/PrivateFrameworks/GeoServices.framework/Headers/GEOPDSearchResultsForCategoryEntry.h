//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDBrowseCategory, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchResultsForCategoryEntry : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
//     CDStruct_9f2792e4 _placeIndexs;
    GEOPDBrowseCategory *_category;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_placeIndexs:1;
        unsigned int read_category:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_placeIndexs:1;
        unsigned int wrote_category:1;
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
- (void)setPlaceIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)placeIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsPlaceIndex:(unsigned int)arg1;
- (void)addPlaceIndex:(unsigned int)arg1;
- (void)clearPlaceIndexs;
@property(readonly, nonatomic) unsigned int placeIndexs;
@property(readonly, nonatomic) NSUInteger placeIndexsCount;
- (void)_readPlaceIndexs;
@property(retain, nonatomic) GEOPDBrowseCategory *category;
@property(readonly, nonatomic) BOOL hasCategory;
- (void)_readCategory;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

