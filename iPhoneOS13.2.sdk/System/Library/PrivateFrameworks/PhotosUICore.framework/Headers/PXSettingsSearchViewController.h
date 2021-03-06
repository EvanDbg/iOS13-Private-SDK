//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXInfoProvider-Protocol.h>
#import <PhotosUICore/PXInfoUpdaterObserver-Protocol.h>

@class NSArray, NSProgress, PTUISettingsController, PXInfoUpdater, PXSettingsIndex, PXSettingsIndexer, UISearchBar;

@interface PXSettingsSearchViewController : UITableViewController <UISearchBarDelegate, PXInfoProvider, PXInfoUpdaterObserver>
{
    PTUISettingsController *_settingsController;
    UISearchBar *_searchBar;
    PXSettingsIndexer *_indexer;
    NSProgress *_indexingProgress;
    PXSettingsIndex *_index;
    PXInfoUpdater *_resultsInfoUpdater;
    NSArray *_searchResults;
}

@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly, nonatomic) PXInfoUpdater *resultsInfoUpdater; // @synthesize resultsInfoUpdater=_resultsInfoUpdater;
@property(retain, nonatomic) PXSettingsIndex *index; // @synthesize index=_index;
@property(retain, nonatomic) NSProgress *indexingProgress; // @synthesize indexingProgress=_indexingProgress;
@property(retain, nonatomic) PXSettingsIndexer *indexer; // @synthesize indexer=_indexer;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) PTUISettingsController *settingsController; // @synthesize settingsController=_settingsController;
// - (void).cxx_destruct;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_handleCancelItem:(id)arg1;
- (void)_indexerDidComplete;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSettingsController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end

