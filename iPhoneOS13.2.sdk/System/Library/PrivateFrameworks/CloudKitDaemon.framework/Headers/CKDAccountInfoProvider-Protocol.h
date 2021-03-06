//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKAccountOverrideInfo, NSString;
@protocol CKDAccountAccessInfoProvider;

@protocol CKDAccountInfoProvider <NSObject>
@property(readonly, nonatomic) CKAccountOverrideInfo *fakeAccountInfo;
@property(readonly, nonatomic) BOOL isFakeAccount;
@property(readonly, nonatomic) NSString *displayedHostname;
@property(readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property(readonly, nonatomic) BOOL isiCloudDevEnvironmentAccount;
@property(readonly, nonatomic) BOOL isCarryAccount;
@property(readonly, nonatomic) BOOL accountWantsPushRegistration;
@property(readonly, nonatomic) BOOL isUnitTestingAccount;
@property(readonly, nonatomic) BOOL isAnonymousAccount;
@property(readonly, nonatomic) NSString *accountIdentifier;
- (void)renewiCloudAuthTokenWithReason:(NSString *)arg1 shouldForce:(BOOL)arg2 accessProvider:(id <CKDAccountAccessInfoProvider>)arg3 failedToken:(NSString *)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (NSString *)iCloudAuthTokenWithAccessProvider:(id <CKDAccountAccessInfoProvider>)arg1 error:(id )arg2;
- (void)iCloudAuthTokenWithAccessProvider:(id <CKDAccountAccessInfoProvider>)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)renewCloudKitAuthTokenWithReason:(NSString *)arg1 shouldForce:(BOOL)arg2 accessProvider:(id <CKDAccountAccessInfoProvider>)arg3 failedToken:(NSString *)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (NSString *)cloudKitAuthTokenWithAccessProvider:(id <CKDAccountAccessInfoProvider>)arg1 error:(id )arg2;
- (void)cloudKitAuthTokenWithAccessProvider:(id <CKDAccountAccessInfoProvider>)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (NSString *)sharingURLHostname;
- (NSString *)dsid;
@end

