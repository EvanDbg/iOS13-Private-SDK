//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray, NSUUID;

@interface _HDLocationInsertionJournalEntry : HDJournalEntry
{
    NSUUID *_seriesIdentifier;
    NSArray *_data;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(readonly, nonatomic) NSArray *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSUUID *seriesIdentifier; // @synthesize seriesIdentifier=_seriesIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithSeriesPersistentID:(id)arg1 locationData:(id)arg2;

@end

