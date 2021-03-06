//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>


@class HKClinicalAccount, HRProfile, NSArray, UIButton, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface WDClinicalAccountEducationViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _promptForDataCollection;
    id /* CDUnknownBlockType */ _completionBlock;
    HRProfile *_profile;
    HKClinicalAccount *_account;
    NSArray *_sections;
    UIButton *_nextButton;
    UITableView *_tableView;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) BOOL promptForDataCollection; // @synthesize promptForDataCollection=_promptForDataCollection;
@property(readonly, copy, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
// - (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_navigationAction:(id)arg1;
- (void)_computeSections;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (NSUInteger)supportedInterfaceOrientations;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)loadView;
- (void)updateNextButton;
- (void)fetchShouldPromptForDataCollection;
- (id)initWithProfile:(id)arg1 account:(id)arg2;

@end

