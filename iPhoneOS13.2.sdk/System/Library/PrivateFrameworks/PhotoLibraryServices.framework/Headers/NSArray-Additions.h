//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSArray (Additions)
- (NSUInteger)pl_indexOfLastObjectInRange:(NSRange *)arg1 passingTest:(CDUnknownBlockType)arg2;
- (NSUInteger)pl_indexOfLastObjectPassingTest:(CDUnknownBlockType)arg1;
- (NSUInteger)pl_indexOfFirstObjectInRange:(NSRange *)arg1 passingTest:(CDUnknownBlockType)arg2;
- (NSUInteger)pl_indexOfFirstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1;
- (NSUInteger)pl_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)pl_shortDescription;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)_pl_indexBy:(CDUnknownBlockType)arg1;
- (id)_pl_groupBy:(CDUnknownBlockType)arg1;
- (BOOL)_pl_any:(CDUnknownBlockType)arg1;
- (id)_pl_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)_pl_flatMap:(CDUnknownBlockType)arg1;
- (id)_pl_filter:(CDUnknownBlockType)arg1;
- (id)_pl_map:(CDUnknownBlockType)arg1;
@end

