//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CPSBannerSource, NSUUID;

@protocol CPSBannerSourceDelegate <NSObject>
- (void)bannerSource:(CPSBannerSource *)arg1 bannerDidDisappearWithIdentifier:(NSUUID *)arg2;
- (void)bannerSource:(CPSBannerSource *)arg1 bannerDidAppearWithIdentifier:(NSUUID *)arg2;
- (void)bannerSource:(CPSBannerSource *)arg1 bannerTappedWithIdentifier:(NSUUID *)arg2;
@end

