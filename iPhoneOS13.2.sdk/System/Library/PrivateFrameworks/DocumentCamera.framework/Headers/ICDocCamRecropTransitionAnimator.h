//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICDocCamImageQuad, NSIndexPath, UIImage, UIView;

@interface ICDocCamRecropTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _presenting;
    UIImage *_filteredImage;
    UIImage *_unfilteredImage;
    NSIndexPath *_indexPath;
    double _duration;
    id /* CDUnknownBlockType */ _completion;
    long long _orientation;
    UIView *_startView;
    ICDocCamImageQuad *_quadForOverlay;
    CGRect _containerViewFrame;
}

@property(retain, nonatomic) ICDocCamImageQuad *quadForOverlay; // @synthesize quadForOverlay=_quadForOverlay;
@property(nonatomic) __weak UIView *startView; // @synthesize startView=_startView;
@property(nonatomic) CGRect containerViewFrame; // @synthesize containerViewFrame=_containerViewFrame;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImage *unfilteredImage; // @synthesize unfilteredImage=_unfilteredImage;
@property(retain, nonatomic) UIImage *filteredImage; // @synthesize filteredImage=_filteredImage;
@property(nonatomic) BOOL presenting; // @synthesize presenting=_presenting;
// - (void).cxx_destruct;
- (union _GLKMatrix3)matrixTransformingToUnitSquareWithPoints:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 x2:(double)arg5 y2:(double)arg6 x3:(double)arg7 y3:(double)arg8;
- (void)sortPoints:(CGPoint )arg1 sorted:(CGPoint )arg2;
- (union _GLKMatrix3)matrixTransformingQuadForOverlayToImageView:(BOOL )arg1;
- (id)scrollViewTransform:(BOOL)arg1;
- (id)imageMeshTransform:(BOOL)arg1;
- (void)performSimpleFadeInFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (void)performPopTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (void)performPushTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithImage:(id)arg1 unfilteredImage:(id)arg2 orientation:(long long)arg3 indexPath:(id)arg4 duration:(double)arg5 completion:(CDUnknownBlockType)arg6;

@end

