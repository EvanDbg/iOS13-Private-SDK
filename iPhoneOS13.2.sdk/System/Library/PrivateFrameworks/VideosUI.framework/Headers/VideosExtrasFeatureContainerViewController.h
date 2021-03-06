//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLayoutConstraint, UIView, VideosExtrasContext;
@protocol VideosExtrasVideoPlaybackViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasFeatureContainerViewController : UIViewController
{
    UIViewController<VideosExtrasVideoPlaybackViewController> *_videoPlaybackViewController;
    NSLayoutConstraint *_overlayViewAdjustmentConstraint;
    VideosExtrasContext *_context;
    UIView *_menuBarView;
    double _collectionViewHeight;
}

@property(nonatomic) double collectionViewHeight; // @synthesize collectionViewHeight=_collectionViewHeight;
@property(nonatomic) __weak UIView *menuBarView; // @synthesize menuBarView=_menuBarView;
@property(retain, nonatomic) UIViewController<VideosExtrasVideoPlaybackViewController> *videoPlaybackViewController; // @synthesize videoPlaybackViewController=_videoPlaybackViewController;
@property(readonly, nonatomic) __weak VideosExtrasContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)_menuBarHeightChange:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

