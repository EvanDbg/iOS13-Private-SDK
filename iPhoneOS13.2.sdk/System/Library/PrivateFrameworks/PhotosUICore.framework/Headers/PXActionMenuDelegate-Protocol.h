//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PXActionMenuController, PXActionPerformer, UIViewController;

@protocol PXActionMenuDelegate 
- (_Bool)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 dismissViewController:(UIViewController *)arg3 completionHandler:(void (^)(void))arg4;
- (_Bool)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 presentViewController:(UIViewController *)arg3;

@optional
- (void)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 didChangeState:(unsigned long long)arg3;
@end
