//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSArray, NSURL;
@protocol CalDAVRecurrenceSplitTaskGroupDelegate;

@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup
{
    NSURL *_folderURL;
    NSArray *_actions;
}

- (void)startTaskGroup;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <CalDAVRecurrenceSplitTaskGroupDelegate> delegate; // @dynamic delegate;

@end
