//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CADObjectID, NSString;

@protocol CADNotificationMonitorInterface
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(CADObjectID *)arg2 error:(void (^)(int))arg3;
- (void)CADInviteReplyNotification:(CADObjectID *)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADResourceChange:(CADObjectID *)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADCalendar:(CADObjectID *)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADEvent:(CADObjectID *)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADDatabaseGetInboxRepliedSectionItems:(void (^)(int, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(NSString *)arg1 excludingDelegateSources:(_Bool)arg2 filteredByShowsNotificationsFlag:(_Bool)arg3 reply:(void (^)(int, unsigned long long))arg4;
- (void)CADDatabaseGetEventNotificationItemsFilteredByShowsNotificationsFlag:(_Bool)arg1 reply:(void (^)(int, NSArray *, NSArray *, NSArray *))arg2;
- (void)CADDatabaseGetInviteReplyNotifications:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetResourceChanges:(void (^)(int, NSArray *))arg1;
- (void)CADCalendarSetClearedFromNotificationCenter:(CADObjectID *)arg1 error:(void (^)(int))arg2;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(void (^)(int, NSArray *))arg1;
@end
