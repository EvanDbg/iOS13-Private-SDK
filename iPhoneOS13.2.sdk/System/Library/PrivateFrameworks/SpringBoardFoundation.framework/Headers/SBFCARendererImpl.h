//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFCARendererImpl : NSObject
{
}

+ (id)luminanceTreatmentFilters;
+ (id)_actuallyRenderImage:(CGImageRef)arg1 requiresBGRA:(BOOL)arg2 downsampleFactor:(double)arg3 layerCustomizer:(CDUnknownBlockType)arg4;
+ (id)renderMaterialImage:(CGImageRef)arg1 recipeName:(id)arg2 weighting:(double)arg3 downsampleFactor:(double)arg4;
+ (id)renderTreatedWallpaperImage:(CGImageRef)arg1 needsLuminanceTreatment:(BOOL)arg2 needsDimmingTreatment:(BOOL)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5;

@end

