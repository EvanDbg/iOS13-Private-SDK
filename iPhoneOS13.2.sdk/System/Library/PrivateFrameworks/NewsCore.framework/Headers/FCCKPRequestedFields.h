//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface FCCKPRequestedFields : PBCodable <NSCopying>
{
    NSMutableArray *_fields;
}

@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)fieldsAtIndex:(NSUInteger)arg1;
- (NSUInteger)fieldsCount;
- (void)addFields:(id)arg1;
- (void)clearFields;
- (void)dealloc;

@end

