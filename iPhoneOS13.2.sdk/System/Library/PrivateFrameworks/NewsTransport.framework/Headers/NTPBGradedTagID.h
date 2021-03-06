//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBGradedTagID : PBCodable <NSCopying>
{
    int _grade;
    int _source;
    NSString *_tagId;
   struct {
        unsigned int grade:1;
        unsigned int source:1;
    } _has;
}

@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) BOOL hasGrade;
@property(nonatomic) int grade; // @synthesize grade=_grade;
@property(readonly, nonatomic) BOOL hasTagId;

@end

