//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRTermsAcknowledgementRegistry-Protocol.h>

@class NSXPCConnection;
@protocol NRTermsAcknowledgementRegistry;

@interface NRTermsAcknowledgementRegistry : NSObject <NRTermsAcknowledgementRegistry>
{
    id <NRTermsAcknowledgementRegistry> _proxy;
}

+ (id)errorWithEnum:(NSUInteger)arg1;
+ (id)errorStringWithEnum:(NSUInteger)arg1;
@property(readonly, nonatomic) id <NRTermsAcknowledgementRegistry> proxy; // @synthesize proxy=_proxy;
// - (void).cxx_destruct;
- (void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSXPCConnection *connection;

@end

