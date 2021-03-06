//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@class NSArray;

@interface SUArrayImageModifier : SUImageModifier
{
    NSArray *_modifiers;
}

@property(retain, nonatomic) NSArray *modifiers; // @synthesize modifiers=_modifiers;
- (BOOL)scalesImage;
- (CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (CGSize)finalSizeForSize:(CGSize)arg1 originalSize:(CGSize)arg2;
- (void)drawBeforeImageForContext:(CGContextRef )arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (void)drawAfterImageForContext:(CGContextRef )arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

