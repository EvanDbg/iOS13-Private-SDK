//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriInstrumentation/SISchemaTextToSpeechEnd-Protocol.h>

@class NSData, NSString;

@interface SISchemaTextToSpeechEnd : PBCodable <SISchemaTextToSpeechEnd, NSSecureCoding>
{
    NSString *_aceID;
}

@property(copy, nonatomic) NSString *aceID; // @synthesize aceID=_aceID;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end

