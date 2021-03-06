//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEOCelestialRiseTransitSet : NSObject
{
    double _julianDay;
//     struct CAARiseTransitSetDetails _riseTransitSet;
    NSDate *_rise;
    NSDate *_transit;
    NSDate *_set;
}

// @property(readonly, nonatomic) struct CAARiseTransitSetDetails riseTransitSet; // @synthesize riseTransitSet=_riseTransitSet;
@property(readonly, nonatomic) double julianDay; // @synthesize julianDay=_julianDay;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)description;
- (double)_oldestEventInJulianDay;
- (int)_numberOfEvents;
@property(readonly, nonatomic) BOOL isTransitAboveHorizon;
@property(readonly, nonatomic) NSDate *set;
@property(readonly, nonatomic) NSDate *transit;
@property(readonly, nonatomic) NSDate *rise;
- (id)_dateFromOffset:(double)arg1;
// - (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails)arg2;

@end

