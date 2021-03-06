//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, PKPushCredentials, PKPushPayload, PKPushRegistry;

@protocol PKPushRegistryDelegate <NSObject>
- (void)pushRegistry:(PKPushRegistry *)arg1 didUpdatePushCredentials:(PKPushCredentials *)arg2 forType:(NSString *)arg3;

@optional
- (void)pushRegistry:(PKPushRegistry *)arg1 didInvalidatePushTokenForType:(NSString *)arg2;
- (void)pushRegistry:(PKPushRegistry *)arg1 didReceiveIncomingPushWithPayload:(PKPushPayload *)arg2 forType:(NSString *)arg3 withCompletionHandler:(void (^)(void))arg4;
- (void)pushRegistry:(PKPushRegistry *)arg1 didReceiveIncomingPushWithPayload:(PKPushPayload *)arg2 forType:(NSString *)arg3;
@end

