//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity;

@interface HDDemoDataWorkoutPrototype : NSObject
{
    NSUInteger _workoutActivityType;
    NSUInteger _goalType;
    HKQuantity *_goal;
    double _startTimeOffsetInDay;
    double _duration;
    double _totalEnergyBurnedInKcal;
    double _totalDistanceWalkingInMiles;
    double _totalDistanceCyclingInMiles;
    double _totalDistanceSwimmingInYards;
    double _swimmingSegmentDistanceInYards;
    long long _totalSwimmingSegments;
    long long _numLapsPerSegment;
    double _swimTimePerSegment;
    double _restTimePerSegment;
    long long _swimmingStrokeStyle;
}

+ (id)yogaAndRunningPrototypes;
+ (id)thirdPartyWorkoutPrototype;
+ (id)yogaPrototype;
+ (id)hikingPrototype;
+ (id)walkingPrototype;
+ (id)swimmingPrototype;
+ (id)runningPrototype;
+ (id)HIITPrototype;
+ (id)ellipticalPrototype;
+ (id)workoutPrototypeWithActivityType:(NSUInteger)arg1 goalType:(NSUInteger)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8 distanceSwimming:(double)arg9 distanceSwimmingSegment:(double)arg10 totalSwimmingSegments:(long long)arg11 numLapsPerSegment:(long long)arg12 swimTimePerSegment:(double)arg13 restTimePerSegment:(double)arg14 swimmingStrokeStyle:(long long)arg15;
+ (id)workoutPrototypeWithActivityType:(NSUInteger)arg1 goalType:(NSUInteger)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8;
@property(nonatomic) long long swimmingStrokeStyle; // @synthesize swimmingStrokeStyle=_swimmingStrokeStyle;
@property(nonatomic) double restTimePerSegment; // @synthesize restTimePerSegment=_restTimePerSegment;
@property(nonatomic) double swimTimePerSegment; // @synthesize swimTimePerSegment=_swimTimePerSegment;
@property(nonatomic) long long numLapsPerSegment; // @synthesize numLapsPerSegment=_numLapsPerSegment;
@property(nonatomic) long long totalSwimmingSegments; // @synthesize totalSwimmingSegments=_totalSwimmingSegments;
@property(nonatomic) double swimmingSegmentDistanceInYards; // @synthesize swimmingSegmentDistanceInYards=_swimmingSegmentDistanceInYards;
@property(nonatomic) double totalDistanceSwimmingInYards; // @synthesize totalDistanceSwimmingInYards=_totalDistanceSwimmingInYards;
@property(nonatomic) double totalDistanceCyclingInMiles; // @synthesize totalDistanceCyclingInMiles=_totalDistanceCyclingInMiles;
@property(nonatomic) double totalDistanceWalkingInMiles; // @synthesize totalDistanceWalkingInMiles=_totalDistanceWalkingInMiles;
@property(nonatomic) double totalEnergyBurnedInKcal; // @synthesize totalEnergyBurnedInKcal=_totalEnergyBurnedInKcal;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTimeOffsetInDay; // @synthesize startTimeOffsetInDay=_startTimeOffsetInDay;
@property(retain, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property(nonatomic) NSUInteger goalType; // @synthesize goalType=_goalType;
@property(nonatomic) NSUInteger workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
// - (void).cxx_destruct;

@end

