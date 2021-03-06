//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUSelectableServiceGridViewController.h>

#import <HomeUI/HUServiceGridItemManagerDelegate-Protocol.h>

@class HFTriggerBuilder, HUTriggerActionFlow, UINavigationItem;

@interface HUTriggerActionEditorContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>
{
    HFTriggerBuilder *_triggerBuilder;
    HUTriggerActionFlow *_flow;
    UINavigationItem *_effectiveNavigationItem;
    NSUInteger _forceDisableReasonsForSecureCharacteristicControl;
}

@property(nonatomic) NSUInteger forceDisableReasonsForSecureCharacteristicControl; // @synthesize forceDisableReasonsForSecureCharacteristicControl=_forceDisableReasonsForSecureCharacteristicControl;
@property(readonly, nonatomic) UINavigationItem *effectiveNavigationItem; // @synthesize effectiveNavigationItem=_effectiveNavigationItem;
@property(retain, nonatomic) HUTriggerActionFlow *flow; // @synthesize flow=_flow;
@property(retain, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
// - (void).cxx_destruct;
- (NSUInteger)_triggerForceDisableReasonsForActionItem:(id)arg1;
- (void)_validateDoneButton;
- (void)_updateOrRemoveDeletedMediaItems:(id)arg1 fromTriggerBuilder:(id)arg2;
- (void)_removeDeletedServiceItems:(id)arg1 fromTriggerBuilder:(id)arg2;
- (id)_updateTriggerBuilderAnonymousActions;
- (void)_addActionSetItems:(id)arg1 toTriggerBuilder:(id)arg2 inHome:(id)arg3;
- (void)_removeDeletedActionSetsItems:(id)arg1 fromTriggerBuilder:(id)arg2;
- (id)_updateTriggerBuilderActionSets;
- (void)_updateSelectedServicesAndActionSets;
- (BOOL)_canSelectMediaAccessoryItem:(id)arg1;
- (id)_triggerBuilderFuture;
- (void)_popAlertWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 actions:(id)arg3;
- (void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)triggerBuilderFutureWithLatestUIChanges;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)didChangeSelection;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)_goToSummaryScreen:(id)arg1;
- (void)goToSummaryScreen;
- (void)_next:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_setUpNavButtons;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithServiceGridItemManager:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 effectiveNavigationItem:(id)arg3 delegate:(id)arg4;

@end

