//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDGPUDataBufferSharedAccessors-Protocol.h>

@class NSArray;
@protocol MTLDevice, MTLRenderCommandEncoder, TSDMTLDataBuffer;

@protocol TSDMTLDataBuffer <NSObject, TSDGPUDataBufferSharedAccessors>
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5 device:(id <MTLDevice>)arg6;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 device:(id <MTLDevice>)arg5;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 device:(id <MTLDevice>)arg4;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 textureFlipped:(BOOL)arg3 device:(id <MTLDevice>)arg4;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 device:(id <MTLDevice>)arg3;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 meshSize:(CGSize)arg2 device:(id <MTLDevice>)arg3;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 vertexCount:(NSUInteger)arg2 indexElementCount:(NSUInteger)arg3 device:(id <MTLDevice>)arg4;
@property(readonly) NSUInteger centerAttributeIndex;
@property(readonly) NSUInteger texCoordAttributeIndex;
@property(readonly) NSUInteger positionAttributeIndex;
@property(nonatomic) NSUInteger metalDrawMode;
// - (void)updateMetalDataBufferAttributes:(NSArray *)arg1 withBlock:(void (^)(struct , NSUInteger))arg2;
// - (void)updateDataBufferAttributesWithBlock:(void (^)(struct , NSUInteger))arg1;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(NSUInteger)arg2 advanceDynamicBuffer:(BOOL)arg3;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(NSUInteger)arg2;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(NSUInteger)arg2 range:(NSRange *)arg3 advanceDynamicBuffer:(BOOL)arg4;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(NSUInteger)arg2 range:(NSRange *)arg3;
- (void)encodeWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(NSUInteger)arg2;
- (void)disableWithDevice:(id <MTLDevice>)arg1;
- (void)enableDataBuffer;
- (id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5;
- (id)initWithVertexAttributes:(NSArray *)arg1 vertexCount:(NSUInteger)arg2 indexElementCount:(NSUInteger)arg3 bufferCount:(NSUInteger)arg4;
@end

