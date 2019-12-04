//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class REFeature, REInteractionDescriptor;

@interface _REMLWeightedModel : NSObject <REAutomaticExportedInterface>
{
    REInteractionDescriptor *_descriptor;
    REFeature *_biasFeature;
}

+ (id)weightedModelWithDescriptor:(id)arg1 featureSet:(id)arg2;
- (void)_configureMode:(id)arg1;
- (_Bool)_loadModel:(id)arg1 fromURL:(id)arg2 error:(id *)arg3;
- (_Bool)loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)saveModelToURL:(id)arg1 error:(id *)arg2;
- (id)predictWithFeatures:(id)arg1;
- (void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2;
- (void)enumerateModels:(id /* block */)arg1;
@property(readonly, nonatomic) REFeature *selectionFeature;
@property(readonly, nonatomic) float weight;
- (float)_biasForFeatureSet:(id)arg1;
- (id)initWithBiasFeature:(id)arg1;

@end
