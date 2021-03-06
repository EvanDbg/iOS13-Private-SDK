//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetParticipating-Protocol.h>
#import <CoverSheet/SBFNotificationExtensionVisibilityProviding-Protocol.h>
#import <CoverSheet/SBFNotificationLongLookPresenting-Protocol.h>

@class NCNotificationRequest, NCNotificationSectionSettings;
@protocol CSNotificationDispatcher;

@protocol CSNotificationDestination <CSCoverSheetParticipating, SBFNotificationExtensionVisibilityProviding, SBFNotificationLongLookPresenting>
@property(nonatomic) __weak id <CSNotificationDispatcher> dispatcher;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1;
- (void)updateNotificationRequest:(NCNotificationRequest *)arg1;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1;
@end

