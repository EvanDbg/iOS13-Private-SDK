//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKColor;

__attribute__((visibility("hidden")))
@interface SKUIPlaceholderImageKey : NSObject
{
    long long _height;
    long long _imageTreatment;
    long long _width;
    IKColor *_placeholderBackgroundColor;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithSize:(CGSize)arg1 imageTreatment:(long long)arg2 placeholderBackgroundColor:(id)arg3;

@end

