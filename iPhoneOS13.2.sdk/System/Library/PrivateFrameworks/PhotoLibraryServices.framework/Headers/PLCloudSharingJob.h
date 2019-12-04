//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob
{
    NSString *_archiveFilename;
    _Bool _shouldPrioritize;
}

+ (id)recoveredEventsWithPathManager:(id)arg1;
@property(nonatomic) _Bool shouldPrioritize; // @synthesize shouldPrioritize=_shouldPrioritize;
- (void)runAndWaitForMessageToBeSent;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)deleteAllRecoveryEvents;
- (_Bool)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:(id)arg1;
@property(readonly, nonatomic) PLPhotoLibrary *transientPhotoLibrary;
- (id)serialOperationQueue;
- (id)initWithAssetsdClient:(id)arg1;

@end
