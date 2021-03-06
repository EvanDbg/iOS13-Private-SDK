//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface FCColorGradient : NSObject <NSCopying>
{
    NSArray *_colors;
    NSArray *_locations;
    CGPoint _startPoint;
    CGPoint _endPoint;
}

+ (id)whiteGradient;
+ (id)blackGradient;
+ (id)colorGradientWithConfigDict:(id)arg1;
+ (id)colorGradientWithColors:(id)arg1 locations:(id)arg2;
+ (id)colorGradientWithPBColorGradient:(id)arg1;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) CGPoint startPoint; // @synthesize startPoint=_startPoint;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isSimilarToColorGradient:(id)arg1 withinPercentage:(double)arg2;
- (id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 colors:(id)arg3 locations:(id)arg4;
- (id)init;
- (id)pbColorGradient;

@end

