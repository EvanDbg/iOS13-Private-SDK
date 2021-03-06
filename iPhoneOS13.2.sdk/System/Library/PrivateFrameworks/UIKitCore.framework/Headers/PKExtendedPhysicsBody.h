//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhysicsKit/PKPhysicsBody.h>

__attribute__((visibility("hidden")))
@interface PKExtendedPhysicsBody : PKPhysicsBody
{
    long long _associations;
    double _areaFactor;
}

+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1;
+ (id)bodyWithEdgeChainFromPath:(CGPathRef)arg1;
+ (id)bodyWithPolygonFromPath:(CGPathRef)arg1;
+ (id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(CGSize)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithEllipseInRect:(CGRect)arg1;
- (BOOL)dissociate;
- (void)associate;
- (id)description;
- (id)initWithRectangleOfSize:(CGSize)arg1;
@property(nonatomic) double normalizedDensity;
- (id)init;

@end

