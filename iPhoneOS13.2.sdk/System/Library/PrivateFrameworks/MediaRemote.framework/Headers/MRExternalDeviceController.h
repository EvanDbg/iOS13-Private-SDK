//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableSet, NSNetServiceBrowser, NSString;
@protocol MRExternalDeviceControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceController : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableSet *_discoveredDevices;
    NSMutableSet *_resolvingServices;
    NSMutableSet *_monitoringServices;
    BOOL _discovering;
    id <MRExternalDeviceControllerDelegate> _delegate;
    NSString *_bonjourServiceType;
}

+ (Class)externalDeviceClass;
@property(readonly, nonatomic, getter=isDiscovering) BOOL discovering; // @synthesize discovering=_discovering;
@property(readonly, nonatomic) NSString *bonjourServiceType; // @synthesize bonjourServiceType=_bonjourServiceType;
@property(nonatomic) __weak id <MRExternalDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_isManagedConfigIDAllowed:(id)arg1;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)endDiscovery;
- (void)beginDiscovery;
- (void)dealloc;
- (id)initWithBonjourServiceType:(id)arg1;

@end

