//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoEditExportProperties : NSObject
{
    long long _baseEXIFOrientation;
    double _baseDuration;
    NSUInteger _imageWidth;
    NSUInteger _imageHeight;
}

+ (id)exportPropertiesWithImageWidth:(NSUInteger)arg1 imageHeight:(NSUInteger)arg2 exifOrientation:(long long)arg3 duration:(double)arg4;
+ (id)exportPropertiesWithImageWidth:(NSUInteger)arg1 imageHeight:(NSUInteger)arg2 exifOrientation:(long long)arg3;
@property(readonly, nonatomic) NSUInteger imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, nonatomic) NSUInteger imageWidth; // @synthesize imageWidth=_imageWidth;
@property(readonly, nonatomic) double baseDuration; // @synthesize baseDuration=_baseDuration;
@property(readonly, nonatomic) long long baseEXIFOrientation; // @synthesize baseEXIFOrientation=_baseEXIFOrientation;

@end

