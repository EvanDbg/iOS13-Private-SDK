//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreDataCloudKitMirroringHandler-Protocol.h>

@protocol AVTCoreDataCloudKitMirroringHandlerDelegate;

@interface AVTDisabledMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>
{
}

- (void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <AVTCoreDataCloudKitMirroringHandlerDelegate> delegate;
- (void)exportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleExportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleImportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startObservingResetSyncWithNotificationCenter:(id)arg1;

@end

