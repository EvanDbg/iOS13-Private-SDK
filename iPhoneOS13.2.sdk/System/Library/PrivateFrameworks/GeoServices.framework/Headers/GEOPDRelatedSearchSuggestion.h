//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRelatedSearchSuggestion : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayString;
    NSString *_searchBarDisplayToken;
    NSData *_suggestionEntryMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_displayString:1;
        unsigned int read_searchBarDisplayToken:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayString:1;
        unsigned int wrote_searchBarDisplayToken:1;
        unsigned int wrote_suggestionEntryMetadata:1;
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
@property(retain, nonatomic) NSString *searchBarDisplayToken;
@property(readonly, nonatomic) BOOL hasSearchBarDisplayToken;
- (void)_readSearchBarDisplayToken;
@property(retain, nonatomic) NSData *suggestionEntryMetadata;
@property(readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
- (void)_readSuggestionEntryMetadata;
@property(retain, nonatomic) NSString *displayString;
@property(readonly, nonatomic) BOOL hasDisplayString;
- (void)_readDisplayString;
- (id)initWithData:(id)arg1;
- (id)init;

@end

