//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageContentRendition : NSObject
{
    BOOL _requiresMasking;
    CGImageRef _CGImage;
    UIColor *_multiplyColor;
}

+ (id)renditionWithCGImage:(CGImageRef)arg1 color:(id)arg2 requiresMasking:(BOOL)arg3;
@property(readonly, nonatomic) BOOL requiresMasking; // @synthesize requiresMasking=_requiresMasking;
@property(readonly, nonatomic) UIColor *multiplyColor; // @synthesize multiplyColor=_multiplyColor;
@property(readonly, nonatomic) CGImageRef CGImage; // @synthesize CGImage=_CGImage;
// - (void).cxx_destruct;
- (void)dealloc;

@end

