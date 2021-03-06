//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, MISSING_TYPE;
@protocol NTKAstronomyRotationModelObserver, NURotatable;

@interface NTKAstronomyRotationModel : NSObject
{
    CADisplayLink *_displayLink;
//    const struct NTKAstronomyInteractionSettings _interactionSettings;
    id <NTKAstronomyRotationModelObserver> _observer;
    id <NURotatable> _rotatable;
    long long _state;
//    struct CLLocationCoordinate2D _landingCoordinate;
    MISSING_TYPE *_accumulatedPushVector;
    float _effectivePushDeceleration;
    float _effectivePullAcceleration;
    double _pushStartTime;
    double _pullStartTime;
    double _previousDisplayLinkCallbackTime;
    BOOL _isPulling;
}

@property(nonatomic, getter=isPulling) BOOL pulling; // @synthesize pulling=_isPulling;
// property(readonly, nonatomic) const struct NTKAstronomyInteractionSettings interactionSettings; // @synthesize interactionSettings=_interactionSettings;
@property(nonatomic) __weak id <NTKAstronomyRotationModelObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) __weak id <NURotatable> rotatable; // @synthesize rotatable=_rotatable;
// - (void).cxx_destruct;
- (void)_update;
- (void)_handleDisplayLink;
- (void)stop;
- (BOOL)isAtHomeCoordinate;
- (void)dealloc;
- (id)init;

@end

