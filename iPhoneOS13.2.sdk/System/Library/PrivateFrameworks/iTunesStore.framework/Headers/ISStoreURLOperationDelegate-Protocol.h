//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISURLOperationDelegate-Protocol.h>

@class ISStoreURLOperation, NSNumber, NSString, SSAuthenticationContext;

@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>

@optional
- (BOOL)operation:(ISStoreURLOperation *)arg1 shouldSetStoreFrontID:(NSString *)arg2;
- (void)operation:(ISStoreURLOperation *)arg1 shouldAuthenticateWithContext:(SSAuthenticationContext *)arg2 responseHandler:(void (^)(SSAuthenticateResponse *, NSError *))arg3;
- (void)operation:(ISStoreURLOperation *)arg1 didAuthenticateWithDSID:(NSNumber *)arg2;
@end

