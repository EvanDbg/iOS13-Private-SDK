//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

#import <PhotoAnalysis/PHAVisionServiceAssetsAnalyzingOperationDelegate-Protocol.h>
#import <PhotoAnalysis/PVVisionIntegrating-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSNumber, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface PHAVisionServiceWorker : PHAWorker <PHAVisionServiceAssetsAnalyzingOperationDelegate, PVVisionIntegrating>
{
    NSOperationQueue *_assetAnalysisOperationQueue;
    NSObject<OS_dispatch_queue> *_commandDispatchQueue;
    NSMapTable *_jobToAssetsAnalyzingOperationMapTable;
    NSMutableDictionary *_coalescedAnalysisResultsByAssetLocalIdentifier;
    NSMutableDictionary *_coalescedJobResultsByAssetLocalIdentifier;
    NSNumber *_lastRecordedDarkWakeState;
    _Atomic NSUInteger _lastPerformedJobScenario;
    BOOL _analysisJobCancelled;
    unsigned int _visionAlgorithmUmbrellaVersion;
}

+ (CDUnknownBlockType)assetResourceSmallestToLargestComparator;
+ (CDUnknownBlockType)assetResourceLargestToSmallestComparator;
+ (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
+ (void)disableANEForRequest:(id)arg1;
+ (id)defaultImageCreationOptions;
+ (id)analysisLog;
+ (void)initialize;
@property BOOL analysisJobCancelled; // @synthesize analysisJobCancelled=_analysisJobCancelled;
@property(nonatomic) unsigned int visionAlgorithmUmbrellaVersion; // @synthesize visionAlgorithmUmbrellaVersion=_visionAlgorithmUmbrellaVersion;
// - (void).cxx_destruct;
- (void)performVisionForcedCleanup;
- (void)performVisionForcedCleanupWithOptions:(id)arg1;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg1 forAsset:(id)arg2;
- (void)coalesceResultsDictionary:(id)arg1 forAssetLocalIdentifier:(id)arg2;
- (void)coalesceJobResult:(NSUInteger)arg1 forAssetLocalIdentifier:(id)arg2;
- (BOOL)supportsCoalescingResults;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id )arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id )arg2;
- (void)shutdown;
- (void)startup;
- (void)visionServiceAssetsProcessingOperation:(id)arg1 didExecuteToCompletion:(BOOL)arg2;
- (CGImageRef)createCGImageFromImageFileURL:(id)arg1 imageOptions:(id)arg2 orientation:(NSUInteger )arg3 error:(id )arg4;
- (CGImageRef)createCGImageForAssetResource:(id)arg1 imageOptions:(id)arg2 orientation:(NSUInteger )arg3 error:(id )arg4;
- (id)imageDataForAssetResource:(id)arg1 error:(id )arg2;
- (id)localFileURLForAssetResource:(id)arg1 error:(id )arg2;
- (id)assetResourcesForAsset:(id)arg1 fromDesiredTypes:(const long long )arg2 count:(NSUInteger)arg3;
- (BOOL)processAsset:(id)arg1 error:(id )arg2;
- (BOOL)getLocallyAvailableAssetResource:(id )arg1 forAnalyzingAsset:(id)arg2 error:(id )arg3;
- (id)assetWithLocalIdentifier:(id)arg1 error:(id )arg2;
- (CGImageRef)_createCGImageFromImageSource:(CGImageSource )arg1 imageOptions:(id)arg2 orientation:(NSUInteger )arg3 error:(id )arg4;
- (NSUInteger)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id )arg4;
- (NSUInteger)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id )arg4;
- (void)didPerformJob:(id)arg1;
- (void)willCompleteJob:(id)arg1;
- (NSUInteger)analyzeAssetWithLocalIdentifier:(id)arg1 workerJob:(id)arg2 error:(id )arg3;
- (NSUInteger)analyzeAssetWithLocalIdentifier:(id)arg1 dataLoadingOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 error:(id )arg4;
- (BOOL)canProvideAnalysisJobResultInformation:(id)arg1 withoutRequiringAssetResourceForAsset:(id)arg2;
- (void)willPerformJob:(id)arg1;
- (Class)assetsAnalyzingOperationClass;
- (NSUInteger)lastPerformedJobScenario;
- (BOOL)isExecutingDuringDarkWake;
- (void)_checkForDarkWakeStateTransition;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

@end

