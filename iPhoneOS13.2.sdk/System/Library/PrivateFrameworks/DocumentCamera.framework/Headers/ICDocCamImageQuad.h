//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentCamera/ICDocCamImageQuad-Protocol.h>

@class NSString;

@interface ICDocCamImageQuad : NSObject <ICDocCamImageQuad, NSSecureCoding>
{
    CGPoint _topLeft;
    CGPoint _topRight;
    CGPoint _bottomLeft;
    CGPoint _bottomRight;
    CGRect _boundingBox;
}

+ (BOOL)supportsSecureCoding;
+ (id)quadFromCGRect:(CGRect)arg1;
+ (id)quadFromVNRectangle:(id)arg1;
@property(nonatomic) CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(nonatomic) CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(nonatomic) CGPoint topRight; // @synthesize topRight=_topRight;
@property(nonatomic) CGPoint topLeft; // @synthesize topLeft=_topLeft;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addPointToQuadPoints:(CGPoint)arg1;
- (CGPoint)pointRotatedClockwiseAroundOrigin:(CGPoint)arg1;
- (void)rotatePointsClockwise;
- (void)rotatePointsByOrientation:(long long)arg1;
- (void)rotatePointsRemovingOrientation:(long long)arg1;
- (void)removeOrientation:(long long)arg1 boundingBox:(CGRect)arg2;
- (void)applyOrientation:(long long)arg1 boundingBox:(CGRect)arg2;
@property(readonly, nonatomic) BOOL isConvex;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)flippedQuadFromSourceFrame:(CGRect)arg1;
- (id)intersectionOfLineFrom:(CGPoint)arg1 to:(CGPoint)arg2 withLineFrom:(CGPoint)arg3 to:(CGPoint)arg4;
@property(readonly, nonatomic) BOOL containsIntersectingLines;
@property(readonly, nonatomic) BOOL containsPointsLessThanDistanceThreshold;
@property(readonly, nonatomic) BOOL containsAngleOutOfValidThreshold;
@property(readonly, nonatomic) BOOL containsPointOutsideOfExtendedImageBounds;
@property(readonly, nonatomic) double mininumAllowedDistanceBetweenPoints;
@property(readonly, nonatomic) BOOL isValid;
- (void)orientIfNecessary;
- (void)clampQuadToRect:(CGRect)arg1;
- (void)flipPointsWithSourceFrame:(CGRect)arg1;
- (CGSize)perspectiveCorrectedSize;
@property(readonly, nonatomic) CGRect bounds;
- (id)imageQuadByScalingBy:(CGSize)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithBottomLeft:(CGPoint)arg1 bottomRight:(CGPoint)arg2 topLeft:(CGPoint)arg3 topRight:(CGPoint)arg4;
- (id)normalizedQuadByConvertingFromView:(UIView )arg1 toView:(UIView )arg2 toViewSize:(CGSize)arg3;
- (id)quadByConvertingFromView:(UIView )arg1 toView:(UIView )arg2 isNormalized:(BOOL)arg3;

@end

