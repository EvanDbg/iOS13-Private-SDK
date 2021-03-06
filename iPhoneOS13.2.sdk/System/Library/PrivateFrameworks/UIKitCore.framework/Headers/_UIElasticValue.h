//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIElasticValue : NSObject
{
    double _currentValue;
    double _targetValue;
    double _speed;
    double _friction;
    double _momentum;
}

@property(nonatomic) double momentum; // @synthesize momentum=_momentum;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
- (id)description;
@property(readonly, nonatomic, getter=isSteady) BOOL steady;
- (void)updateFromDisplayLink:(id)arg1;
- (void)update:(double)arg1;
- (id)initWithValue:(double)arg1;
- (id)init;

@end

