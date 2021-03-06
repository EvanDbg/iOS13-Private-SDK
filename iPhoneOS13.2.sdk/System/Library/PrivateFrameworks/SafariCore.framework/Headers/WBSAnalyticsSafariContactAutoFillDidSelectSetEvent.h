//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface WBSAnalyticsSafariContactAutoFillDidSelectSetEvent : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _selectedSet;
    BOOL _hadPreviouslyCustomizedSet;
    struct {
        unsigned int timestamp:1;
        unsigned int selectedSet:1;
        unsigned int hadPreviouslyCustomizedSet:1;
    } _has;
}

@property(nonatomic) BOOL hadPreviouslyCustomizedSet; // @synthesize hadPreviouslyCustomizedSet=_hadPreviouslyCustomizedSet;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHadPreviouslyCustomizedSet;
- (int)StringAsSelectedSet:(id)arg1;
- (id)selectedSetAsString:(int)arg1;
@property(nonatomic) BOOL hasSelectedSet;
@property(nonatomic) int selectedSet; // @synthesize selectedSet=_selectedSet;
@property(nonatomic) BOOL hasTimestamp;

@end

