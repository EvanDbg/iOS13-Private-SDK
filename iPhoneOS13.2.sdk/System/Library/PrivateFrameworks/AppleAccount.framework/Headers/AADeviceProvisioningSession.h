//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AADeviceProvisioningSession : NSObject
{
    NSString *_dsid;
    NSUInteger _dsidNumber;
//    struct OpaqueCFHTTPCookieStorage _cookieStorageRef;
}

// - (void).cxx_destruct;
- (int)eraseProvisioning;
- (int)synchronizeProvisioningWithData:(id)arg1;
- (int)provisionDeviceWithData:(id)arg1;
- (id)deviceProvisioningInfo;
- (void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(BOOL)arg2;
- (void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(BOOL)arg2;
- (void)addProvisioningInfoToAARequest:(id)arg1;
//  (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage )arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (id)init;

@end

