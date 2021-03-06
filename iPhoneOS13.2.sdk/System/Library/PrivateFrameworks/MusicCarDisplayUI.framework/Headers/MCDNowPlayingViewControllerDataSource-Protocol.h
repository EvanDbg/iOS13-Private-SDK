//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIImage, _MCDNowPlayingViewController;

@protocol MCDNowPlayingViewControllerDataSource <NSObject>
- (BOOL)nowPlayingViewControllerIsPlaying:(_MCDNowPlayingViewController *)arg1;
// - (CDStruct_fce57115)durationSnapshotForNowPlayingViewController:(_MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(_MCDNowPlayingViewController *)arg1;
- (UIImage *)backgroundArtForNowPlayingController:(_MCDNowPlayingViewController *)arg1;
- (NSString *)titleForNowPlayingController:(_MCDNowPlayingViewController *)arg1;
- (NSString *)albumTextForNowPlayingController:(_MCDNowPlayingViewController *)arg1;
- (NSString *)artistTextForNowPlayingController:(_MCDNowPlayingViewController *)arg1;

@optional
- (BOOL)likedForNowPlayingViewController:(_MCDNowPlayingViewController *)arg1;
- (long long)repeatTypeForNowPlayingViewController:(_MCDNowPlayingViewController *)arg1;
- (long long)shuffleTypeForNowPlayingViewController:(_MCDNowPlayingViewController *)arg1;
@end

