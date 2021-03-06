//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDObjectLookup.h>

#import <HomeKitDaemon/HMDObjectLookupScanProtocol-Protocol.h>

@class HMDHome;

@interface HMDHomeObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol>
{
    HMDHome *_home;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (void)lookupAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_scanUsers;
- (void)_scanMediaSystems;
- (void)_scanResidentDevices;
- (void)_scanTriggers;
- (void)_scanServiceGroups;
- (void)_scanActionSets;
- (void)_scanZones;
- (void)_scanRooms;
- (void)_scanSetting:(id)arg1;
- (void)_scanSettingGroup:(id)arg1;
- (void)_scanAccessoriesAndServices;
- (void)scanObjects;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1;

@end

