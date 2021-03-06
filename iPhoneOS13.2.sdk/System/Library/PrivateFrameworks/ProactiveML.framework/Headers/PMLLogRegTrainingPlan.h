//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSArray, NSString, PMLModelWeights, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLLogRegTrackerProtocol, PMLNoiseStrategy, PMLTransformerProtocol;

@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    id <PMLLogRegTrackerProtocol> _tracker;
    id <PMLNoiseStrategy> _noiseStrategy;
    PMLSessionDescriptor *_sessionDescriptor;
    NSUInteger _maxSessionsLimit;
    NSUInteger _sessionsInBatch;
    NSUInteger _currentServerIteration;
    PMLModelWeights *_currentModelWeights;
    NSUInteger _localGradientIterations;
    float _localLearningRate;
    float _stoppingThreshold;
    NSUInteger _localMinimumIterations;
    BOOL _useOnlyAppleInternalSessions;
    double _skew;
    double _threshold;
    BOOL _isMultiLabel;
    NSUInteger _positiveLabel;
    NSUInteger _evaluationLevel;
    BOOL _reportScale;
    id <PMLTransformerProtocol> _transformer;
    NSArray *_refeaturizationDescriptors;
    BOOL _intercept;
    NSString *_planId;
}

+ (id)planWithStore:(id)arg1 tracker:(id)arg2 sessionDescriptor:(id)arg3 arguments:(id)arg4;
@property(readonly, nonatomic) NSArray *refeaturizationDescriptors; // @synthesize refeaturizationDescriptors=_refeaturizationDescriptors;
@property(readonly, nonatomic) id <PMLTransformerProtocol> transformer; // @synthesize transformer=_transformer;
@property(readonly, nonatomic) BOOL reportScale; // @synthesize reportScale=_reportScale;
@property(readonly, nonatomic) NSUInteger evaluationLevel; // @synthesize evaluationLevel=_evaluationLevel;
@property(readonly, nonatomic) BOOL intercept; // @synthesize intercept=_intercept;
@property(readonly, nonatomic) NSUInteger positiveLabel; // @synthesize positiveLabel=_positiveLabel;
@property(readonly, nonatomic) BOOL isMultiLabel; // @synthesize isMultiLabel=_isMultiLabel;
@property(readonly, nonatomic) BOOL useOnlyAppleInternalSessions; // @synthesize useOnlyAppleInternalSessions=_useOnlyAppleInternalSessions;
@property(readonly, nonatomic) NSUInteger localGradientIterations; // @synthesize localGradientIterations=_localGradientIterations;
@property(readonly, nonatomic) NSUInteger localMinimumIterations; // @synthesize localMinimumIterations=_localMinimumIterations;
@property(readonly, nonatomic) float stoppingThreshold; // @synthesize stoppingThreshold=_stoppingThreshold;
@property(readonly, nonatomic) float localLearningRate; // @synthesize localLearningRate=_localLearningRate;
@property(readonly, nonatomic) PMLModelWeights *currentModelWeights; // @synthesize currentModelWeights=_currentModelWeights;
@property(readonly, nonatomic) NSUInteger maxSessionsLimit; // @synthesize maxSessionsLimit=_maxSessionsLimit;
@property(readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
@property(readonly, nonatomic) NSUInteger currentServerIteration; // @synthesize currentServerIteration=_currentServerIteration;
@property(readonly, nonatomic) id <PMLLogRegTrackerProtocol> tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) PMLTrainingStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
// - (void).cxx_destruct;
- (void)runUntilDoneForTesting;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(BOOL )arg2;
@property(readonly, copy) NSString *description;
- (id)normalizeRegressor:(id)arg1;
- (void)loadSessionsWithBlock:(CDUnknownBlockType)arg1;
- (id)evaluationMetricsForPredictions:(id)arg1 objectives:(id)arg2 predicate:(CDUnknownBlockType)arg3 start:(id)arg4;
- (id)train;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(NSString *)arg4 sessionDescriptor:(id)arg5 maxSessionsLimit:(NSUInteger)arg6 sessionsInBatch:(NSUInteger)arg7 currentServerIteration:(NSUInteger)arg8 currentModelWeights:(id)arg9 localLearningRate:(float)arg10 stoppingThreshold:(float)arg11 localMinimumIterations:(NSUInteger)arg12 localGradientIterations:(NSUInteger)arg13 useOnlyAppleInternalSessions:(BOOL)arg14 skew:(double)arg15 threshold:(double)arg16 isMultiLabel:(BOOL)arg17 intercept:(BOOL)arg18 positiveLabel:(NSUInteger)arg19 evaluationLevel:(NSUInteger)arg20 reportScale:(BOOL)arg21 transformer:(id)arg22 refeaturizationDescriptors:(id)arg23;
- (id)init;

@end

