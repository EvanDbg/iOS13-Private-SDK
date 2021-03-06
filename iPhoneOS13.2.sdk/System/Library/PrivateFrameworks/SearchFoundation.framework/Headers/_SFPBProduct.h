//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBProduct-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBProduct : PBCodable <_SFPBProduct, NSSecureCoding>
{
    BOOL _buyable;
    NSString *_identifier;
    NSString *_productIdentifier;
    _SFPBURL *_availabilityURL;
    NSString *_displayName;
}

@property(nonatomic) BOOL buyable; // @synthesize buyable=_buyable;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) _SFPBURL *availabilityURL; // @synthesize availabilityURL=_availabilityURL;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

@end

