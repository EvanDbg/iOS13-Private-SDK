//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSString;

@interface HKInteractiveChartAudioData : NSObject <HKGraphSeriesChartData>
{
    double _averageLEQ;
    double _duration;
    HKInteractiveChartAudioData *_overviewData;
}

@property(retain, nonatomic) HKInteractiveChartAudioData *overviewData; // @synthesize overviewData=_overviewData;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double averageLEQ; // @synthesize averageLEQ=_averageLEQ;
// - (void).cxx_destruct;
- (id)_durationString:(double)arg1;
@property(readonly, copy) NSString *description;

@end

