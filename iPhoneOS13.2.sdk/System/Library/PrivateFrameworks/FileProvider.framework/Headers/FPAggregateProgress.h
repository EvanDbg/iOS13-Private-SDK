//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray;

@interface FPAggregateProgress : NSProgress
{
    NSMutableArray *_childProgresses;
}

// - (void).cxx_destruct;
- (void)startReportingProgress;
- (void)cancel;
- (void)addChild:(id)arg1;

@end

