//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerActionItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem
{
    CoreDAVLeafItem *_dtstamp;
    CalDAVCalendarServerActionItem *_action;
}

@property(retain, nonatomic) CalDAVCalendarServerActionItem *action; // @synthesize action=_action;
@property(retain, nonatomic) CoreDAVLeafItem *dtstamp; // @synthesize dtstamp=_dtstamp;
// - (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end

