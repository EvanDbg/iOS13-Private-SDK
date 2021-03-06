//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

@class PHAVisionServiceFaceProcessingWorker;

@interface PHAVisionServiceFaceProcessingWorkerAdditionalJob : PHAWorkerJob
{
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    NSUInteger _jobScenario;
    BOOL _isFinished;
}

// - (void).cxx_destruct;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id )arg2;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id )arg2;
- (BOOL)finished;
- (void)markAsFinished;
- (BOOL)stopJob:(id )arg1;
- (BOOL)startJob:(id )arg1;
- (NSUInteger)jobScenario;
- (id)photoLibrary;
- (id)faceProcessingWorker;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(NSUInteger)arg2;

@end

