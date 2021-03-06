//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString, SYMessageHeader;

@interface SYStartSyncSession : PBCodable <NSCopying>
{
    double _sessionTimeout;
    SYMessageHeader *_header;
    NSData *_metadata;
    NSString *_reason;
    NSString *_sessionID;
    BOOL _expectsRestartSupport;
    BOOL _expectsRollbackSupport;
    BOOL _isResetSync;
}

@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) double sessionTimeout; // @synthesize sessionTimeout=_sessionTimeout;
@property(nonatomic) BOOL expectsRestartSupport; // @synthesize expectsRestartSupport=_expectsRestartSupport;
@property(nonatomic) BOOL expectsRollbackSupport; // @synthesize expectsRollbackSupport=_expectsRollbackSupport;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) BOOL isResetSync; // @synthesize isResetSync=_isResetSync;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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
@property(readonly, nonatomic) BOOL hasReason;
@property(readonly, nonatomic) BOOL hasMetadata;

@end

