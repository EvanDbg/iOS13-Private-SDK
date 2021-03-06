//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPHistoryReplicaMergeOptions-Protocol.h>

@class NSDate;

@interface MSPHistoryReplicaMergeOptions : NSObject <MSPHistoryReplicaMergeOptions>
{
    NSDate *_earliestKnownSyncDate;
    long long _modificationDatePolicy;
}

@property(readonly) long long modificationDatePolicy; // @synthesize modificationDatePolicy=_modificationDatePolicy;
@property(readonly) NSDate *earliestKnownSyncDate; // @synthesize earliestKnownSyncDate=_earliestKnownSyncDate;
// - (void).cxx_destruct;
- (id)initWithEarliestKnownSyncDate:(id)arg1 modificationDatePolicy:(long long)arg2;

@end

