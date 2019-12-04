//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalActionDetail : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_actionLabel;
    NSString *_actionUrlComponent;
    NSString *_actionUrlVerb;
    NSString *_logoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_actionLabel:1;
        unsigned int read_actionUrlComponent:1;
        unsigned int read_actionUrlVerb:1;
        unsigned int read_logoId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_actionLabel:1;
        unsigned int wrote_actionUrlComponent:1;
        unsigned int wrote_actionUrlVerb:1;
        unsigned int wrote_logoId:1;
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
@property(retain, nonatomic) NSString *actionUrlVerb;
@property(readonly, nonatomic) _Bool hasActionUrlVerb;
- (void)_readActionUrlVerb;
@property(retain, nonatomic) NSString *actionUrlComponent;
@property(readonly, nonatomic) _Bool hasActionUrlComponent;
- (void)_readActionUrlComponent;
@property(retain, nonatomic) NSString *logoId;
@property(readonly, nonatomic) _Bool hasLogoId;
- (void)_readLogoId;
@property(retain, nonatomic) NSString *actionLabel;
@property(readonly, nonatomic) _Bool hasActionLabel;
- (void)_readActionLabel;
- (id)initWithData:(id)arg1;
- (id)init;

@end
