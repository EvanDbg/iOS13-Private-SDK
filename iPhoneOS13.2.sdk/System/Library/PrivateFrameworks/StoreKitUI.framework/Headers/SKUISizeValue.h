//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface SKUISizeValue : NSObject <NSCopying>
{
    long long _height;
    long long _width;
}

// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)unionWithSize:(CGSize)arg1;
@property(readonly, nonatomic) CGSize size;
- (id)initWithSize:(CGSize)arg1;

@end

