//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RETrainingSimulationServerInterface-Protocol.h>

@class NSMutableSet, NSXPCListener, REObserverStore;
@protocol OS_dispatch_queue;

@interface RETrainingSimulationServer : NSObject <NSXPCListenerDelegate, RETrainingSimulationServerInterface>
{
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    REObserverStore *_observers;
}

+ (id)sharedServer;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)availableRelevanceEngines:(CDUnknownBlockType)arg1;
- (void)_safelyEnumerateObserversWithBlock:(CDUnknownBlockType)arg1 observerAccessBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)availableRelevanceEnginesDidChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

