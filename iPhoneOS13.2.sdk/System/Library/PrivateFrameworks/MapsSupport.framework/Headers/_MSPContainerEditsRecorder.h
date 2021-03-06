//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditsRecorder : NSObject
{
    NSMutableArray *_originalMutableArray;
    NSMutableArray *_orderedEdits;
    NSMutableSet *_updatedObjects;
}

// - (void).cxx_destruct;
- (void)useImmutableObjectsForEditsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
- (void)_editDetectorDidDetectUpdateForObject:(id)arg1;
- (void)_mutableObjectContentDidUpdate:(id)arg1;
- (void)replaceEditableObjectsAtIndexes:(id)arg1 withEditableObjects:(id)arg2;
- (void)removeEditableObjectsAtIndexes:(id)arg1;
- (void)insertEditableObjects:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInEditableObjectsAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeObjectFromEditableObjectsAtIndex:(NSUInteger)arg1;
- (void)insertObject:(id)arg1 inEditableObjectsAtIndex:(NSUInteger)arg2;
- (void)getEditableObjects:(id )arg1 range:(NSRange *)arg2;
- (id)editableObjectsAtIndexes:(id)arg1;
- (id)objectInEditableObjectsAtIndex:(NSUInteger)arg1;
- (NSUInteger)countOfEditableObjects;
@property(readonly, nonatomic) NSArray *orderedEdits;
@property(readonly, nonatomic) NSMutableArray *recordableMutableArray;
- (id)initWithMutableArray:(id)arg1;

@end

