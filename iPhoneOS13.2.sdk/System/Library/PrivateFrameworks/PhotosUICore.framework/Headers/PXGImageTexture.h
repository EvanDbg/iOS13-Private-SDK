//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGBaseTexture.h>

@class MISSING_TYPE;

@interface PXGImageTexture : PXGBaseTexture
{
    CGImageRef _sourceCGImage;
//    struct __CVBuffer _sourceCVPixelBuffer;
}

+ (id)_sharedCIContext;
// - (void)getTextureInfos:(CDStruct_183601bc )arg1 forSpriteIndexes:(unsigned int )arg2 geometries:(const CDStruct_3ab912e1 )arg3 spriteStyles:(const CDStruct_506f5052 )arg4 spriteInfos:(const CDStruct_9d1ebe49 )arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (CGImageRef)imageRepresentation;
@property(readonly, nonatomic) MISSING_TYPE *orientationTransform;
- (void)dealloc;
// property(nonatomic) struct __CVBuffer sourceCVPixelBuffer;
@property(nonatomic) CGImageRef sourceCGImage;
- (id)init;

@end

