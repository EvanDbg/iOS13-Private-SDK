//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDShadow.h>

@interface TSDCurvedShadow : TSDShadow
{
    double mCurve;
}

+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(CGColorRef)arg6 enabled:(BOOL)arg7;
@property(readonly, nonatomic) double curve; // @synthesize curve=mCurve;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (CGRect)boundsForRep:(id)arg1;
- (CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (CGRect)shadowBoundsForRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2;
- (BOOL)showForEditingText;
- (BOOL)isEqual:(id)arg1;
- (id)newShadowClampedForSwatches;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (double)offsetFromCurve;
- (double)getVerticalOffset:(CGSize)arg1;
- (CGPoint)boundsShiftForSize:(CGSize)arg1;
- (CGRect)expandedBoundsForRect:(CGRect)arg1;
- (double)paddingForBlur;
- (NSUInteger)shadowType;
- (double)clampOffset:(double)arg1;
- (id)description;
- (id)initWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(CGColorRef)arg6 enabled:(BOOL)arg7;

@end

