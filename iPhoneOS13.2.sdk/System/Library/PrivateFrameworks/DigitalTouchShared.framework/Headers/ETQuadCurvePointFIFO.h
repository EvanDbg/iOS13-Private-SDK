//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/ETPointFIFO.h>

@class MISSING_TYPE;

@interface ETQuadCurvePointFIFO : ETPointFIFO
{
    BOOL _emitInterpolatedPoints;
    float _unitSize;
    id /* CDUnknownBlockType */ _emissionHandler;
    MISSING_TYPE *_lastPoint;
    vector_e654105b _prevPoints;
    vector_e654105b _points;
    vector_e654105b _controlPoints;
}

@property(nonatomic) MISSING_TYPE *lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) vector_80ea899f controlPoints; // @synthesize controlPoints=_controlPoints;
@property(nonatomic) vector_80ea899f points; // @synthesize points=_points;
@property(nonatomic) vector_80ea899f prevPoints; // @synthesize prevPoints=_prevPoints;
@property(copy) id /* CDUnknownBlockType */ emissionHandler; // @synthesize emissionHandler=_emissionHandler;
@property(nonatomic) BOOL emitInterpolatedPoints; // @synthesize emitInterpolatedPoints=_emitInterpolatedPoints;
@property(nonatomic) float unitSize; // @synthesize unitSize=_unitSize;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoints:(MISSING_TYPE *)arg1 count:(NSUInteger)arg2;
- (id)initWithFIFO:(id)arg1;

@end

