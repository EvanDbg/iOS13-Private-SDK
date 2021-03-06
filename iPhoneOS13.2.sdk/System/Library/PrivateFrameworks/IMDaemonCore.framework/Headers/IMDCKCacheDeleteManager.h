//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDCKCacheDeleteManager : NSObject
{
    BOOL _alreadyCapturedErrorWithAutoBugCapture;
    BOOL _allowsWritingToDisk;
    BOOL _deviceLowOnDiskSpace;
    BOOL _isUsingCentralizedModel;
    BOOL _isUpdatingAttachmentFileSizes;
}

+ (id)sharedInstance;
@property BOOL isUpdatingAttachmentFileSizes; // @synthesize isUpdatingAttachmentFileSizes=_isUpdatingAttachmentFileSizes;
@property(nonatomic) BOOL isUsingCentralizedModel; // @synthesize isUsingCentralizedModel=_isUsingCentralizedModel;
@property(nonatomic, getter=isDeviceLowOnDiskSpace) BOOL deviceLowOnDiskSpace; // @synthesize deviceLowOnDiskSpace=_deviceLowOnDiskSpace;
@property(nonatomic) BOOL allowsWritingToDisk; // @synthesize allowsWritingToDisk=_allowsWritingToDisk;
@property(nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture; // @synthesize alreadyCapturedErrorWithAutoBugCapture=_alreadyCapturedErrorWithAutoBugCapture;
- (void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(NSUInteger)arg2 numberOfBatchesToFetch:(NSUInteger)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (BOOL)_shouldFetchNextBatch:(NSUInteger)arg1 totalTransfers:(id)arg2;
- (NSUInteger)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(NSUInteger)arg3;
- (id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(NSUInteger)arg2;
- (void)_fetchTransfersFromCloudKit:(id)arg1;
//  (id)_fileTransfersToValidate:(struct __CFArray )arg1;
- (void)metricAttachmentsToPurge:(long long)arg1;
- (void)_postTransferInfoOfDeletedTransfers:(id)arg1;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1;
//  (id)_fileTransfersToDelete:(struct __CFArray )arg1;
- (long long)purgeAttachments:(long long)arg1;
- (long long)purgeableAttachmentSize;
- (BOOL)isUsingCentralizeCacheDelete;
- (void)__wrapperAroundCacheDeletePurgeNotificationCallback:(id)arg1;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1;
- (long long)_purgeableSpaceGivenUrgency:(int)arg1;
//  (struct _IMDAttachmentRecordStruct )_copyRecordRef:(id)arg1;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2;
- (id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2;
- (BOOL)shouldDownloadAssetsOfSize:(NSUInteger)arg1 refreshCachedValue:(BOOL)arg2;
- (BOOL)canWriteFileOfEstimatedSize:(NSUInteger)arg1 refreshCachedValue:(BOOL)arg2;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg1 diskVolume:(id)arg2 urgency:(int)arg3 requestedSize:(NSUInteger)arg4;
- (void)resetAttachmentWatermark;
- (void)_cacheDeleteSetUp;
- (void)registerWithCacheDelete;
- (void)updateAttachmentFileSizesWithActivity:(id)arg1;
- (BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)arg1;
- (id)_ckUtilitiesSharedInstance;
- (id)init;

@end

