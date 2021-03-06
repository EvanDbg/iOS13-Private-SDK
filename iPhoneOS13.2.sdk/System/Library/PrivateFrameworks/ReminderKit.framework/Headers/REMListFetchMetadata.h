//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMFetchMetadata.h>

@class NSDictionary;

@interface REMListFetchMetadata : REMFetchMetadata
{
    NSDictionary *_incompleteReminderCounts;
    long long _scheduledCount;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long scheduledCount; // @synthesize scheduledCount=_scheduledCount;
@property(readonly, nonatomic) NSDictionary *incompleteReminderCounts; // @synthesize incompleteReminderCounts=_incompleteReminderCounts;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncompleteReminderCounts:(id)arg1 scheduledCount:(long long)arg2;

@end

