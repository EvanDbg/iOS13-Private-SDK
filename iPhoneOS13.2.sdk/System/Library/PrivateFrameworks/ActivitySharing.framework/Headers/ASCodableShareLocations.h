//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface ASCodableShareLocations : PBCodable <NSCopying>
{
    NSString *_activityShareURL;
    NSString *_relationshipShareURL;
}

@property(retain, nonatomic) NSString *relationshipShareURL; // @synthesize relationshipShareURL=_relationshipShareURL;
@property(retain, nonatomic) NSString *activityShareURL; // @synthesize activityShareURL=_activityShareURL;
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
@property(readonly, nonatomic) BOOL hasRelationshipShareURL;
@property(readonly, nonatomic) BOOL hasActivityShareURL;

@end

