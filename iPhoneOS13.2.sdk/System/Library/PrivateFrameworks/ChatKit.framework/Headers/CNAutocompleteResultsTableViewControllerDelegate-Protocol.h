//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNAutocompleteResultsTableViewController, CNComposeRecipient, NSArray;

@protocol CNAutocompleteResultsTableViewControllerDelegate <NSObject>

@optional
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didAskToRemoveRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 tintColorForRecipient:(CNComposeRecipient *)arg2 completion:(void (^)(UIColor *))arg3;
- (CNComposeRecipient *)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 preferredRecipientForRecipients:(NSArray *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didRequestInfoAboutRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didSelectRecipient:(CNComposeRecipient *)arg2 atIndex:(NSUInteger)arg3;
@end

