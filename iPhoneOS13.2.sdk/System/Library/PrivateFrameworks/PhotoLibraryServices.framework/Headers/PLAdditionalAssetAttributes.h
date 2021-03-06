//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLPTPTransferableAdditionalAssetAttributes-Protocol.h>

@class CLLocation, NSData, NSString, PLSpatialOverCaptureInformation;

@interface PLAdditionalAssetAttributes : PLManagedObject <PLPTPTransferableAdditionalAssetAttributes>
{
    CLLocation *__cachedShiftedLocation;
}

+ (id)entityName;
+ (id)listOfSyncedProperties;
// + (void)fromExtraDurationData:(id)arg1 getStillDisplayTime:(CDStruct_198678f7 )arg2 videoDuration:(CDStruct_198678f7 )arg3;
// + (id)newExtraDurationDataFromStillDisplayTime:(CDStruct_198678f7)arg1 videoDuration:(CDStruct_198678f7)arg2;
+ (id)descriptionForDestinationAssetCopyState:(short)arg1;
@property(retain, nonatomic, setter=_setCachedShiftedLocation:) CLLocation *_cachedShiftedLocation; // @synthesize _cachedShiftedLocation=__cachedShiftedLocation;
// - (void).cxx_destruct;
@property(nonatomic) BOOL shiftedLocationIsValid; // @dynamic shiftedLocationIsValid;
@property(retain, nonatomic) CLLocation *shiftedLocation;
- (void)willSave;
- (void)truncatedOriginalCheckChangedValues:(id)arg1;
- (BOOL)isUserInterfaceChange;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;
- (BOOL)validateForUpdate:(id )arg1;
- (BOOL)validateForInsert:(id )arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
@property(retain, nonatomic) NSString *longDescription;
@property(retain, nonatomic) NSData *mediaMetadataData;
- (void)resetCloudRecoveryState;
- (BOOL)hasCloudRecoveryStateFlagSet:(NSUInteger)arg1;
- (void)removeCloudRecoveryStateFlag:(NSUInteger)arg1;
- (void)setCloudRecoveryStateFlag:(NSUInteger)arg1;
- (BOOL)hasConsistentCloudState;
- (void)setSceneprintWithData:(id)arg1;
@property(readonly) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;

@end

