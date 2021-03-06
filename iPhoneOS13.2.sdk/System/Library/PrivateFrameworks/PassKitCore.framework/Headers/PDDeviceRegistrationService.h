//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import <PassKitCore/PDDeviceRegistrationServiceExportedInterface-Protocol.h>

@class PDDeviceRegistrationServiceCoordinator, PKEntitlementWhitelist;

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;
    PDDeviceRegistrationServiceCoordinator *_deviceRegistrationServiceCoordinator;
}

@property(retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator; // @synthesize deviceRegistrationServiceCoordinator=_deviceRegistrationServiceCoordinator;
// - (void).cxx_destruct;
- (void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConnection:(id)arg1;

@end

