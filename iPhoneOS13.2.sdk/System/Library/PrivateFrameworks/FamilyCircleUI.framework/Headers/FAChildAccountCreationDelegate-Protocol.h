//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FAChildAccountCreationController, NSError, UINavigationItem;

@protocol FAChildAccountCreationDelegate <NSObject>
- (UINavigationItem *)navigationItemToShowInitialLoadingForChildAccountCreationController:(FAChildAccountCreationController *)arg1;
- (void)childAccountCreationController:(FAChildAccountCreationController *)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(NSError *)arg3;
- (void)childAccountCreationController:(FAChildAccountCreationController *)arg1 didLoadRemoteUIWithSuccess:(BOOL)arg2;
@end

