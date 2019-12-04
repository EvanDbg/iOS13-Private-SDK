//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRAVOutputDevice.h>



@class MRAVOutputDeviceSourceInfo, NSDictionary, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding>
{
    _MRAVOutputDeviceDescriptorProtobuf *_protobuf;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSDictionary *_modelSpecificInfo;
}

+ (_Bool)supportsSecureCoding;
- (id)bluetoothID;
- (unsigned int)volumeCapabilities;
- (_Bool)isAddedToHomeKit;
- (id)sourceInfo;
- (_Bool)isVolumeControlAvailable;
- (float)volume;
- (_Bool)requiresAuthorization;
- (_Bool)supportsExternalScreen;
- (_Bool)isLocalDevice;
- (_Bool)hasBatteryLevel;
- (float)batteryLevel;
- (id)modelSpecificInfo;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (_Bool)isDeviceGroupable;
- (_Bool)isProxyGroupPlayer;
- (_Bool)isGroupable;
- (_Bool)parentGroupContainsDiscoverableLeader;
- (id)parentGroupIdentifier;
- (_Bool)isAirPlayReceiverSessionActive;
- (_Bool)groupContainsGroupLeader;
- (_Bool)isGroupLeader;
- (_Bool)supportsBufferedAirPlay;
- (_Bool)canRelayCommunicationChannel;
- (_Bool)isRemoteControllable;
- (_Bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (_Bool)canFetchMediaDataFromSender;
- (_Bool)canPlayEncryptedProgressiveDownloadAssets;
- (_Bool)canAccessiCloudMusicLibrary;
- (_Bool)canAccessAppleMusic;
- (_Bool)canAccessRemoteAssets;
- (id)MACAddress;
- (id)logicalDeviceID;
- (id)groupID;
- (id)firmwareVersion;
- (id)modelID;
- (id)uid;
- (id)name;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkeleton:(id)arg1;
- (id)initWithDescriptor:(id)arg1;

@end
