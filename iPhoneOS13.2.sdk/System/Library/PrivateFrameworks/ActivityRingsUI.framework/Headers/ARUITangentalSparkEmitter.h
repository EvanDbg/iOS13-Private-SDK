//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIKineticSparkEmitter-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface ARUITangentalSparkEmitter : NSObject <ARUIKineticSparkEmitter>
{
    float _angle;
    NSUInteger _particleCount;
    NSUInteger _bufferOffset;
    MISSING_TYPE *_position;
    MISSING_TYPE *_tangent;
    float _tangentalBirthRate;
    float _tangentalGravity;
    MISSING_TYPE *_tangentalVelocity;
    MISSING_TYPE *_tangentalSizeX;
    MISSING_TYPE *_tangentalSizeY;
    MISSING_TYPE *_tangentalLifeSpan;
    float _firstWindowFinalBirthTime;
    float _firstWindowFinalDeathTime;
    float _secondWindowFinalBirthTime;
    float _secondWindowFinalDeathTime;
    float _emitterStartTime;
}

@property(nonatomic) float emitterStartTime; // @synthesize emitterStartTime=_emitterStartTime;
- (id)updateForTime:(float)arg1;
- (id)_updateWithStartTime:(float)arg1 particleCount:(NSUInteger)arg2 bufferOffset:(NSUInteger)arg3;
- (id)generateSparks;
- (NSUInteger)bufferOffset;
- (void)setBufferOffset:(NSUInteger)arg1;
- (NSUInteger)particleCount;
- (void)setParticleCount:(NSUInteger)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (id)init;

@end

