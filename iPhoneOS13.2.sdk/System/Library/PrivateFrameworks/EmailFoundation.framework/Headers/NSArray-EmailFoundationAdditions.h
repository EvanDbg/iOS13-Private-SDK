//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <EmailFoundation/EFSQLExpressable-Protocol.h>

@class NSString;

@interface NSArray (EmailFoundationAdditions) <EFSQLExpressable>
@property(readonly, nonatomic) NSArray *ef_reverse;
@property(readonly, nonatomic) NSArray *ef_permutations;
- (id)ef_subarraysOfSize:(unsigned long long)arg1;
- (id)ef_groupBy:(id /* block */)arg1;
- (id)ef_partition:(id /* block */)arg1;
- (id)ef_reduce:(id /* block */)arg1;
- (id)ef_flatMap:(id /* block */)arg1;
- (id)ef_compactMapSelector:(SEL)arg1;
- (id)ef_compactMap:(id /* block */)arg1;
- (id)ef_mapSelector:(SEL)arg1;
- (id)ef_map:(id /* block */)arg1;
- (id)ef_uniquifyWithComparator:(id /* block */)arg1;
@property(readonly, nonatomic) NSArray *ef_flatten;
- (unsigned long long)ef_countObjectsPassingTest:(id /* block */)arg1;
- (id)ef_lastObjectPassingTest:(id /* block */)arg1;
- (id)ef_firstObjectPassingTest:(id /* block */)arg1;
- (id)ef_objectsPassingTest:(id /* block */)arg1;
- (id)ef_filter:(id /* block */)arg1;
- (_Bool)ef_any:(id /* block */)arg1;
- (_Bool)ef_all:(id /* block */)arg1;
- (unsigned long long)ef_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)ef_objectSameAs:(id)arg1 usingComparator:(id /* block */)arg2;
- (unsigned long long)ef_indexOfObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (unsigned long long)ef_indexOfObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 overlapBy:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 objectArrayBlock:(id /* block */)arg2;
- (id)ef_indicesOfStringsWithPrefix:(id)arg1;
- (id)ef_arrayByAddingAbsentObjectsFromArray:(id)arg1;
- (id)ef_prefix:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *ef_tail;
@property(readonly, nonatomic) NSArray *ef_notEmpty;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
