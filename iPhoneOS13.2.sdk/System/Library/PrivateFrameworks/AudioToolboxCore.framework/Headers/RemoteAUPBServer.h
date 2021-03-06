//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol AUPBServing;

__attribute__((visibility("hidden")))
@interface RemoteAUPBServer : NSObject
{
    NSXPCConnection *xpcConnection;
    id <AUPBServing> proxyInterface;
//     struct OpaqueAUPBServer ref;
//     struct vector<NSObject<OS_dispatch_semaphore>*, std::__1::allocator<NSObject<OS_dispatch_semaphore>*>> replySemas;
}

// @property(nonatomic) struct OpaqueAUPBServer ref; // @synthesize ref;
@property(retain, nonatomic) id <AUPBServing> proxyInterface; // @synthesize proxyInterface;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)signalAllSemaphores;
- (void)removeSema:(id)arg1;
- (void)addSema:(id)arg1;
- (id)description;
- (void)dealloc;

@end

