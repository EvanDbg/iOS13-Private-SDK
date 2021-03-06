//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBPersonalizationBucket : PBCodable <NSCopying>
{
    long long _maximum;
    long long _minimum;
    long long _treatmentId;
   struct {
        unsigned int maximum:1;
        unsigned int minimum:1;
        unsigned int treatmentId:1;
    } _has;
}

@property(nonatomic) long long treatmentId; // @synthesize treatmentId=_treatmentId;
@property(nonatomic) long long maximum; // @synthesize maximum=_maximum;
@property(nonatomic) long long minimum; // @synthesize minimum=_minimum;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTreatmentId;
@property(nonatomic) BOOL hasMaximum;
@property(nonatomic) BOOL hasMinimum;

@end

