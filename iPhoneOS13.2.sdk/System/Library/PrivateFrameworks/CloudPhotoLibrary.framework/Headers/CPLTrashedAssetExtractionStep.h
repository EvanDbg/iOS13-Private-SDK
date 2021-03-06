//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@interface CPLTrashedAssetExtractionStep : CPLBatchExtractionStep
{
    NSUInteger _maximumCount;
}

@property(readonly, nonatomic) NSUInteger maximumCount; // @synthesize maximumCount=_maximumCount;
- (id)shortDescription;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (BOOL)extractToBatch:(id)arg1 maximumCount:(NSUInteger)arg2 maximumResourceSize:(NSUInteger)arg3 error:(id )arg4;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(NSUInteger)arg3;

@end

