//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKNavigationItemController-Protocol.h>
#import <PassKitUI/PKPaymentSetupFieldCellDelegate-Protocol.h>

@class NSArray, NSMapTable, PKPaymentSetupFieldsModel, PKPaymentWebService, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFieldsViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentSetupFieldCellDelegate, PKNavigationItemController>
{
    PKTableHeaderView *_headerView;
    BOOL _hasScrolledToShowFields;
    BOOL _cellsAreEnabled;
    PKPaymentSetupFieldsModel *_fieldsModel;
    NSMapTable *_fieldIdentifierToCellMap;
    id _currentNextActionBlock;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    BOOL _navigationEnabled;
    BOOL _rightBarButtonItemsEnabled;
    BOOL _hidesBackButton;
    BOOL _showingActivitySpinner;
    BOOL _performingNextActionLoop;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentWebService *_webService;
}

@property(readonly, nonatomic, getter=isPerformingNextActionLoop) BOOL performingNextActionLoop; // @synthesize performingNextActionLoop=_performingNextActionLoop;
@property(readonly, nonatomic, getter=isShowingActivitySpinner) BOOL showingActivitySpinner; // @synthesize showingActivitySpinner=_showingActivitySpinner;
@property(retain, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // @synthesize fieldsModel=_fieldsModel;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
// - (void).cxx_destruct;
- (void)logAggDCheckpointForKey:(id)arg1;
- (void)logAggDContextSpecificCheckpointForKey:(id)arg1;
- (id)_contextSpecificStringForAggDKey:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (BOOL)isEmpty;
- (id)firstEmptyField;
- (id)allCells;
- (id)firstResponderCell;
- (id)firstEmptySetupField;
- (id)firstEmptyCell;
- (id)nextResponderCellForCurrentIdentifier:(id)arg1;
- (id)cellForIdentifier:(id)arg1;
- (id)fieldForIdentifier:(id)arg1;
- (void)_setCellsEnabled:(BOOL)arg1;
- (void)noteFieldIdentifiersChanged;
- (id)readonlyFieldIdentifiers;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (void)_updateRightBarButtonState;
- (void)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_destroyNavigationBarButtonItemsAnimated:(BOOL)arg1;
- (void)_setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)_setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightBarButtonItemsEnabled:(BOOL)arg1;
- (void)_setNavigationBarEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setIdleTimerDisabled:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (void)_setTableViewHeaderActivityIndicatorActive:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 animated:(BOOL)arg4;
- (void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
- (void)hideActivitySpinner;
- (void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)handleNextActionError:(id)arg1 shouldContinue:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)handleNextActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_continueNextActionLoop:(BOOL)arg1;
- (void)_triggerNextActionLoop:(BOOL)arg1;
- (void)triggerNextActionLoop;
- (void)handleNextButtonTapped:(id)arg1;
- (void)_handleNextButtonTapped:(id)arg1;
- (void)fieldCellDidTapButton:(id)arg1;
- (BOOL)fieldCellEditableTextFieldShouldClear:(id)arg1;
- (BOOL)fieldCellEditableTextFieldShouldReturn:(id)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(id)arg1;
- (BOOL)fieldCellEditableTextFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic, getter=isComplete) BOOL complete;
- (id)footerView;
- (id)headerView;
- (BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;

@end

