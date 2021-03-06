//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DKInkThumbnailRenderer : NSObject
{
}

+ (BOOL)_drawDebugPatternInGLContext:(id)arg1 inSize:(CGSize)arg2;
+ (id)_imageForDrawingUsingGL:(id)arg1 fittingInSize:(CGSize)arg2 displayScale:(double)arg3 color:(id)arg4;
+ (void)_drawPath:(id)arg1 atScale:(double)arg2 inRect:(CGRect)arg3 inkColor:(id)arg4 backgroundColor:(id)arg5 inContext:(CGContextRef )arg6;
+ (CGPathRef)_newStrokedInterpolatedPathWithDrawing:(id)arg1 inSize:(CGSize)arg2 displayScale:(double)arg3;
+ (void)_interpolateDrawing:(id)arg1 inSize:(CGSize)arg2 displayScale:(double)arg3 ellipseHandler:(CDUnknownBlockType)arg4;
+ (id)_imageForDrawingUsingCG:(id)arg1 fittingInSize:(CGSize)arg2 displayScale:(double)arg3 color:(id)arg4;
+ (double)scaleToFitDrawing:(id)arg1 inSize:(CGSize)arg2;
+ (id)imageForDrawing:(id)arg1 fittingInSize:(CGSize)arg2 backingScale:(double)arg3 color:(id)arg4 highFidelity:(BOOL)arg5;
+ (id)imageForDrawing:(id)arg1 fittingInSize:(CGSize)arg2 color:(id)arg3 highFidelity:(BOOL)arg4;
+ (CGSize)sizeForDrawing:(id)arg1 inSize:(CGSize)arg2;

@end

