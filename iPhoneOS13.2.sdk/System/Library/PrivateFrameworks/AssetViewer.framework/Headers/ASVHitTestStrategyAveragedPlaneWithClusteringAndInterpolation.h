//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVHitTestStrategy.h>

@class MISSING_TYPE;

@interface ASVHitTestStrategyAveragedPlaneWithClusteringAndInterpolation : ASVHitTestStrategy
{
    float _currentPlaneHeight;
    MISSING_TYPE *_currentPlaneNormal;
}

- (BOOL)hasFormedClusterForMovement:(float )arg1 planeNormal:(MISSING_TYPE *)arg2;
- (BOOL)hasFormedClusterForInitialPlacement:(float )arg1 planeNormal:(MISSING_TYPE *)arg2;
- (BOOL)resultsContainPoorQualityEstimatedResults:(id)arg1;
- (BOOL)decisionHistoryContainsPlaneChange:(id)arg1 relativeToNewDecision:(id)arg2;
- (id)interpolatedDecisionForDecision:(id)arg1;
- (void)clearHistory;
- (id)init;

@end

