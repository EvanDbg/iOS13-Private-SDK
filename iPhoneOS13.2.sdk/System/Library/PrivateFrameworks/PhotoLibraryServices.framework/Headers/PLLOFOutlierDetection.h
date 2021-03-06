//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLLOFOutlierDetection : NSObject
{
    BOOL _filterZeroDistanceDataset;
    NSUInteger _k;
}

@property(nonatomic) BOOL filterZeroDistanceDataset; // @synthesize filterZeroDistanceDataset=_filterZeroDistanceDataset;
@property(nonatomic) NSUInteger k; // @synthesize k=_k;
- (id)lofScoresWithDataset:(id)arg1 distanceBlock:(CDUnknownBlockType)arg2;
- (void)freeDistancesMatrix:(double )arg1 forDataset:(id)arg2;
- (double )createDistancesMatrixForDataset:(id)arg1 distanceBlock:(CDUnknownBlockType)arg2;
- (id)createKNNMatrixWithDistanceMatrix:(double )arg1 size:(NSUInteger)arg2;
- (id)filteredObjectsWithDataset:(id)arg1 distanceBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

