//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSError, SOAuthorizationCredential;

@protocol SOExtensionDelegate <NSObject>
- (void)authorizationDidCompleteWithCredential:(SOAuthorizationCredential *)arg1 error:(NSError *)arg2;
- (void)presentAuthorizationViewControllerWithHints:(NSDictionary *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

