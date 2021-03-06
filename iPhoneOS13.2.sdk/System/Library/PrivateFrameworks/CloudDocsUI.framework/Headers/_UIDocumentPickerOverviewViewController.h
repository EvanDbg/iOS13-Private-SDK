//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIContainerHuggingTableViewController.h>

@class NSArray;
@protocol _UIDocumentPickerOverviewDelegate;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerOverviewViewController : _UIContainerHuggingTableViewController
{
    BOOL _manage;
    id <_UIDocumentPickerOverviewDelegate> _delegate;
    NSArray *_allPickers;
    NSArray *_auxiliaryOptions;
    NSArray *_fileTypes;
    NSUInteger _mode;
}

@property(nonatomic) BOOL manage; // @synthesize manage=_manage;
@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSArray *fileTypes; // @synthesize fileTypes=_fileTypes;
@property(retain, nonatomic) NSArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
@property(retain, nonatomic) NSArray *allPickers; // @synthesize allPickers=_allPickers;
@property(nonatomic) __weak id <_UIDocumentPickerOverviewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setPreferredContentSize:(CGSize)arg1;
- (void)updatePreferredContentSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateContents;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFileTypes:(id)arg1 mode:(NSUInteger)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(BOOL)arg4;

@end

