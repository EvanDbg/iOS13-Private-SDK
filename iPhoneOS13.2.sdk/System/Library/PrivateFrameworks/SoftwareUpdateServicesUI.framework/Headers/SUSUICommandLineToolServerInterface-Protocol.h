//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSNumber;

@protocol SUSUICommandLineToolServerInterface <NSObject>
- (void)setPasscodePolicy:(NSUInteger)arg1;
- (void)downloadDidFinish;
- (void)simulateComingFromOTAUpdate;
- (void)reboot:(BOOL)arg1;
- (void)toggleSettingsBadge:(BOOL)arg1;
- (void)showEmergencyCallUIWithOptions:(NSUInteger)arg1 result:(void (^)(BOOL, NSError *))arg2;
- (void)showAuthenticationUIWithOptions:(NSUInteger)arg1 result:(void (^)(BOOL, NSError *))arg2;
- (void)showFollowUp:(NSUInteger)arg1;
- (void)showMiniAlert:(NSUInteger)arg1 usingFakeData:(BOOL)arg2 errorCode:(NSNumber *)arg3;
@end

