//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/PLAssetsdDiagnosticsServiceProtocol-Protocol.h>

@class NSString;

@interface PLAssetsdDiagnosticsService : PLAbstractLibraryServicesManagerService <PLAssetsdDiagnosticsServiceProtocol>
{
}

- (void)initializeSharedMemoryForDeferredLogs:(id)arg1;
- (void)setPhotosXPCEndpoint:(id)arg1 withReply:(id /* block */)arg2;
- (void)getPhotosXPCEndpointWithReply:(id /* block */)arg1;
- (void)incompleteRestoreProcessesWithReply:(id /* block */)arg1;
- (void)dumpPhotoAnalysisStatusWithReply:(id /* block */)arg1;
- (void)dumpStatusIncludingDaemon:(_Bool)arg1 reply:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
