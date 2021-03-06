//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBGroupingFlags : PBCodable <NSCopying>
{
    BOOL _isEligibleForGrouping;
    BOOL _isEligibleForGroupingIfFavorited;
    BOOL _isHidden;
//     CDStruct_d00ad9e3 _has;
}

@property(nonatomic) BOOL isEligibleForGroupingIfFavorited; // @synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited;
@property(nonatomic) BOOL isEligibleForGrouping; // @synthesize isEligibleForGrouping=_isEligibleForGrouping;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsEligibleForGroupingIfFavorited;
@property(nonatomic) BOOL hasIsEligibleForGrouping;
@property(nonatomic) BOOL hasIsHidden;

@end

