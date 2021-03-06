//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

#import <HomeUI/HUQuickControlColorInteractionCoordinatorDelegate-Protocol.h>

@class NSIndexPath;

@interface HUQuickControlColorViewController : HUQuickControlSingleControlViewController <HUQuickControlColorInteractionCoordinatorDelegate>
{
    NSUInteger _mode;
    NSIndexPath *_selectedColorIndexPath;
    HUQuickControlColorViewController *_colorViewController;
    HUQuickControlColorViewController *_presentingColorViewController;
}

+ (Class)controlItemClass;
@property(nonatomic) __weak HUQuickControlColorViewController *presentingColorViewController; // @synthesize presentingColorViewController=_presentingColorViewController;
@property(retain, nonatomic) HUQuickControlColorViewController *colorViewController; // @synthesize colorViewController=_colorViewController;
@property(retain, nonatomic) NSIndexPath *selectedColorIndexPath; // @synthesize selectedColorIndexPath=_selectedColorIndexPath;
@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
// - (void).cxx_destruct;
- (CGSize)preferredContentSize;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (void)doneButtonTapped;
- (void)cancelButtonTapped;
- (void)didSelectColorAtIndexPath:(id)arg1;
- (void)interactionCoordinator:(id)arg1 didSelectColorAtIndexPath:(id)arg2;
- (void)presentFullColorViewForInteractionCoordinator:(id)arg1 selectedColorIndexPath:(id)arg2;
- (void)interactionCoordinator:(id)arg1 colorPaletteDidChange:(id)arg2;
- (id)overrideStatusText;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;
- (NSUInteger)_paletteType;

@end

