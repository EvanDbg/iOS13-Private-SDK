//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDPathSource.h>

#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSDSmartPathSource-Protocol.h>

@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>
{
    int mType;
    CGPoint mPoint;
    CGSize mNaturalSize;
}

+ (id)pathSourceWithType:(int)arg1 point:(CGPoint)arg2 naturalSize:(CGSize)arg3;
+ (id)plusWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2;
+ (id)starWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2;
+ (id)doubleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2;
+ (id)leftSingleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2;
+ (id)rightSingleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2;
@property CGSize naturalSize; // @synthesize naturalSize=mNaturalSize;
@property CGPoint point; // @synthesize point=mPoint;
@property int type; // @synthesize type=mType;
- (BOOL)p_isFlippedDoubleArrow;
- (BOOL)p_isRightFacingArrow;
- (CGPoint)p_getControlKnobPointForPlus;
- (void)p_setControlKnobPointForPlus:(CGPoint)arg1;
- (CGPoint)p_getControlKnobPointForStarInnerRadius;
- (void)p_setControlKnobPointForStarInnerRadius:(CGPoint)arg1;
- (CGPoint)p_getControlKnobPointForStarPoints;
- (void)p_setControlKnobPointForStarPoints:(CGPoint)arg1;
- (CGPoint)p_getControlKnobPointForArrow;
- (void)p_setControlKnobPointForArrow:(CGPoint)arg1;
- (CGPathRef)p_newPlusPath;
- (CGPathRef)p_newStarPath;
- (CGPathRef)p_newArrowPath;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (CGSize)scaleFactorForInscribedRectangle;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (id)bezierPathWithoutFlips;
- (id)valueForSetSelector:(SEL)arg1;
- (CGPathRef)newFeedbackPathForKnob:(NSUInteger)arg1;
- (id)getFeedbackStringForKnob:(NSUInteger)arg1;
- (void)setControlKnobPosition:(NSUInteger)arg1 toPoint:(CGPoint)arg2;
- (CGPoint)getControlKnobPosition:(NSUInteger)arg1;
@property(readonly) NSUInteger numberOfControlKnobs;
- (void)setPointValue:(id)arg1;
- (void)scaleToNaturalSize:(CGSize)arg1;
- (CGPoint)maxPointValue;
- (CGPoint)minPointValue;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithType:(int)arg1 point:(CGPoint)arg2 naturalSize:(CGSize)arg3;

@end

