//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADNotificationMonitorInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>
{
}

+ (id)whitelistedBundles;
+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventAccess;
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(id)arg2 error:(CDUnknownBlockType)arg3;
- (void)CADInviteReplyNotification:(id)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADResourceChange:(id)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADCalendar:(id)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADEvent:(id)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetInboxRepliedSectionItems:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)arg1 excludingDelegateSources:(BOOL)arg2 filteredByShowsNotificationsFlag:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseGetEventNotificationItemsFilteredByShowsNotificationsFlag:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetInviteReplyNotifications:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetResourceChanges:(CDUnknownBlockType)arg1;
- (void)CADCalendarSetClearedFromNotificationCenter:(id)arg1 error:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(CDUnknownBlockType)arg1;

@end

