//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSArray (SafariCoreExtras)
+ (id)safari_arrayWithPropertyListData:(id)arg1 options:(NSUInteger)arg2;
+ (id)safari_arrayFromDictionaryOfObjectsByIndex:(id)arg1;
- (id)safari_flattenedArray;
- (id)safari_arrayByAddingObjectsFromArrayIfNotDuplicates:(id)arg1;
- (BOOL)safari_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)safari_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)_safari_generateDiffWithLongestCommonSubsequenceLengths:(id)arg1 array:(id)arg2 indexIntoSelf:(NSUInteger)arg3 indexIntoArray:(NSUInteger)arg4;
- (id)_safari_computeLengthsOfLongestSubsequencesCommonWithArray:(id)arg1;
- (id)safari_diffWithArray:(id)arg1;
- (id)safari_minimumUsingComparator:(CDUnknownBlockType)arg1;
- (id)safari_maximumUsingComparator:(CDUnknownBlockType)arg1;
- (id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)safari_reduceObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_filterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_mapObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_orderedSetByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)safari_setByApplyingBlock:(CDUnknownBlockType)arg1;
- (void)safari_enumerateZippedValuesWithArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)safari_mapAndFilterObjectsWithOptions:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)safari_mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_arrayAtIndex:(NSUInteger)arg1;
- (id)safari_dictionaryAtIndex:(NSUInteger)arg1;
- (id)safari_URLAtIndex:(NSUInteger)arg1;
- (id)safari_stringAtIndex:(NSUInteger)arg1;
- (id)safari_numberAtIndex:(NSUInteger)arg1;
@end

