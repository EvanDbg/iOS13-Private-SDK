//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPaymentTransaction, PKTransactionCloudKitDebugDetailsViewController, UIBarButtonItem;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController
{
    UIBarButtonItem *_shareButton;
    PKPaymentTransaction *_transaction;
    PKTransactionCloudKitDebugDetailsViewController *_cloudKitViewController;
}

// - (void).cxx_destruct;
- (void)_handleShareButton:(id)arg1;
- (id)initWithTransaction:(id)arg1;

@end

