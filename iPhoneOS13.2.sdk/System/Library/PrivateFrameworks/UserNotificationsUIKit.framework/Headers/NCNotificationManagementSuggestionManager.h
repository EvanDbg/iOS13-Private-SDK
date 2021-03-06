//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationManagementContentProviderDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementSuggestionDelegate-Protocol.h>

@class NCNotificationRequest, NSMutableDictionary, NSMutableSet;
@protocol NCNotificationManagementSuggestionManagerDelegate;

@interface NCNotificationManagementSuggestionManager : NSObject <NCNotificationManagementContentProviderDelegate, NCNotificationManagementSuggestionDelegate>
{
    BOOL _deviceAuthenticated;
    id <NCNotificationManagementSuggestionManagerDelegate> _delegate;
    NSMutableDictionary *_notificationManagementSuggestionContentProviders;
    NSMutableSet *_sectionIdentifiersWithNotificationManagementSuggestions;
    NCNotificationRequest *_requestWithRemoteNotificationManagementSuggestion;
    NCNotificationRequest *_requestWithProvisionalNotificationManagementSuggestion;
    double _scoreForRequestWithRemoteNotificationManagementSuggestion;
}

@property(nonatomic) double scoreForRequestWithRemoteNotificationManagementSuggestion; // @synthesize scoreForRequestWithRemoteNotificationManagementSuggestion=_scoreForRequestWithRemoteNotificationManagementSuggestion;
@property(retain, nonatomic) NCNotificationRequest *requestWithProvisionalNotificationManagementSuggestion; // @synthesize requestWithProvisionalNotificationManagementSuggestion=_requestWithProvisionalNotificationManagementSuggestion;
@property(retain, nonatomic) NCNotificationRequest *requestWithRemoteNotificationManagementSuggestion; // @synthesize requestWithRemoteNotificationManagementSuggestion=_requestWithRemoteNotificationManagementSuggestion;
@property(retain, nonatomic) NSMutableSet *sectionIdentifiersWithNotificationManagementSuggestions; // @synthesize sectionIdentifiersWithNotificationManagementSuggestions=_sectionIdentifiersWithNotificationManagementSuggestions;
@property(retain, nonatomic) NSMutableDictionary *notificationManagementSuggestionContentProviders; // @synthesize notificationManagementSuggestionContentProviders=_notificationManagementSuggestionContentProviders;
@property(nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(nonatomic) __weak id <NCNotificationManagementSuggestionManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_removeSuggestionIfNecessaryForNotificationRequest:(id)arg1;
- (void)_createNewPromotingSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_createNewQuietingSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_addSuggestionForNotificationRequest:(id)arg1 managementContentProvider:(id)arg2;
- (void)_addRemoteNotificationManagementSuggestionForRequest:(id)arg1 withResponse:(BOOL)arg2 score:(double)arg3 sectionSettings:(id)arg4 isPromotingSuggestion:(BOOL)arg5;
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;
- (void)_updateContentForNotificationRequest:(id)arg1;
- (void)notificationManagementContentProvider:(id)arg1 keepNotificationsForSectionIdentifierForNotificationRequest:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 hasUpdatedContentForRequest:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(NSUInteger)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4;
- (void)logResponseForNotificationRequest:(id)arg1 deliveryQuietly:(BOOL)arg2;
- (void)logResponseForNotificationRequest:(id)arg1 allowsNotifications:(BOOL)arg2;
- (id)auxiliaryOptionsContentProviderForNotificationRequest:(id)arg1 isLongLook:(BOOL)arg2;
- (void)checkNotificationManagementSuggestionNeededForNotificationRequest:(id)arg1;
- (id)init;

@end

