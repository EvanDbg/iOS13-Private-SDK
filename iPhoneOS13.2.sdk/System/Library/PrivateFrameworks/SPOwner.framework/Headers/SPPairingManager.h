//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMXPCServiceDescription, FMXPCSession;
@protocol OS_dispatch_queue, SPPairingManagerXPCProtocol;

@interface SPPairingManager : NSObject
{
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPPairingManagerXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPPairingManagerXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
- (void)alwaysBeaconStateWithCompletion:(id /* block */)arg1;
- (void)setAlwaysBeaconState:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)currentBeaconingKeyWithCompletion:(id /* block */)arg1;
- (void)getLocalPairingDataWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;
- (id)userAgentProxy;
- (void)dealloc;
- (id)init;

@end
