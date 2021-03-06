//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLIndexMapperDataSource;

@interface PLIndexMapper : NSObject
{
    id <PLIndexMapperDataSource> _dataSource;
}

- (BOOL)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3;
- (NSUInteger)backingIndexForIndex:(NSUInteger)arg1;
- (id)backingIndexesForIndexes:(id)arg1;
- (NSUInteger)indexForBackingIndex:(NSUInteger)arg1;
- (id)indexesForBackingIndexes:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

