//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADCalendarItemInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(id /* block */)arg3;
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(id /* block */)arg3;
- (void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(id /* block */)arg3;
- (void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(id /* block */)arg3;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseExportCalendarItemAsICS:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (id)_resultsFilteredForJunkEvents:(id)arg1;
- (id)_resultsFilteredForTCCAccess:(id)arg1;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(id /* block */)arg4;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 reply:(id /* block */)arg3;
- (void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(id /* block */)arg2;

@end
