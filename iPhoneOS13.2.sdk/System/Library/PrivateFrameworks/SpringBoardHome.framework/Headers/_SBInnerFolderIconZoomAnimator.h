//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconZoomAnimator.h>

@class SBFloatyFolderView, SBIconView;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator
{
    SBFloatyFolderView *_folderView;
    SBIconView *_folderIconView;
    CGAffineTransform _folderIconViewScaleTransform;
}

// - (void).cxx_destruct;
- (void)_calculateZoomedOffset:(CGPoint )arg1 scale:(CGPoint )arg2 forIcon:(id)arg3 withView:(id)arg4;
- (void)_applyIconTransformForZoomFraction:(double)arg1;
- (void)_applyIconCrossfadeForZoomFraction:(double)arg1;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (NSUInteger)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScaleDimension:(CGPoint)arg3;

@end

