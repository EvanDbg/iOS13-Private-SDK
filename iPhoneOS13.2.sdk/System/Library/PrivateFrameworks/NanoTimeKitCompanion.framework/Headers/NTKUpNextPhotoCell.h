//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@interface NTKUpNextPhotoCell : NTKUpNextBaseCell
{
    CGSize _scaledImageSize;
    CGRect _facesRect;
    double _aspectRatio;
    BOOL _wantsFullCellPhoto;
}

- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)prepareForReuse;
- (id)transitionContextInView:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithContent:(id)arg1;

@end

