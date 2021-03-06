//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUWeakReference;
@protocol TSKSelectionDispatchReceiver;

__attribute__((visibility("hidden")))
@interface TSKSelectionDispatcher : NSObject
{
    TSUWeakReference *_selectionDispatchReceiverReference;
}

@property(retain, nonatomic) TSUWeakReference *selectionDispatchReceiverReference; // @synthesize selectionDispatchReceiverReference=_selectionDispatchReceiverReference;
- (void)endTransformingCurrentSelectionPaths;
- (void)transformCurrentSelectionPathsUsingOperationTransformer:(id)arg1;
- (void)beginTransformingCurrentSelectionPaths;
- (id)newRootSelectionTransformerForSelectionPath:(id)arg1;
- (void)dispatchSelectionPath:(id)arg1 withFlags:(NSUInteger)arg2;
@property(nonatomic) __weak id <TSKSelectionDispatchReceiver> selectionDispatchReceiver;
- (void)dealloc;

@end

