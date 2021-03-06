//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKProfileIdentifier, NSString, NSUUID;

@protocol HDProfileServerInterface <NSObject>
- (void)remote_setDisplayFirstName:(NSString *)arg1 lastName:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_profileIdentifierForNRDeviceUUID:(NSUUID *)arg1 completion:(void (^)(HKProfileIdentifier *, NSError *))arg2;
- (void)remote_getAllProfilesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_deleteProfile:(HKProfileIdentifier *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_createProfileOfType:(long long)arg1 displayName:(NSString *)arg2 completion:(void (^)(HKProfileIdentifier *, NSError *))arg3;
@end

