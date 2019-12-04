//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UNNotificationResponse;
@protocol BCSCodePayload, BCSParsedData;

@protocol BCSNotificationServiceProtocol
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)notifyParsedCodeWithData:(id <BCSParsedData>)arg1 codePayload:(id <BCSCodePayload>)arg2 shouldReplacePreviousNotifications:(_Bool)arg3 reply:(void (^)(NSError *, AWDBarcodeSupportCodeDetectedEvent *))arg4;
@end
