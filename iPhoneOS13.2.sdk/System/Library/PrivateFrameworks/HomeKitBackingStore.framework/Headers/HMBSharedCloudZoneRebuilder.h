//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBCloudZoneRebuilder-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBCloudZoneRebuilderStatus, NAFuture;

__attribute__((visibility("hidden")))
@interface HMBSharedCloudZoneRebuilder : HMFObject <HMFLogging, HMBCloudZoneRebuilder>
{
    HMBCloudZoneRebuilderStatus *_rebuilderStatus;
    NAFuture *_rebuildCompleteFuture;
    HMBCloudZone *_cloudZone;
}

+ (id)logCategory;
@property(nonatomic) __weak HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain, nonatomic) NAFuture *rebuildCompleteFuture; // @synthesize rebuildCompleteFuture=_rebuildCompleteFuture;
@property(copy) HMBCloudZoneRebuilderStatus *rebuilderStatus; // @synthesize rebuilderStatus=_rebuilderStatus;
// - (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;
- (void)handleZoneChanged;
- (void)handleIdentityLost;
- (id)zoneStartUp;
- (void)rebuild;
- (id)initWithCloudZone:(id)arg1;

@end

