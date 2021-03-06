//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBIconIndexNodeObserver-Protocol.h>
#import <SpringBoard/SBWallpaperObserver-Protocol.h>

@class SBFMappedImageCache, SBIconController, SBIconModel, SBWallpaperController;

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver, SBWallpaperObserver>
{
    SBWallpaperController *_wallpaperController;
    SBFMappedImageCache *_imageCache;
    long long _invalidatedLocations;
    SBIconController *_iconController;
    SBIconModel *_model;
}

+ (id)cacheKeyForVariant:(long long)arg1 options:(NSUInteger)arg2;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (long long)_orientationForOptions:(NSUInteger)arg1;
- (id)_snapshotProviderForVariant:(long long)arg1 options:(NSUInteger)arg2 wallpaperImage:(id)arg3;
- (id)_lockScreenSnapshotProviderWithOptions:(NSUInteger)arg1 wallpaperImage:(id)arg2;
- (id)_homeScreenSnapshotProviderWithOptions:(NSUInteger)arg1 wallpaperImage:(id)arg2;
- (void)_backlightFadeFinished;
- (void)_modelDidLayout;
- (void)_modelWillLayout;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)_iconControllerDidChangeIconModel:(id)arg1;
- (void)_switchToIconModel:(id)arg1;
- (void)regenerateSnapshotsForLocations:(long long)arg1;
- (id)snapshotForVariant:(long long)arg1 options:(NSUInteger)arg2 wallpaperImage:(id)arg3;
- (id)homeScreenSnapshot;
- (id)lockScreenSnapshot;
- (void)invalidateSnapshotsForLocations:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithImageCache:(id)arg1 iconController:(id)arg2 wallpaperController:(id)arg3;

@end

