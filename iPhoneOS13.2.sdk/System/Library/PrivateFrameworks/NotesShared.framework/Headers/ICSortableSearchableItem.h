//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableItem, NSDate;

@interface ICSortableSearchableItem : NSObject
{
    BOOL _isPrefixMatch;
    CSSearchableItem *_searchableItem;
    double _rankingScore;
    NSUInteger _relevanceBitField;
    NSUInteger _modificationDateBucket;
    NSDate *_modificationDate;
    NSDate *_creationDate;
    NSUInteger _searchResultType;
}

+ (id)sortDescriptorsForRankingStrategy:(NSUInteger)arg1;
@property(nonatomic) NSUInteger searchResultType; // @synthesize searchResultType=_searchResultType;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) NSUInteger modificationDateBucket; // @synthesize modificationDateBucket=_modificationDateBucket;
@property(nonatomic) BOOL isPrefixMatch; // @synthesize isPrefixMatch=_isPrefixMatch;
@property(nonatomic) NSUInteger relevanceBitField; // @synthesize relevanceBitField=_relevanceBitField;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(retain, nonatomic) CSSearchableItem *searchableItem; // @synthesize searchableItem=_searchableItem;
// - (void).cxx_destruct;
- (id)initWithSearchableItem:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(NSUInteger)arg3 modificationDateBucket:(NSUInteger)arg4 searchResultType:(NSUInteger)arg5 isPrefixMatch:(BOOL)arg6;

@end

