//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMNatalimeter.h>

@interface HDTMockCMNatalimeter : CMNatalimeter
{
    id /* CDUnknownBlockType */ _handleQueryDataSinceRecord;
    id /* CDUnknownBlockType */ _handleStartNatalimetryUpdates;
    id /* CDUnknownBlockType */ _handleStopNatalimeteryUpdates;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ handleStopNatalimeteryUpdates; // @synthesize handleStopNatalimeteryUpdates=_handleStopNatalimeteryUpdates;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handleStartNatalimetryUpdates; // @synthesize handleStartNatalimetryUpdates=_handleStartNatalimetryUpdates;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handleQueryDataSinceRecord; // @synthesize handleQueryDataSinceRecord=_handleQueryDataSinceRecord;
// - (void).cxx_destruct;
- (void)stopAbsoluteNatalimetryDataUpdates;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end

