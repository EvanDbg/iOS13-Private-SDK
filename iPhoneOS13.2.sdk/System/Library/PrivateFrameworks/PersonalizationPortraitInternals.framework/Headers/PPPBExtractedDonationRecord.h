//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface PPPBExtractedDonationRecord : PBCodable <NSCopying>
{
    double _score;
    NSUInteger _topicId;
    NSUInteger _unixTimestampSec;
    NSString *_algorithm;
    NSString *_namedEntity;
    NSString *_sourceBundleId;
    struct {
        unsigned int score:1;
        unsigned int topicId:1;
        unsigned int unixTimestampSec:1;
    } _has;
}

@property(nonatomic) NSUInteger unixTimestampSec; // @synthesize unixTimestampSec=_unixTimestampSec;
@property(retain, nonatomic) NSString *namedEntity; // @synthesize namedEntity=_namedEntity;
@property(nonatomic) NSUInteger topicId; // @synthesize topicId=_topicId;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(retain, nonatomic) NSString *sourceBundleId; // @synthesize sourceBundleId=_sourceBundleId;
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
@property(nonatomic) BOOL hasUnixTimestampSec;
@property(readonly, nonatomic) BOOL hasNamedEntity;
@property(nonatomic) BOOL hasTopicId;
@property(nonatomic) BOOL hasScore;
@property(readonly, nonatomic) BOOL hasAlgorithm;
@property(readonly, nonatomic) BOOL hasSourceBundleId;

@end

