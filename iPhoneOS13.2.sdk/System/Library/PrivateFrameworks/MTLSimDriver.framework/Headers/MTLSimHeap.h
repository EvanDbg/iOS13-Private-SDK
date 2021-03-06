//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLHeap.h>

#import <MTLSimDriver/MTLHeap-Protocol.h>
#import <MTLSimDriver/MTLSerializerHeap-Protocol.h>

@class MTLSimDevice;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimHeap : _MTLHeap <MTLHeap, MTLSerializerHeap>
{
    MTLSimDevice *_device;
    unsigned int _heapRef;
}

- (NSUInteger)setPurgeableState:(NSUInteger)arg1;
- (id)newTextureWithDescriptor:(id)arg1 offset:(NSUInteger)arg2;
- (id)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2 offset:(NSUInteger)arg3;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (id)newTextureWithDescriptor:(id)arg1 offset:(NSUInteger)arg2 useOffset:(BOOL)arg3;
- (id)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2 offset:(NSUInteger)arg3 useOffset:(BOOL)arg4;
- (NSUInteger)maxAvailableSizeWithAlignment:(NSUInteger)arg1;
@property(readonly) NSUInteger usedSize;
@property(readonly) NSUInteger currentAllocatedSize;
@property(readonly) NSUInteger size;
// - (CDStruct_da2e99ad)getSizeInfo;
@property(readonly) unsigned int resourceRef;
@property(readonly) unsigned int heapRef;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 device:(id)arg2 heapRef:(unsigned int)arg3;

@end

