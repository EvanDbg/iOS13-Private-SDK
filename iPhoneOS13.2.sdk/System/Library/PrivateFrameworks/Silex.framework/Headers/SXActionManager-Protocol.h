//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, SXAction, UIContextMenuConfiguration, UIView, UIViewController;

@protocol SXActionManager <NSObject>
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForAction:(SXAction *)arg1;
- (UIContextMenuConfiguration *)contextMenuConfigurationForAction:(SXAction *)arg1;
- (void)performAction:(SXAction *)arg1 postActionHandlers:(NSArray *)arg2 sourceView:(UIView *)arg3 sourceRect:(CGRect)arg4 mode:(NSUInteger)arg5;
- (void)performAction:(SXAction *)arg1 postActionHandlers:(NSArray *)arg2;
@end

