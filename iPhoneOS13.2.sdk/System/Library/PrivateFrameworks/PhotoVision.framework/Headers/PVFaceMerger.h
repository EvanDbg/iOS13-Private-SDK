//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PVContext;
@protocol PVVisionIntegrating;

@interface PVFaceMerger : NSObject
{
    PVContext *_context;
    id <PVVisionIntegrating> _visionIntegration;
}

// - (void).cxx_destruct;
- (id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg1 andCandidateFaces:(id)arg2;
- (id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3;
- (BOOL)_alignBBoxForPVFaces:(id)arg1 forImage:(id)arg2;
- (id)_bboxAlignedFaceObservationsFromFaceObservations:(id)arg1 inImage:(id)arg2 withError:(id )arg3;
- (id)_faceObservationsWithBBoxFromPVFaces:(id)arg1 mapping:(id)arg2;
- (void)_configureRequest:(id)arg1;
- (id)initWithContext:(id)arg1 visionIntegration:(id)arg2;

@end

