//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, SXQuickLookLayoutAttributes, SXQuickLookViewController, UIButton, UIImage, UILabel;

@protocol SXQuickLookRenderer <NSObject>
- (void)renderErrorMessage:(NSString *)arg1 view:(UILabel *)arg2;
- (void)renderThumbnailImage:(UIImage *)arg1 view:(UIButton *)arg2;
- (void)render:(SXQuickLookViewController *)arg1 attributes:(SXQuickLookLayoutAttributes *)arg2;
@end

