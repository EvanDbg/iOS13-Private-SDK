//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMImageNode : AXMSourceNode
{
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
- (void)triggerWithPixelBuffer:(struct __CVBuffer *)arg1 exifOrientation:(unsigned int)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)triggerWithImageURL:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)triggerWithImage:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)produceImage:(id)arg1;

@end
