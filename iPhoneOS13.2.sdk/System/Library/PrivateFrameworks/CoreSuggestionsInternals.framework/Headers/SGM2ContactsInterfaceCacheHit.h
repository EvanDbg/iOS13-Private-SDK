//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface SGM2ContactsInterfaceCacheHit : PBCodable <NSCopying>
{
    NSString *_key;
    BOOL _cacheHit;
//     CDStruct_fbc31351 _has;
}

@property(nonatomic) BOOL cacheHit; // @synthesize cacheHit=_cacheHit;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
@property(nonatomic) BOOL hasCacheHit;
@property(readonly, nonatomic) BOOL hasKey;

@end

