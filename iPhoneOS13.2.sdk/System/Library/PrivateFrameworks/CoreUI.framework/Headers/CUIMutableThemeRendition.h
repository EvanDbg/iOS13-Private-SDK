//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation;

__attribute__((visibility("hidden")))
@interface CUIMutableThemeRendition : CUIThemeRendition
{
//     struct _renditionkeytoken _renditionKey;
    CGImageRef _image;
    CUIRenditionSliceInformation *_sliceInformation;
    CUIRenditionMetrics *_renditionMetrics;
}

- (id)metrics;
- (id)sliceInformation;
- (CGImageRef)unslicedImage;
// - (const struct _renditionkeytoken )key;
- (void)setName:(id)arg1;
- (void)dealloc;
// - (id)initWithCGImage:(CGImageRef)arg1 withDescription:(id)arg2 forKey:(const struct _renditionkeytoken )arg3;

@end

