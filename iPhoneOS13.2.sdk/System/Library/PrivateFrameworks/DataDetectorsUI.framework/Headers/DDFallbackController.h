//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIWindow;

__attribute__((visibility("hidden")))
@interface DDFallbackController : UIViewController
{
    UIWindow *_baseWindow;
    UIWindow *_ourWindow;
    id _interactionDelegate;
}

// - (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadView;
- (id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2;

@end

