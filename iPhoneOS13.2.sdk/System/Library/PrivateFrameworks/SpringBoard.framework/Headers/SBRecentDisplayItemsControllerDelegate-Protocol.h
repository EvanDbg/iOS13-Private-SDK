//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SBDisplayItem, SBRecentDisplayItemsController;

@protocol SBRecentDisplayItemsControllerDelegate 

@optional
- (_Bool)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 shouldAddItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didMoveItemToFront:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didAddItem:(SBDisplayItem *)arg2 andDropItem:(SBDisplayItem *)arg3;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didAddItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didRemoveItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsControllerDidUpdateDisplayItems:(SBRecentDisplayItemsController *)arg1;
@end
