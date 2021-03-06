//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCountedSet, NSDateInterval, NSMutableArray, PGGraphAddressNode, PGPeopleVisitingVisit;

@interface PGPeopleVisitingSuperset : NSObject
{
    NSCountedSet *_numberOfMomentsByDistance;
    NSMutableArray *_visits;
    PGPeopleVisitingVisit *_currentVisit;
    PGGraphAddressNode *_addressNode;
    NSDateInterval *_localDateInterval;
    NSUInteger _numberOfMatchingMoments;
    NSUInteger _totalNumberOfMoments;
//     struct CLLocationCoordinate2D _coordinates;
}

@property(readonly) NSArray *visits; // @synthesize visits=_visits;
@property(readonly) NSUInteger totalNumberOfMoments; // @synthesize totalNumberOfMoments=_totalNumberOfMoments;
@property(readonly) NSUInteger numberOfMatchingMoments; // @synthesize numberOfMatchingMoments=_numberOfMatchingMoments;
@property(readonly) NSDateInterval *localDateInterval; // @synthesize localDateInterval=_localDateInterval;
// @property(readonly) struct CLLocationCoordinate2D coordinates; // @synthesize coordinates=_coordinates;
@property(readonly) PGGraphAddressNode *addressNode; // @synthesize addressNode=_addressNode;
// - (void).cxx_destruct;
- (id)description;
- (void)resetVisitFindingSession;
- (void)closeVisitFindingSession;
- (void)registerMomentNode:(id)arg1 distance:(NSUInteger)arg2;
@property(readonly) double upperCloseRatio;
@property(readonly) double lowerCloseRatio;
@property(readonly) double upperFarRatio;
@property(readonly) double lowerFarRatio;
@property(readonly) double upperVeryFarRatio;
@property(readonly) double lowerVeryFarRatio;
- (id)initWithAddressNode:(id)arg1 localDateInterval:(id)arg2;

@end

