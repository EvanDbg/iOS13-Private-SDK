//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIColor;

__attribute__((visibility("hidden")))
@interface ISColor : NSObject
{
    CGColorRef _cgColor;
}

+ (CGColorSpaceRef)deviceGreyColorSpace;
+ (CGColorSpaceRef)deviceRGBColorSpace;
+ (id)black;
@property(readonly) CGColorRef cgColor; // @synthesize cgColor=_cgColor;
@property(readonly) CIColor *ciColor;
- (void)dealloc;
- (id)initWithCGColor:(CGColorRef)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end

