//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXGridPresentationNavigationItemDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesMapBarButtonsDelegate-Protocol.h>

@class PXPlacesMapFetchResultViewController, UISegmentedControl;

@interface PXPlacesMapContainerViewController : UIViewController <PXPlacesMapBarButtonsDelegate, PXGridPresentationNavigationItemDelegate>
{
    BOOL _gridControllerEditing;
    PXPlacesMapFetchResultViewController *_fetchResultViewController;
    UIViewController *_currentViewController;
    UISegmentedControl *_subviewControl;
}

@property(nonatomic) BOOL gridControllerEditing; // @synthesize gridControllerEditing=_gridControllerEditing;
@property(retain, nonatomic) UISegmentedControl *subviewControl; // @synthesize subviewControl=_subviewControl;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(readonly, nonatomic) PXPlacesMapFetchResultViewController *fetchResultViewController; // @synthesize fetchResultViewController=_fetchResultViewController;
// - (void).cxx_destruct;
- (void)setBarButtonItems:(id)arg1;
- (void)_resetNavigationItem;
- (void)viewController:(id)arg1 updatedNavigationItem:(id)arg2 animated:(BOOL)arg3;
- (void)subviewControlChanged:(id)arg1;
- (void)_switchChildViewControllerFrom:(id)arg1 to:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end

