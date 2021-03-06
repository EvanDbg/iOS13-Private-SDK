//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSString, NSUUID;

@protocol IDSSimLocalServerProtocol <NSObject>
- (void)getCurrentConnectedSimulatorUniqueID:(void (^)(NSUUID *))arg1;
- (void)switchToActivePairedDeviceWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deletePairedDeviceWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addPairedDeviceWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)transportResumeWithCompletion:(void (^)(NSError *))arg1;
- (void)transportSuspendWithCompletion:(void (^)(NSError *))arg1;
- (void)transportDisconnectWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)transportConnectWithSimulatorID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unregisterDataHandlerForService:(NSString *)arg1;
- (void)registerDataHandlerForService:(NSString *)arg1;
- (void)getNetworkSimulationState:(NSString *)arg1 completion:(void (^)(BOOL, BOOL))arg2;
- (void)setNetworkSimulation:(NSString *)arg1 enabled:(BOOL)arg2 completion:(void (^)(BOOL))arg3;
- (NSUInteger)connectionStateForSimulatorID:(NSUUID *)arg1;
- (void)getConnectionState:(void (^)(NSUInteger))arg1;
- (void)sendData:(NSData *)arg1 toDevice:(NSUUID *)arg2 withServiceName:(NSString *)arg3 messageID:(NSString *)arg4 completion:(void (^)(BOOL, NSError *, NSDictionary *))arg5;
- (void)sendData:(NSData *)arg1 withServiceName:(NSString *)arg2 messageID:(NSString *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
@end

