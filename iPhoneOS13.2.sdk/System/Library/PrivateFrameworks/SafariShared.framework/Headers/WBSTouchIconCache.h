//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSSiteMetadataImageCacheDelegate-Protocol.h>
#import <SafariShared/WBSSiteMetadataProvider-Protocol.h>
#import <SafariShared/WBSWebViewMetadataFetchOperationDelegate-Protocol.h>

@class NSCache, NSMutableArray, NSMutableDictionary, NSMutableSet, NSURL, WBSSiteMetadataImageCache, WBSTouchIconCacheSettingsSQLiteStore;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSTouchIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
//    struct atomic<bool> _didLoadSettings;
    WBSSiteMetadataImageCache *_imageCache;
    NSMutableDictionary *_hostsToRequestSets;
    NSMutableDictionary *_touchIconsDataForHosts;
    NSCache *_requestsToResponses;
    NSMutableDictionary *_requestsToDelayedResponses;
    NSObject<OS_dispatch_queue> *_hostsWithCacheSettingEntriesQueue;
    NSMutableSet *_hostsWithCacheSettingEntries;
    NSMutableArray *_pendingSaveTouchIconToDiskBlocks;
    NSMutableSet *_pendingTouchIconRequestHosts;
    WBSTouchIconCacheSettingsSQLiteStore *_cacheSettingsStore;
    long long _protectionType;
    BOOL _allowFetchingOverCellularNetwork;
    long long _fileMappingStyle;
    BOOL _readOnly;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
    NSURL *_cacheDirectoryURL;
}

+ (id)_monogramConfiguration;
+ (id)_generateDefaultFavoritesIcon;
+ (id)generateFavoritesIconForTitle:(id)arg1 url:(id)arg2 backgroundColor:(id)arg3;
+ (id)_generateFavoritesIconForRequest:(id)arg1 withBackgroundColor:(id)arg2;
+ (id)defaultGlyphColor;
+ (id)defaultBackgroundColor;
@property(readonly, nonatomic, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) NSURL *cacheDirectoryURL; // @synthesize cacheDirectoryURL=_cacheDirectoryURL;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
// - (void).cxx_destruct;
- (void)_willSaveTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (void)_didLoadTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (id)_operationWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_didGenerateResponse:(id)arg1 forRequest:(id)arg2;
- (void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2;
- (void)webViewMetadataFetchOperation:(id)arg1 getWebViewOfSize:(CGSize)arg2 withConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)siteMetadataImageCache:(id)arg1 customFileNameForKeyString:(id)arg2;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1;
- (id)_imageCacheSettingsDatabaseURL;
@property(readonly, nonatomic) NSURL *imageDirectoryURL;
- (void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2;
- (id)_responseForRequest:(id)arg1 withTouchIcon:(id)arg2;
- (BOOL)_shouldGenerateTouchIconFromTouchIcon:(id)arg1 forRequest:(id)arg2;
- (void)_removeTouchIconsDataForHost:(id)arg1;
- (void)removeTouchIconMetadataForHosts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 requestDidSucceed:(BOOL)arg3 isUserLoadedWebpageRequest:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 UUIDString:(id)arg6;
- (void)_saveTouchIconToDiskWithResult:(id)arg1 forRequest:(id)arg2 knownImageState:(long long)arg3;
- (void)_enumerateRequestsForHost:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_resizedImage:(id)arg1 forHost:(id)arg2;
- (double)_maximumScreenScale;
- (void)savePendingChangesBeforeTermination;
- (void)purgeUnneededCacheEntries;
- (void)emptyCaches;
- (CDUnknownBlockType)_blockOperationForRequest:(id)arg1 knownImageState:(long long)arg2;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)arg1 withImage:(id)arg2 imageState:(long long)arg3 didReceiveNewData:(BOOL)arg4;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)arg1;
- (id)_responseForTouchIconRequestWithNoHost:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL )arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (BOOL)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3 knownImageState:(long long)arg4;
- (BOOL)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3;
- (BOOL)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3 shouldCheckImageState:(BOOL )arg4;
- (BOOL)_canFetchTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2;
- (BOOL)_shouldRequestTouchIconWithTimeoutForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3;
- (BOOL)shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2;
- (BOOL)shouldRequestTouchIconForWebPageNavigationFromBookmarkInteractionForURL:(id)arg1;
- (BOOL)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (void)releaseTouchIconsForHosts:(id)arg1;
- (void)releaseTouchIconForHost:(id)arg1;
- (void)releaseTouchIconForURLString:(id)arg1;
- (void)retainTouchIconsForHosts:(id)arg1;
- (void)retainTouchIconForHost:(id)arg1;
- (void)retainTouchIconForURLString:(id)arg1;
- (void)cacheFirstAvailableTouchIcon:(id)arg1 forURL:(id)arg2;
- (void)_saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 requestDidSucceed:(BOOL)arg3 isUserLoadedWebpageRequest:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5;
- (id)_touchIconForURL:(id)arg1 getImageState:(long long )arg2;
- (void)_ensureCacheDirectory;
- (void)_setUpImageCacheSettingsSQLiteStore;
- (id)uuidStringToHost;
- (void)_openCacheSettingsDatabaseIfNeeded;
- (void)dealloc;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(BOOL)arg2 protectionType:(long long)arg3 allowFetchingOverCellularNetwork:(BOOL)arg4 fileMappingStyle:(long long)arg5;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(BOOL)arg2;
- (id)initWithCacheDirectoryURL:(id)arg1;
- (id)init;

@end

