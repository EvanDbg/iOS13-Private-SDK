//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSSet (FCAdditions)
+ (id)fc_unionOfSetsInArray:(id)arg1;
+ (id)fc_set:(CDUnknownBlockType)arg1;
- (id)fc_setByRemovingObject:(id)arg1;
- (id)fc_setByUnioningSet:(id)arg1;
- (id)fc_setByMinusingSet:(id)arg1;
- (id)fc_setByIntersectingSet:(id)arg1;
- (id)fc_dictionaryOfSortedSetsWithKeyBlock:(CDUnknownBlockType)arg1;
- (BOOL)fc_containsAnyObjectInArray:(id)arg1;
- (id)fc_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_mutableSetByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_setByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (NSUInteger)fc_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_setOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_onlyObject;
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_diffAgainstSet:(id)arg1;
@end

