//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSSqliteResultRow.h>

@class NSArray;

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow
{
    NSUInteger _count;
    NSArray *_frozenColumnNames;
    NSArray *_frozenObjects;
    NSArray *_frozenIntegers;
    NSArray *_frozenDoubles;
    NSArray *_frozenStrings;
    NSArray *_frozenDatas;
}

// - (void).cxx_destruct;
- (NSUInteger)_indexForKey:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)dataAtIndex:(NSUInteger)arg1;
- (id)stringAtIndex:(NSUInteger)arg1;
- (double)doubleAtIndex:(NSUInteger)arg1;
- (long long)integerAtIndex:(NSUInteger)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
- (id)keyAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;
- (BOOL)isValid;
- (id)initWithResultRow:(id)arg1;
// - (id)initWithStatement:(struct sqlite3_stmt )arg1;

@end

