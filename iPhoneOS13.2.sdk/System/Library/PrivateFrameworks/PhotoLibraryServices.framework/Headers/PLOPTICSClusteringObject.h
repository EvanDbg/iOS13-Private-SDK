//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLOPTICSClusteringObject : NSObject
{
    BOOL _processed;
    id _object;
    NSUInteger _index;
    NSUInteger _order;
    NSMutableArray *_neighbors;
    double _coreDistance;
    double _reachabilityDistance;
}

+ (id)clusterObjectWithObject:(id)arg1 index:(NSUInteger)arg2 epsilon:(double)arg3;
@property(nonatomic) BOOL processed; // @synthesize processed=_processed;
@property(nonatomic) double reachabilityDistance; // @synthesize reachabilityDistance=_reachabilityDistance;
@property(nonatomic) double coreDistance; // @synthesize coreDistance=_coreDistance;
@property(readonly, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(nonatomic) NSUInteger order; // @synthesize order=_order;
@property NSUInteger index; // @synthesize index=_index;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
// - (void).cxx_destruct;
- (void)updateCoreDistanceForNeighbor:(NSUInteger)arg1;
- (id)neighborAtIndex:(NSUInteger)arg1;
- (void)sortNeighborsByDistance;
- (void)registerNeighbors:(id)arg1 deleteExisting:(BOOL)arg2;
- (id)initWithObject:(id)arg1 index:(NSUInteger)arg2 epsilon:(double)arg3;

@end

