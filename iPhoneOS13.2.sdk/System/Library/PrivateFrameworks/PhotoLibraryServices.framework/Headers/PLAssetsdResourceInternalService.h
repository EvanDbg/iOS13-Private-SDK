//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/PLAssetsdResourceInternalServiceProtocol-Protocol.h>

@class NSString;

@interface PLAssetsdResourceInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceInternalServiceProtocol>
{
    NSString *_trustedCallerBundleID;
}

// - (void).cxx_destruct;
- (void)purgeExpiredOutboundSharingAssetsWithReply:(CDUnknownBlockType)arg1;
- (void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prepareRevertToOriginalWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)batchSaveAssetJobs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 trustedCallerBundleID:(id)arg2;

@end

