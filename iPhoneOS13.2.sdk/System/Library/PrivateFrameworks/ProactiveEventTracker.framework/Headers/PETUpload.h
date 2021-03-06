//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PETMetadata;

@interface PETUpload : PBCodable <NSCopying>
{
    NSMutableArray *_aggregatedMessages;
    PETMetadata *_metadata;
    NSMutableArray *_trialMessages;
    NSMutableArray *_unaggregatedMessages;
}

+ (Class)trialMessagesType;
+ (Class)unaggregatedMessagesType;
+ (Class)aggregatedMessagesType;
@property(retain, nonatomic) NSMutableArray *trialMessages; // @synthesize trialMessages=_trialMessages;
@property(retain, nonatomic) NSMutableArray *unaggregatedMessages; // @synthesize unaggregatedMessages=_unaggregatedMessages;
@property(retain, nonatomic) NSMutableArray *aggregatedMessages; // @synthesize aggregatedMessages=_aggregatedMessages;
@property(retain, nonatomic) PETMetadata *metadata; // @synthesize metadata=_metadata;
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
- (id)trialMessagesAtIndex:(NSUInteger)arg1;
- (NSUInteger)trialMessagesCount;
- (void)addTrialMessages:(id)arg1;
- (void)clearTrialMessages;
- (id)unaggregatedMessagesAtIndex:(NSUInteger)arg1;
- (NSUInteger)unaggregatedMessagesCount;
- (void)addUnaggregatedMessages:(id)arg1;
- (void)clearUnaggregatedMessages;
- (id)aggregatedMessagesAtIndex:(NSUInteger)arg1;
- (NSUInteger)aggregatedMessagesCount;
- (void)addAggregatedMessages:(id)arg1;
- (void)clearAggregatedMessages;
@property(readonly, nonatomic) BOOL hasMetadata;

@end

