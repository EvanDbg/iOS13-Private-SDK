//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDMediaLayout.h>

@class TSDBezierPath, TSDImageAdjustments, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout;

@interface TSDImageLayout : TSDMediaLayout
{
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    CGPathRef mPathToStroke;
    CGAffineTransform mLayoutToImageTransform;
    CGAffineTransform mLayoutToMaskTransform;
    BOOL mMaskIntersectsImage;
    TSDBezierPath *mTracedPath;
    int mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    int mMaskEditMode;
    BOOL mScalingInMaskMode;
    BOOL mInInstantAlphaMode;
    BOOL mIsUpdatingImageAdjustments;
    TSDImageAdjustments *mDynamicImageAdjustments;
}

@property(readonly, nonatomic, getter=isInInstantAlphaMode) BOOL inInstantAlphaMode; // @synthesize inInstantAlphaMode=mInInstantAlphaMode;
@property(readonly, nonatomic, getter=isInMaskScaleMode) BOOL inMaskScaleMode; // @synthesize inMaskScaleMode=mScalingInMaskMode;
@property(readonly, nonatomic) int maskEditMode; // @synthesize maskEditMode=mMaskEditMode;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (BOOL)supportsRotation;
- (id)i_computeWrapPath;
- (CGRect)boundsInfluencingExteriorWrap;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (BOOL)isDynamicallyChangingImageAdjustments;
- (id)imageAdjustments;
- (id)maskLayout;
- (CGAffineTransform)imageDataToVisualSizeTransform;
- (CGAffineTransform)layoutToMaskTransform;
- (CGAffineTransform)layoutToImageTransform;
- (CGSize)sizeOfFrameRectIncludingCoverage;
- (CGPathRef)pathToStroke;
- (BOOL)hasMaskingPath;
- (id)inspectorGeometry;
- (id)imageGeometryInRoot;
- (id)originalImageGeometry;
- (id)imageGeometry;
- (id)imageInfo;
- (void)endInstantAlphaMode;
- (void)beginInstantAlphaMode;
- (void)maskModeScaleDidEnd;
- (void)maskModeScaleDidBegin;
@property(readonly, nonatomic) int maskEditModeForLayoutState;
@property(readonly, nonatomic) int maskEditModeForResizing;
@property(readonly, nonatomic) int maskEditModeForRotating;
@property(readonly, nonatomic) int maskEditModeForDragging;
@property(readonly, nonatomic) BOOL isResizingInMaskEditMode;
@property(readonly, nonatomic) BOOL isRotatingInMaskEditMode;
@property(readonly, nonatomic) BOOL isDraggingInMaskEditMode;
@property(readonly, nonatomic, getter=isInMaskEditMode) BOOL inMaskEditMode;
- (void)endMaskEditMode;
- (void)beginEditingMaskInMaskEditMode;
- (void)beginEditingImageInMaskEditMode;
- (void)maskWasApplied;
- (void)maskWasReset;
- (CGRect)pathBoundsWithoutStroke;
- (id)smartPathSource;
- (void)resizeWithTransform:(CGAffineTransform)arg1 asChild:(BOOL)arg2;
- (BOOL)shouldSnapWhileResizing;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (CGPoint)centerForConnecting;
- (CGPoint)centerForRotationInMaskMode;
- (CGPoint)centerForRotation;
- (void)takeRotationFromTracker:(id)arg1;
- (CGAffineTransform)layoutTransformInInfoSpace:(CGAffineTransform)arg1;
- (void)endDrag;
- (BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
- (void)dragBy:(CGPoint)arg1;
- (void)beginDrag;
- (void)beginResize;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (BOOL)maskIntersectsImage;
- (BOOL)shouldRenderFrameStroke;
- (BOOL)shouldDisplayGuides;
- (BOOL)isInvisible;
- (BOOL)hasAlpha;
- (void)offsetGeometryBy:(CGPoint)arg1;
- (CGRect)alignmentFrameForProvidingGuidesInRoot;
- (CGRect)computeAlignmentFrameInRoot:(BOOL)arg1;
- (void)updateChildrenFromInfo;
- (void)processChangedProperty:(int)arg1;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)currentInfoGeometry;
- (id)visibleGeometries;
- (id)geometryForTransforming;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

