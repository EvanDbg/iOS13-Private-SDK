//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HFWallpaper, HUWallpaperPickerInlineViewController, UIImage;

@protocol HUWallpaperPickerInlineViewControllerDelegate <NSObject>
- (void)wallpaperPickerRequestOpenWallpaperEditor:(HUWallpaperPickerInlineViewController *)arg1;
- (void)wallpaperPicker:(HUWallpaperPickerInlineViewController *)arg1 didSelectWallpaper:(HFWallpaper *)arg2 withImage:(UIImage *)arg3;
- (void)wallpaperPicker:(HUWallpaperPickerInlineViewController *)arg1 didReceiveDroppedImage:(UIImage *)arg2;
@end

