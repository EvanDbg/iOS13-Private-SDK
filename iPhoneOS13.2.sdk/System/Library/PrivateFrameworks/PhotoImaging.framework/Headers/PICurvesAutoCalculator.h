//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

#import <PhotoImaging/NUTimeBased-Protocol.h>

@interface PICurvesAutoCalculator : NUAutoCalculator <NUTimeBased>
{
}

+ (id)autoValuesForBlackPoint:(double)arg1 whitePoint:(double)arg2;
+ (id)_defaultCurveArray;
+ (id)dictionariesFromPoints:(id)arg1;
- (id)computeCurvesForImageHistogram:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;

@end

