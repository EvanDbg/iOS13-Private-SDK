//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class CADisplayLink, CAGradientLayer, NSDictionary, NSMutableArray, SBFMotionManager, UIImage;

@interface SBFBokehWallpaperView : SBFWallpaperView
{
    CADisplayLink *_displayLink;
    SBFMotionManager *_motionManager;
    NSMutableArray *_circleArray;
    NSDictionary *_options;
    long long _circleFillColor;
    NSUInteger _blurFrameCount;
    UIImage *_cachedSnapshotImage;
//     struct __IOSurface _snapshotBuffer;
    UIImage *_cachedFolderBlurImage;
    BOOL _isOnLockScreen;
    BOOL _contentIsVisible;
    BOOL _hasSingleVariant;
}

+ (id)defaultGradientSilver;
+ (id)defaultGradient;
+ (id)silverGradient;
+ (id)orangeGradient;
+ (id)purpleGradient;
+ (id)redGradient;
+ (id)yellowGradient;
+ (id)greenGradient;
+ (id)blueGradient;
+ (BOOL)_allowsParallax;
+ (Class)layerClass;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (long long)wallpaperType;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)cacheGroup;
- (id)snapshotImage;
- (void)_updateSnapshotImageIfNeeded;
- (id)_computeAverageColor;
- (BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)arg1;
// - (id)_imageForBackdropParameters:(CDStruct_d8f0d129)arg1 includeTint:(BOOL)arg2 overrideTraitCollection:(id)arg3;
- (id)_folderBlurImage;
- (id)_imageFromColor:(id)arg1;
- (void)_updateVariantStatus;
- (void)_screenUndimmed:(id)arg1;
- (void)_screenDimmed:(id)arg1;
- (void)_wallpaperDidChange:(id)arg1;
- (void)_styleModeChanged:(id)arg1;
- (void)_updateCircleFillColor;
- (CGRect)newRectForCircle:(id)arg1 potentialX:(double)arg2 potentialY:(double)arg3;
- (void)_screenDidUpdate;
- (void)_handleVariantChange;
- (void)_updateOrientationIfNeeded;
- (void)_toggleCircleAnimations:(BOOL)arg1;
- (void)setWallpaperAnimationEnabled:(BOOL)arg1;
- (BOOL)_thermalStateIsCritical;
- (BOOL)_lowPowerModeIsEnabled;
- (void)_thermalStateDidChange:(id)arg1;
- (void)_correctGyroValues:(inout double )arg1 y:(inout double )arg2;
- (BOOL)_layerIsOutOfBounds:(id)arg1;
- (void)_addBokehCircles:(long long)arg1;
@property(readonly, nonatomic) CAGradientLayer *layer;
- (id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(NSUInteger)arg6;
// - (struct __IOSurface )_createSnapshotBuffer;
- (void)_destroyDisplayLink;
- (void)_initDisplayLink;
- (long long)userInterfaceStyle;
- (void)_updateGradientAndFillColor;

@end

