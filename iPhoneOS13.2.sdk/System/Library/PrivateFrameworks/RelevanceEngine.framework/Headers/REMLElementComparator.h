//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, REMLModel;

@interface REMLElementComparator : NSObject <NSCopying>
{
    REMLModel *_model;
    NSArray *_filteringRules;
    NSArray *_rankingRules;
}

+ (id)comparatorWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3;
@property(copy, nonatomic) NSArray *rankingRules; // @synthesize rankingRules=_rankingRules;
@property(copy, nonatomic) NSArray *filteringRules; // @synthesize filteringRules=_filteringRules;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (long long)compareElement:(id)arg1 toElement:(id)arg2 level:(NSUInteger)arg3;
@property(readonly, nonatomic) NSUInteger comparisonLevels;
- (BOOL)shouldHideElement:(id)arg1;
- (id)model;
- (id)initWithModel:(id)arg1;

@end

