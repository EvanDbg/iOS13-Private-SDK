//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardUIServices/SBSUIStarkNotificationsSceneClientSettings-Protocol.h>

@interface SBSUIStarkNotificationsSceneClientSettings : UIApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3;
- (id)keyDescriptionForSetting:(NSUInteger)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) BOOL shouldBorrowScreen;
@property(readonly, nonatomic, getter=isDisplayingNotification) BOOL displayingNotification;

@end

