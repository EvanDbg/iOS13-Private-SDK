//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SBUIBannerTargetManager;
@protocol SBUIBannerTarget;

@protocol SBUIBannerTargetManagerObserver 
- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didRemoveTarget:(id <SBUIBannerTarget>)arg2;
- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didAddTarget:(id <SBUIBannerTarget>)arg2;
@end
