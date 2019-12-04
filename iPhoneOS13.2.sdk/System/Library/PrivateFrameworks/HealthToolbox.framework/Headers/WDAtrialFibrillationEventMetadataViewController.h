//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKHeartbeatSequenceListMetadataSectionDelegate-Protocol.h>

@class HKCategorySample, NSMutableArray;
@protocol HKDataMetadataViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController <HKHeartbeatSequenceListMetadataSectionDelegate>
{
    HKCategorySample *_event;
    NSMutableArray *_sections;
    id <HKDataMetadataViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HKDataMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) HKCategorySample *event; // @synthesize event=_event;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)heartbeatSequecesListQueryComplete:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_atrialFibrillationEducationContainerView;
- (void)_reloadAtrialFibrillationEducationTableHeaderView;
- (id)_shortVersionNumberFromString:(id)arg1;
- (void)_loadSections;
- (_Bool)_addSectionIfNonNull:(id)arg1;
- (void)viewDidLoad;
- (id)initWithEvent:(id)arg1 delegate:(id)arg2;

@end
