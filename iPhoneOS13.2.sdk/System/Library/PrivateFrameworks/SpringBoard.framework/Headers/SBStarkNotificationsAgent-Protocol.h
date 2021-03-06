//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBStarkNotificationSceneComponent, UIScreen;
@protocol SBStarkNotificationsAgentDelegate, SBStarkNotificationsConfiguring;

@protocol SBStarkNotificationsAgent <NSObject>
@property(readonly, nonatomic) id <SBStarkNotificationsConfiguring> activeConfiguration;
@property(nonatomic) __weak id <SBStarkNotificationsAgentDelegate> delegate;
- (void)noteComponentDidDeactivate:(SBStarkNotificationSceneComponent *)arg1;
- (void)noteComponentDidActivate:(SBStarkNotificationSceneComponent *)arg1;
- (id <SBStarkNotificationsConfiguring>)activeConfigurationForScreen:(UIScreen *)arg1;
@end

