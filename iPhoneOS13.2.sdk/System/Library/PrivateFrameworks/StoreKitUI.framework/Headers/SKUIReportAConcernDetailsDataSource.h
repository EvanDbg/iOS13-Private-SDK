//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernDetailsDataSource : NSObject <UITableViewDataSource>
{
    UITableView *_tableView;
    NSString *_placeholder;
    NSString *_selectedReason;
    NSString *_privacyNote;
}

@property(copy, nonatomic) NSString *privacyNote; // @synthesize privacyNote=_privacyNote;
@property(copy, nonatomic) NSString *selectedReason; // @synthesize selectedReason=_selectedReason;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithTableView:(id)arg1;
- (id)init;

@end

