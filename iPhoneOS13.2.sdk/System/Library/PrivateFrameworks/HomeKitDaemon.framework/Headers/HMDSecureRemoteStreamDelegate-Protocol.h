//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMFMessageTransportDelegate-Protocol.h>

@class HMDSecureRemoteStream, HMFMessage, NSError;

@protocol HMDSecureRemoteStreamDelegate <HMFMessageTransportDelegate>
- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional
- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)secureRemoteStreamIsIdle:(HMDSecureRemoteStream *)arg1;
@end

