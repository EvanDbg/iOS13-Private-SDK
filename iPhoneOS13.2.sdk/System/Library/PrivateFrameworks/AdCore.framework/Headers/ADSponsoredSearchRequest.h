//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class ADUserTargetingProperties;

@interface ADSponsoredSearchRequest : PBRequest <NSCopying>
{
    ADUserTargetingProperties *_properties;
    BOOL _isBaseline;
    BOOL _isTest;
    struct {
        unsigned int isBaseline:1;
        unsigned int isTest:1;
    } _has;
}

+ (id)options;
@property(nonatomic) BOOL isBaseline; // @synthesize isBaseline=_isBaseline;
@property(nonatomic) BOOL isTest; // @synthesize isTest=_isTest;
@property(retain, nonatomic) ADUserTargetingProperties *properties; // @synthesize properties=_properties;
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
@property(nonatomic) BOOL hasIsBaseline;
@property(nonatomic) BOOL hasIsTest;
@property(readonly, nonatomic) BOOL hasProperties;

@end

