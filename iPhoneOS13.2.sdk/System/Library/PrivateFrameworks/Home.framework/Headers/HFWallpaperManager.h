//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeManagerObserver-Protocol.h>
#import <Home/HFHomeObserver-Protocol.h>

@class HFWallpaperFileManager, HFWallpaperImageCache, HFWallpaperLegacyFileManager, NSMutableDictionary, NSUserDefaults;
@protocol HFNamedWallpaperSource, HMFLocking;

@interface HFWallpaperManager : NSObject <HFHomeManagerObserver, HFHomeObserver>
{
    id <HMFLocking> _lock;
    BOOL _wallpaperSourceRegistered;
    BOOL _hasPreheatedCache;
    id <HFNamedWallpaperSource> _namedWallpaperSource;
    HFWallpaperFileManager *_fileManager;
    HFWallpaperLegacyFileManager *_legacyFileManager;
    HFWallpaperImageCache *_imageCache;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_wallpapers;
    NSMutableDictionary *_wallpaperSlices;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL hasPreheatedCache; // @synthesize hasPreheatedCache=_hasPreheatedCache;
@property(retain, nonatomic) NSMutableDictionary *wallpaperSlices; // @synthesize wallpaperSlices=_wallpaperSlices;
@property(retain, nonatomic) NSMutableDictionary *wallpapers; // @synthesize wallpapers=_wallpapers;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) HFWallpaperImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) HFWallpaperLegacyFileManager *legacyFileManager; // @synthesize legacyFileManager=_legacyFileManager;
@property(retain, nonatomic) HFWallpaperFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) id <HFNamedWallpaperSource> namedWallpaperSource; // @synthesize namedWallpaperSource=_namedWallpaperSource;
@property(readonly, nonatomic) BOOL wallpaperSourceRegistered; // @synthesize wallpaperSourceRegistered=_wallpaperSourceRegistered;
// - (void).cxx_destruct;
- (void)_logUserMetricsAfterSettingWallpaper;
- (void)_dispatchWallpaperChangedForKey:(id)arg1;
- (long long)_namedCollectionTypeForKey:(id)arg1;
- (id)_resolveHomeKitObjectForKey:(id)arg1;
- (void)_pruneUnusedWallpapers;
- (void)_pruneUnusedWallpapersWithExistingHomeKitIdentifiers:(id)arg1;
- (void)_setWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3;
- (id)_wallpaperForKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_originalImageForWallpaper:(id)arg1;
- (void)_migrateIfNeeded;
- (void)_preloadWallpaperSlicesForKey:(id)arg1;
- (void)_preloadWallpapersForHome:(id)arg1;
- (void)preheatCache;
- (id)_cachedWallpaperSliceForIdentifier:(id)arg1;
- (id)_cachedWallpaperForKey:(id)arg1;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)_setWallpaper:(id)arg1 image:(id)arg2 forKey:(id)arg3;
- (void)setWallpaper:(id)arg1 image:(id)arg2 forHomeKitObject:(id)arg3;
- (id)_sliceFromWallpaper:(id)arg1 variant:(long long)arg2 preloading:(BOOL)arg3;
- (id)sliceFromWallpaper:(id)arg1 variant:(long long)arg2;
- (id)wallpaperForHomeKitObject:(id)arg1;
- (id)generateProcessedImageFromWallpaper:(id)arg1 originalImage:(id)arg2;
- (id)imageForNamedWallpaper:(id)arg1;
- (id)defaultNamedWallpaperForCollection:(long long)arg1;
- (id)allNamedWallpapersForCollection:(long long)arg1;
- (void)registerWallpaperSource:(id)arg1 processedSource:(id)arg2;
- (id)init;

@end

