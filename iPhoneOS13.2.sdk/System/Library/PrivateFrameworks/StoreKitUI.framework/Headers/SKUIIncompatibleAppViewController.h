//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIProductPageChildViewController-Protocol.h>

@class NSOperationQueue, SKUIIncompatibleAppView, SKUIItemArtworkContext, SKUIProductPageHeaderViewController, SKUIProductPageItem, SSVLoadURLOperation, UIImage, UIScrollView;
@protocol SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIncompatibleAppViewController : SKUIViewController <SKUIProductPageChildViewController>
{
    SKUIItemArtworkContext *_artworkContext;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    SKUIProductPageHeaderViewController *_headerViewController;
    UIImage *_iconImage;
    SKUIProductPageItem *_incompatibleItem;
    SSVLoadURLOperation *_loadIconOperation;
    SKUIIncompatibleAppView *_incompatibleView;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIProductPageItem *incompatibleItem; // @synthesize incompatibleItem=_incompatibleItem;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (id)_artworkContext;
- (void)_learnMoreAboutIPad:(id)arg1;
- (void)_learnMoreAboutApp:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)reloadData;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)dealloc;
- (id)initWithIncompatibleItem:(id)arg1;

@end

