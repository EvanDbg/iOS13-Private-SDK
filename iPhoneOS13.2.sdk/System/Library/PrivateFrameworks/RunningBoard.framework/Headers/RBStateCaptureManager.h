//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBStateCaptureManaging-Protocol.h>

@class NSMutableDictionary, RBSStateCaptureSet;
@protocol OS_dispatch_queue;

@interface RBStateCaptureManager : NSObject <RBStateCaptureManaging>
{
    NSMutableDictionary *_itemsByIdentifier;
    RBSStateCaptureSet *_itemsWithoutIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (id)identifiers;
- (void)removeItem:(id)arg1;
- (void)removeItemWithIdentifier:(id)arg1;
- (void)addItemWithTitle:(id)arg1 identifier:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addItem:(id)arg1;
- (void)addItem:(id)arg1 withIdentifier:(id)arg2;
- (id)stateForSubsystem:(id)arg1;
- (id)init;

@end

