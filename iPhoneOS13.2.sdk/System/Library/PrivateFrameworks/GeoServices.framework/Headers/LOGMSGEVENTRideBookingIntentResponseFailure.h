//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface LOGMSGEVENTRideBookingIntentResponseFailure : PBCodable <NSCopying>
{
    int _failure;
    int _intent;
    struct {
        unsigned int has_failure:1;
        unsigned int has_intent:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
- (int)StringAsFailure:(id)arg1;
- (id)failureAsString:(int)arg1;
@property(nonatomic) BOOL hasFailure;
@property(nonatomic) int failure;
- (int)StringAsIntent:(id)arg1;
- (id)intentAsString:(int)arg1;
@property(nonatomic) BOOL hasIntent;
@property(nonatomic) int intent;

@end

