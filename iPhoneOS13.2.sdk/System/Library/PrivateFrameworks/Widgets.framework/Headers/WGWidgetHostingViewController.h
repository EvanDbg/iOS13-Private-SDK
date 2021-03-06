//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSAuditToken, NSDate, NSMapTable, NSMutableDictionary, NSObject, NSString, NSTimer, UIView, WGWidgetInfo, WGWidgetLifeCycleSequence, _WGBrokenWidgetView, _WGCAPackageView, _WGLockedOutWidgetView, _WGWidgetRemoteViewController;
@protocol NSCopying, OS_dispatch_queue, OS_dispatch_semaphore, WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost;

@interface WGWidgetHostingViewController : UIViewController
{
    BOOL _implementsPerformUpdate;
    BOOL _lockedOut;
    BOOL _disconnectsImmediately;
    BOOL _encodingLayerTree;
    BOOL _didRequestViewInset;
    BOOL _didUpdate;
    BOOL _blacklisted;
    BOOL _ignoringParentAppearState;
    WGWidgetInfo *_widgetInfo;
    id <WGWidgetHostingViewControllerDelegate> _delegate;
    id <WGWidgetHostingViewControllerHost> _host;
    long long _activeDisplayMode;
    double _cornerRadius;
    NSUInteger _maskedCorners;
    NSString *_appBundleID;
    WGWidgetLifeCycleSequence *_activeLifeCycleSequence;
    long long _connectionState;
    NSObject<OS_dispatch_queue> *_proxyConnectionQueue;
    NSObject<OS_dispatch_queue> *_proxyRequestQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
    _WGWidgetRemoteViewController *_remoteViewController;
    id <NSCopying> _extensionRequest;
    UIView *_contentProvidingView;
    _WGCAPackageView *_snapshotView;
    NSTimer *_disconnectionTimer;
    NSObject<OS_dispatch_semaphore> *_viewWillAppearSemaphore;
    NSObject<OS_dispatch_semaphore> *_viewWillDisappearSemaphore;
    id /* CDUnknownBlockType */ _remoteViewControllerConnectionHandler;
    id /* CDUnknownBlockType */ _remoteViewControllerDisconnectionHandler;
    NSDate *_lastUnanticipatedDisconnectionDate;
    NSMapTable *_openAppearanceTransactions;
    _WGBrokenWidgetView *_brokenView;
    _WGLockedOutWidgetView *_lockedOutView;
    NSMutableDictionary *_sequenceIDsToOutstandingWidgetUpdateCompletionHandlers;
    CGRect _snapshotViewBounds;
}

+ (void)setWidgetSnapshotTimestampsEnabled:(BOOL)arg1;
+ (BOOL)_canWidgetHostDisconnectRemoteViewControllerForSequence:(id)arg1 disconnectionTimer:(id)arg2 coalesce:(BOOL)arg3;
+ (BOOL)_canWidgetHostEndSequenceByDisconnectingRemoteViewControllerForSequence:(id)arg1;
+ (BOOL)_canWidgetHostInsertRemoteViewForSequence:(id)arg1;
+ (BOOL)_canWidgetHostCaptureSnapshotForSequence:(id)arg1;
+ (BOOL)_canWidgetHostRequestRemoteViewControllerForSequence:(id)arg1;
+ (BOOL)_canWidgetHostConnectRemoteViewControllerByCancellingDisappearanceForSequence:(id)arg1;
+ (BOOL)_canWidgetHostConnectRemoteViewControllerByRequestingForSequence:(id)arg1 disconnectionTimer:(id)arg2 connectionState:(long long)arg3;
@property(nonatomic, getter=_isIgnoringParentAppearState, setter=_setIgnoringParentAppearState:) BOOL ignoringParentAppearState; // @synthesize ignoringParentAppearState=_ignoringParentAppearState;
@property(retain, nonatomic, getter=_sequenceIDsToOutstandingWidgetUpdateCompletionHandlers, setter=_setSequenceIDsToOutstandingWidgetUpdateCompletionHandlers:) NSMutableDictionary *sequenceIDsToOutstandingWidgetUpdateCompletionHandlers; // @synthesize sequenceIDsToOutstandingWidgetUpdateCompletionHandlers=_sequenceIDsToOutstandingWidgetUpdateCompletionHandlers;
@property(retain, nonatomic, getter=_lockedOutView, setter=_setLockedOutView:) _WGLockedOutWidgetView *lockedOutView; // @synthesize lockedOutView=_lockedOutView;
@property(retain, nonatomic, getter=_brokenView, setter=_setBrokenView:) _WGBrokenWidgetView *brokenView; // @synthesize brokenView=_brokenView;
@property(nonatomic, getter=_isBlacklisted, setter=_setBlacklisted:) BOOL blacklisted; // @synthesize blacklisted=_blacklisted;
@property(nonatomic, getter=_didUpdate, setter=_setDidUpdate:) BOOL didUpdate; // @synthesize didUpdate=_didUpdate;
@property(readonly, nonatomic, getter=_openAppearanceTransactions) NSMapTable *openAppearanceTransactions; // @synthesize openAppearanceTransactions=_openAppearanceTransactions;
@property(retain, nonatomic, getter=_lastUnanticipatedDisconnectionDate, setter=_setLastUnanticipatedDisconnectionDate:) NSDate *lastUnanticipatedDisconnectionDate; // @synthesize lastUnanticipatedDisconnectionDate=_lastUnanticipatedDisconnectionDate;
@property(copy, nonatomic, getter=_remoteViewControllerDisconnectionHandler, setter=_setRemoteViewControllerDisconnectionHandler:) id /* CDUnknownBlockType */ remoteViewControllerDisconnectionHandler; // @synthesize remoteViewControllerDisconnectionHandler=_remoteViewControllerDisconnectionHandler;
@property(copy, nonatomic, getter=_remoteViewControllerConnectionHandler, setter=_setRemoteViewControllerConnectionHandler:) id /* CDUnknownBlockType */ remoteViewControllerConnectionHandler; // @synthesize remoteViewControllerConnectionHandler=_remoteViewControllerConnectionHandler;
@property(retain, nonatomic, getter=_viewWillDisappearSemaphore, setter=_setViewWillDisappearSemaphore:) NSObject<OS_dispatch_semaphore> *viewWillDisappearSemaphore; // @synthesize viewWillDisappearSemaphore=_viewWillDisappearSemaphore;
@property(retain, nonatomic, getter=_viewWillAppearSemaphore, setter=_setViewWillAppearSemaphore:) NSObject<OS_dispatch_semaphore> *viewWillAppearSemaphore; // @synthesize viewWillAppearSemaphore=_viewWillAppearSemaphore;
@property(nonatomic, getter=_disconnectionTimer, setter=_setDisconnectionTimer:) __weak NSTimer *disconnectionTimer; // @synthesize disconnectionTimer=_disconnectionTimer;
@property(nonatomic, getter=_didRequestViewInset, setter=_setDidRequestViewInset:) BOOL didRequestViewInset; // @synthesize didRequestViewInset=_didRequestViewInset;
@property(nonatomic, getter=_isEncodingLayerTree, setter=_setEncodingLayerTree:) BOOL encodingLayerTree; // @synthesize encodingLayerTree=_encodingLayerTree;
@property(nonatomic, getter=_snapshotViewBounds, setter=_setSnapshotBounds:) CGRect snapshotViewBounds; // @synthesize snapshotViewBounds=_snapshotViewBounds;
@property(retain, nonatomic, getter=_snapshotView, setter=_setSnapshotView:) _WGCAPackageView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic, getter=_contentProvidingView, setter=_setContentProvidingView:) UIView *contentProvidingView; // @synthesize contentProvidingView=_contentProvidingView;
@property(copy, nonatomic, getter=_extensionRequest, setter=_setExtensionRequest:) id <NSCopying> extensionRequest; // @synthesize extensionRequest=_extensionRequest;
@property(retain, nonatomic, getter=_remoteViewController, setter=_setRemoteViewController:) _WGWidgetRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(readonly, nonatomic, getter=_diskWriteQueue) NSObject<OS_dispatch_queue> *diskWriteQueue; // @synthesize diskWriteQueue=_diskWriteQueue;
@property(readonly, nonatomic, getter=_proxyRequestQueue) NSObject<OS_dispatch_queue> *proxyRequestQueue; // @synthesize proxyRequestQueue=_proxyRequestQueue;
@property(readonly, nonatomic, getter=_proxyConnectionQueue) NSObject<OS_dispatch_queue> *proxyConnectionQueue; // @synthesize proxyConnectionQueue=_proxyConnectionQueue;
@property(nonatomic, getter=_connectionState, setter=_setConnectionState:) long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic, getter=_activeLifeCycleSequence) WGWidgetLifeCycleSequence *activeLifeCycleSequence; // @synthesize activeLifeCycleSequence=_activeLifeCycleSequence;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(nonatomic) BOOL disconnectsImmediately; // @synthesize disconnectsImmediately=_disconnectsImmediately;
@property(nonatomic) NSUInteger maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic, getter=isLockedOut) BOOL lockedOut; // @synthesize lockedOut=_lockedOut;
@property(nonatomic, setter=_setImplementsPerformUpdate:) BOOL implementsPerformUpdate; // @synthesize implementsPerformUpdate=_implementsPerformUpdate;
@property(readonly, nonatomic) long long activeDisplayMode; // @synthesize activeDisplayMode=_activeDisplayMode;
@property(nonatomic) __weak id <WGWidgetHostingViewControllerHost> host; // @synthesize host=_host;
@property(nonatomic) __weak id <WGWidgetHostingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WGWidgetInfo *widgetInfo; // @synthesize widgetInfo=_widgetInfo;
// - (void).cxx_destruct;
- (id)description;
- (void)_insertLockedOutViewWithExplanation:(id)arg1;
- (void)_invalidateVisibleFrame;
@property(readonly, copy, nonatomic, getter=_containerIdentifier) NSString *containerIdentifier;
- (void)_rowHeightDidChange:(id)arg1;
- (id)_cancelTouches;
- (void)widget:(id)arg1 didTerminateWithError:(id)arg2;
- (CDUnknownBlockType)_updateRequestForSequence:(id)arg1;
- (void)_registerUpdateRequestCompletionHandler:(CDUnknownBlockType)arg1 forSequence:(id)arg2;
- (BOOL)_hasOutstandingUpdateRequestForSequence:(id)arg1;
- (void)_noteOutstandingUpdateRequestForSequence:(id)arg1;
- (void)_setLargestAvailableDisplayMode:(long long)arg1;
- (void)_updatePreferredContentSizeWithHeight:(double)arg1;
- (void)_layoutMarginsDidChange;
- (UIEdgeInsets)_layoutMargins;
- (UIEdgeInsets)_marginInsets;
- (CGSize)_maxSizeForDisplayMode:(long long)arg1;
- (void)handleReconnectionRequest:(id)arg1;
- (void)_insertBrokenView;
- (void)_attemptReconnectionAfterUnanticipatedDisconnection;
- (void)_invalidateDisconnectionTimer;
- (void)_disconnectionTimerDidFire:(id)arg1;
- (void)_scheduleDisconnectionTimerForSequence:(id)arg1 endTransitionBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_finishDisconnectingRemoteViewControllerForSequence:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_disconnectRemoteViewControllerForSequence:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enqueueDisconnectionRequestForSequence:(id)arg1 endTransitionBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_disconnectRemoteViewControllerForReason:(id)arg1 sequence:(id)arg2 coalesce:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_endSequence:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_managingContainerIsVisible;
- (void)_insertSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_synchronizeGeometryWithSnapshot;
- (void)_requestInsertionOfRemoteViewAfterViewWillAppearForSequence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_insertSnapshotViewIfAppropriate;
- (void)_insertAppropriateContentView;
- (BOOL)_canInsertRemoteView:(id )arg1;
- (void)_insertContentProvidingSubview:(id)arg1 sequence:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestVisibilityStateUpdateForPossiblyAppearing:(BOOL)arg1 sequence:(id)arg2;
- (void)_validateSnapshotViewForActiveLayoutMode;
- (void)_loadSnapshotViewFromDiskIfNecessary:(CDUnknownBlockType)arg1;
- (void)_packageViewFromURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_packageViewWithBlock:(CDUnknownBlockType)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_captureLayerTree:(CDUnknownBlockType)arg1;
- (void)_invalidateSnapshotWithForce:(BOOL)arg1 removingSnapshotFilesForActiveDisplayMode:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeAllSnapshotFilesInActiveDisplayModeForAllButActiveUserInterfaceStyle;
- (void)_removeAllSnapshotFilesInActiveDisplayModeForContentSizeCategory:(id)arg1;
- (void)_removeAllSnapshotFilesForActiveDisplayMode;
- (void)_removeAllSnapshotFilesDueToIssue:(BOOL)arg1;
- (void)_removeAllSnapshotFilesMatchingPredicate:(id)arg1 dueToIssue:(BOOL)arg2;
- (void)_removeItemAsynchronouslyAtURL:(id)arg1;
- (void)_removeItemAtURL:(id)arg1;
- (id)_widgetSnapshotURLForLayoutMode:(long long)arg1 ensuringDirectoryExists:(BOOL)arg2;
- (id)_widgetSnapshotURLForSnapshotIdentifier:(id)arg1;
- (id)_widgetSnapshotURLForSnapshotIdentifier:(id)arg1 ensuringDirectoryExists:(BOOL)arg2;
- (id)_snapshotIdentifierForLayoutMode:(long long)arg1;
- (void)_captureSnapshotAndBeginDisappearanceTransitionForSequence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_shouldRemoveSnapshotWhenNotVisible;
- (void)_updateWidgetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performUpdateForSequence:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_requestRemoteViewControllerForSequence:(id)arg1 completionHander:(CDUnknownBlockType)arg2;
- (void)_connectRemoteViewControllerForReason:(id)arg1 sequence:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_beginSequenceWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (void)_enqueueRemoteServiceRequest:(CDUnknownBlockType)arg1 withDescription:(id)arg2;
- (void)_enqueueRequest:(CDUnknownBlockType)arg1 inQueue:(id)arg2 trampolinedToMainQueue:(BOOL)arg3 withDescription:(id)arg4;
- (void)_setupRequestQueue;
- (void)_abortActiveSequence;
- (void)_initiateNewSequenceIfNecessary;
- (BOOL)_isActiveSequence:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setPreferredContentSize:(CGSize)arg1;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)managingContainerDidDisappear:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)managingContainerWillAppear:(id)arg1;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(BOOL)arg1 semaphore:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setLockedOut:(BOOL)arg1 withExplanation:(id)arg2;
@property(readonly, nonatomic) long long largestAvailableDisplayMode;
- (void)maximumSizeDidChangeForDisplayMode:(long long)arg1;
@property(readonly, nonatomic) __weak BSAuditToken *auditToken;
- (void)invalidateCachedSnapshotWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateCachedSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isBrokenViewVisible) BOOL brokenViewVisible;
@property(readonly, nonatomic, getter=isSnapshotLoaded) BOOL snapshotLoaded;
@property(readonly, nonatomic, getter=isRemoteViewVisible) BOOL remoteViewVisible;
- (BOOL)isLinkedOnOrAfterSystemVersion:(id)arg1;
@property(nonatomic) long long userSpecifiedDisplayMode;
- (void)requestSettingsIconWithHandler:(CDUnknownBlockType)arg1;
- (void)requestIconWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *widgetIdentifier;
- (void)dealloc;
- (id)initWithWidgetInfo:(id)arg1 delegate:(id)arg2 host:(id)arg3;
- (void)_purgeLegacySnapshotsIfNecessary;

@end

