//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCJobsMatching-Protocol.h>

@class PQLFormatInjection, PQLRawInjection;

@protocol BRCJobIdentifying <BRCJobsMatching, NSCopying>
- (PQLFormatInjection *)columnsValues;
- (PQLRawInjection *)columns;
@end

