//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REMReminder;

@interface REMReminderSubtaskContext : NSObject
{
    REMReminder *_reminder;
}

@property(retain, nonatomic) REMReminder *reminder; // @synthesize reminder=_reminder;
// - (void).cxx_destruct;
- (id)fetchRemindersWithError:(id )arg1;
@property(readonly, nonatomic) REMReminder *parentReminder;
- (id)initWithReminder:(id)arg1;

@end

