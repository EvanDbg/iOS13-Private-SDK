//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface UIImage (_SBUserNotificationAlert)
- (void)_sbSetAssociatedAssetManager:(id)arg1;
- (CGImageRef)_newThumbnailWithJPEG:(id)arg1 forMaxPixelDimension:(double)arg2;
- (CGImageRef)_newThumbnailWithImageSource:(CGImageSource )arg1 forMaxPixelDimension:(double)arg2;
- (id)_thumbnailFitToSize:(CGSize)arg1;
- (CGImageSource )_newSource;
- (id)sbg_squareImage;
- (id)sbg_thumbnailFitToSize:(CGSize)arg1;
- (BOOL)isAnimated;
@property(readonly, nonatomic) CGSize pixelSize;
- (BOOL)sbs_hasAlpha;
@end

