//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDiagnosticsService.h>


@class NSMutableArray, PXCuratedLibraryAssetsDataSourceManager, PXGView, UIViewController;

@interface PXGViewSnapshotDiagnosticsService : PXDiagnosticsService <UIDocumentInteractionControllerDelegate>
{
    PXGView *_gridView;
    UIViewController *_viewController;
    PXCuratedLibraryAssetsDataSourceManager *_dataSourceManager;
    NSMutableArray *_images;
    NSMutableArray *_imageURLs;
    CGRect _lastScrollViewBounds;
}

+ (id)_mergeImagesFromArray:(id)arg1;
+ (id)_createPDFWithImagesAtURLs:(id)arg1;
+ (id)_imageAtURL:(id)arg1;
+ (id)_writeImageToDisk:(id)arg1 suffix:(id)arg2;
+ (id)_snapshotImageFromView:(id)arg1;
+ (id)_cropRect:(CGRect)arg1 fromImage:(id)arg2;
@property(nonatomic) CGRect lastScrollViewBounds; // @synthesize lastScrollViewBounds=_lastScrollViewBounds;
@property(retain, nonatomic) NSMutableArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
// - (void).cxx_destruct;
- (void)_mergeAllImagesAndWriteToDisk;
- (void)_stopCapture;
- (void)_captureNextPage;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)performAction;
- (BOOL)canPerformAction;
- (id)title;
- (id)initWithItemProviders:(id)arg1;

@end

