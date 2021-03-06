//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIBurstImageSet, NSString;

@interface CAMBurstSession : NSObject
{
    BOOL _finalized;
    NSUInteger _estimatedCount;
    NSUInteger _count;
    CIBurstImageSet *__burstImageSet;
}

@property(readonly, nonatomic) CIBurstImageSet *_burstImageSet; // @synthesize _burstImageSet=__burstImageSet;
@property(nonatomic, getter=_isFinalized, setter=_setFinalized:) BOOL finalized; // @synthesize finalized=_finalized;
@property(nonatomic, setter=_setCount:) NSUInteger count; // @synthesize count=_count;
@property(nonatomic, setter=_setEstimatedCount:) NSUInteger estimatedCount; // @synthesize estimatedCount=_estimatedCount;
// - (void).cxx_destruct;
- (void)addStillImageLocalPersistenceResult:(id)arg1 withFaces:(id)arg2;
- (void)addStillImageCaptureResult:(id)arg1;
- (id)performBurstAnalysisForDevice:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)description;
- (id)init;

@end

