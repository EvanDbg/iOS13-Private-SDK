//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class MediaControlsCollectionViewController, UIViewController;
@protocol MediaControlsCollectionItemViewController;

@protocol MediaControlsCollectionViewDelegate 
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 willSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (_Bool)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 canSelectItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didEndDisplayingViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didDisplayViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 willDisplayViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
@end
