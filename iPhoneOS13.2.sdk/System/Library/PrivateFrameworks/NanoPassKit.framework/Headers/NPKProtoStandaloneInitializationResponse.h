//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NPKProtoStandaloneError, NPKProtoStandaloneResponseHeader, NSString;

@interface NPKProtoStandaloneInitializationResponse : PBCodable <NSCopying>
{
   struct {
        int list;
        NSUInteger count;
        NSUInteger size;
    } _supportedServerVersions;
    NSString *_clientInfoHTTPHeader;
    NPKProtoStandaloneError *_error;
    NPKProtoStandaloneResponseHeader *_responseHeader;
}

@property(retain, nonatomic) NPKProtoStandaloneError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *clientInfoHTTPHeader; // @synthesize clientInfoHTTPHeader=_clientInfoHTTPHeader;
@property(retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // @synthesize responseHeader=_responseHeader;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasError;
@property(readonly, nonatomic) BOOL hasClientInfoHTTPHeader;
- (int)StringAsSupportedServerVersions:(id)arg1;
- (id)supportedServerVersionsAsString:(int)arg1;
- (void)setSupportedServerVersions:(int )arg1 count:(NSUInteger)arg2;
- (int)supportedServerVersionsAtIndex:(NSUInteger)arg1;
- (void)addSupportedServerVersions:(int)arg1;
- (void)clearSupportedServerVersions;
@property(readonly, nonatomic) int supportedServerVersions;
@property(readonly, nonatomic) NSUInteger supportedServerVersionsCount;
- (void)dealloc;

@end

