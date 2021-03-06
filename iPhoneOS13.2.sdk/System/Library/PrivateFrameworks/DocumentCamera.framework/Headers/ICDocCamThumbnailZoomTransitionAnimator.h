//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSIndexPath, UIImage;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailZoomTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _presenting;
    UIImage *_thumbnailImage;
    NSIndexPath *_indexPath;
    double _duration;
    id /* CDUnknownBlockType */ _completion;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) BOOL presenting; // @synthesize presenting=_presenting;
// - (void).cxx_destruct;
- (BOOL)_shouldCrossFadeNavigationBar;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithImage:(id)arg1 indexPath:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;

@end

