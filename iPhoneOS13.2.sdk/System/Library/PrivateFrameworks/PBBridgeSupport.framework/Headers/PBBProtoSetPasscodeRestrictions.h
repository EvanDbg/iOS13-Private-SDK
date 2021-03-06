//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface PBBProtoSetPasscodeRestrictions : PBCodable <NSCopying>
{
    NSData *_restrictions;
    BOOL _wristDetectionDisabled;
    struct {
        unsigned int wristDetectionDisabled:1;
    } _has;
}

@property(nonatomic) BOOL wristDetectionDisabled; // @synthesize wristDetectionDisabled=_wristDetectionDisabled;
@property(retain, nonatomic) NSData *restrictions; // @synthesize restrictions=_restrictions;
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
@property(nonatomic) BOOL hasWristDetectionDisabled;

@end

