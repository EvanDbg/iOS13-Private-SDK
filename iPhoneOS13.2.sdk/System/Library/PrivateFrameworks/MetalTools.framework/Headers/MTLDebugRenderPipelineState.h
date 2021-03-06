//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState
{
    NSUInteger _maxVertexCount;
    NSUInteger _maxInstanceCount;
    NSUInteger _maxPatchCount;
    NSUInteger _rasterSampleCount;
    NSUInteger _colorPixelFormat[8];
    NSUInteger _depthPixelFormat;
    NSUInteger _stencilPixelFormat;
    NSUInteger _vertexDescriptorLayoutCount;
   struct {
        NSUInteger bufferIndex;
        NSUInteger bufferStride;
    } _vertexDescriptorLayouts[31];
    BOOL _threadgroupSizeMatchesTileSize;
    MTLRenderPipelineDescriptor *_descriptor;
    MTLRenderPipelineReflection *_reflection;
    MTLTileRenderPipelineDescriptor *_tileDescriptor;
}

@property(readonly, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor; // @synthesize tileDescriptor=_tileDescriptor;
@property(readonly, nonatomic) MTLRenderPipelineReflection *reflection; // @synthesize reflection=_reflection;
@property(readonly, nonatomic) MTLRenderPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)getParameter:(id)arg1;
- (id)description;
- (id)formattedDescription:(NSUInteger)arg1;
- (void)_updateCachedPipelineState:(id)arg1;
- (void)dealloc;
- (BOOL)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1;
- (id)outputImageBlockData;
- (id)_findMasterStruct:(id)arg1 includeImageBlockData:(BOOL)arg2;
- (void)_updateCachedTilePipelineState:(id)arg1;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end

