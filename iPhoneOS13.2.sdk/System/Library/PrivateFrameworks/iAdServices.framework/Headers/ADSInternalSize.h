//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface ADSInternalSize : NSObject <NSSecureCoding, NSCopying>
{
    float _width;
    float _height;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
- (id)initWithCoder:(id)arg1;

@end

