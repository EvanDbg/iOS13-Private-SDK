//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAEditOperationOrdering-Protocol.h>

@class NSArray, NSString;

@interface IPAEditDescription : NSObject <IPAEditOperationOrdering, NSCopying, NSFastEnumeration>
{
    NSArray *_operations;
}

+ (id)sortOperations:(id)arg1 withOrdering:(id)arg2;
+ (NSUInteger)insertIndexForOperationWithIdentifier:(id)arg1 inArray:(id)arg2 withOrdering:(id)arg3;
+ (BOOL)containsValidOperations:(id)arg1;
+ (Class)expectedOperationClass;
+ (id)presetifyAdjustmentStack:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionWithOperationsUpToUUID:(id)arg1;
- (id)descriptionByRemovingOperationsStartingAtIndex:(NSUInteger)arg1;
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)descriptionByRemovingOperation:(id)arg1;
- (id)descriptionByRemovingOperationAtIndex:(NSUInteger)arg1;
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)descriptionByAddingOperation:(id)arg1;
- (id)descriptionWithOperations:(id)arg1;
- (void)withImmutableOperationAtIndex:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;
- (void)forEachImmutableOperation:(CDUnknownBlockType)arg1;
// - (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (BOOL)containsOperationWithIdentifier:(id)arg1;
- (id)operationWithUUID:(id)arg1;
- (id)operationAtIndex:(NSUInteger)arg1;
- (id)firstOperationWithIdentifier:(id)arg1;
- (NSUInteger)insertIndexForOperationWithIdentifier:(id)arg1;
- (NSUInteger)indexOfOperationWithUUID:(id)arg1;
- (NSUInteger)firstIndexOfOperationWithIdentifier:(id)arg1;
- (id)operations;
- (NSUInteger)operationCount;
- (BOOL)isEqualToDescriptionRenderOperations:(id)arg1;
- (BOOL)isEqualToDescription:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_init;
- (id)init;
- (NSUInteger)sortOrderForOperationWithIdentifier:(id)arg1;
- (id)_debugDescriptionSuffix;
- (id)_operations;
- (id)_operationAtIndex:(NSUInteger)arg1;
- (id)initWithOperations:(id)arg1;
- (id)archivalRepresentation;

@end

