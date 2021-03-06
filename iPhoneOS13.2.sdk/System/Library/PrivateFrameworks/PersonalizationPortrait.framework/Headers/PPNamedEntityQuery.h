//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSSet, NSString;

@interface PPNamedEntityQuery : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _matchCategory;
    BOOL _excludeWithoutSentiment;
    BOOL _orderByName;
    NSUInteger _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    NSUInteger _deviceFilter;
    double _decayRate;
    NSString *_matchingName;
    NSSet *_matchingCategories;
    NSSet *_excludingAlgorithms;
    NSString *_matchingEntityTrie;
    NSUInteger _locationConsumer;
}

+ (id)locationQueryWithLimit:(NSUInteger)arg1 fromDate:(id)arg2 consumerType:(NSUInteger)arg3;
+ (id)_excludingAlgorithmsDescription:(id)arg1;
+ (id)_matchingCategoriesDescription:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL orderByName; // @synthesize orderByName=_orderByName;
@property(nonatomic) NSUInteger locationConsumer; // @synthesize locationConsumer=_locationConsumer;
@property(retain, nonatomic) NSString *matchingEntityTrie; // @synthesize matchingEntityTrie=_matchingEntityTrie;
@property(nonatomic) BOOL excludeWithoutSentiment; // @synthesize excludeWithoutSentiment=_excludeWithoutSentiment;
@property(retain, nonatomic) NSSet *excludingAlgorithms; // @synthesize excludingAlgorithms=_excludingAlgorithms;
@property(retain, nonatomic) NSSet *matchingCategories; // @synthesize matchingCategories=_matchingCategories;
@property(nonatomic) BOOL matchCategory; // @synthesize matchCategory=_matchCategory;
@property(copy, nonatomic) NSString *matchingName; // @synthesize matchingName=_matchingName;
@property(nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(nonatomic) NSUInteger deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(retain, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property(retain, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property(retain, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) NSUInteger limit; // @synthesize limit=_limit;
// - (void).cxx_destruct;
- (id)customizedDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedEntityQuery:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) BOOL overrideDecayRate;

@end

