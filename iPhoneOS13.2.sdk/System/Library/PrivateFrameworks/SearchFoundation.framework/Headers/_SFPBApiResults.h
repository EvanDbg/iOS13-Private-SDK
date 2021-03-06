//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBApiResults-Protocol.h>

@class NSArray, NSData;

@interface _SFPBApiResults : PBCodable <_SFPBApiResults, NSSecureCoding>
{
    int _status;
    int _resultType;
    NSArray *_flights;
}

@property(copy, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) int status; // @synthesize status=_status;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)flightsAtIndex:(NSUInteger)arg1;
- (NSUInteger)flightsCount;
- (void)addFlights:(id)arg1;
- (void)clearFlights;
- (id)initWithFacade:(id)arg1;

@end

