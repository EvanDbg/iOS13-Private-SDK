//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDPathPainter-Protocol.h>

@class TSDShadow;

@interface TSDShadowSwatch : NSObject <TSDPathPainter>
{
    TSDShadow *mShadow;
}

@property(readonly, nonatomic) TSDShadow *shadow; // @synthesize shadow=mShadow;
- (void)p_drawCurvedShadowInContext:(CGContextRef )arg1 inRect:(CGRect)arg2 forShadow:(id)arg3 forImage:(CGImageRef)arg4 forSwatchRect:(CGRect)arg5;
- (void)p_drawContactShadowInContext:(CGContextRef )arg1 inRect:(CGRect)arg2 forShadow:(id)arg3 forImage:(CGImageRef)arg4 forSwatchRect:(CGRect)arg5;
- (void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef )arg2;
- (void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef )arg2;
- (void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef )arg2 forImage:(CGImageRef)arg3 swatchRect:(CGRect)arg4 wantsStroke:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithShadow:(id)arg1;

@end

