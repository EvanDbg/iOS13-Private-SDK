//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDOAuthSignerProtocol-Protocol.h>

@class ACDClient, ACDClientAuthorizationManager, ACDDatabaseConnection;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol>
{
    ACDClient *_client;
    ACDDatabaseConnection *_databaseConnection;
    ACDClientAuthorizationManager *_authorizationManager;
    BOOL _shouldIncludeAppIdInRequest;
}

+ (id)new;
// - (void).cxx_destruct;
- (id)csForAccountType:(id)arg1;
- (id)ckForAccountType:(id)arg1;
- (BOOL)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setShouldIncludeAppIdInRequest:(BOOL)arg1;
- (id)initWithClient:(id)arg1 databaseConnection:(id)arg2;
- (id)init;

@end

