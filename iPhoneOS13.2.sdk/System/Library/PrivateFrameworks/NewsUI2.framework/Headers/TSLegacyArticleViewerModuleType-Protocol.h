//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, TSArticleContext, UIViewController;
@protocol FCHeadlineProviding;

@protocol TSLegacyArticleViewerModuleType
- (UIViewController *)createViewControllerForArticleID:(NSString *)arg1 headline:(id <FCHeadlineProviding>)arg2 articleContext:(TSArticleContext *)arg3 articlePresentationStyle:(long long)arg4 showShareSheet:(BOOL)arg5 forceArticleUpdate:(BOOL)arg6;
@end

