//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSDictionary, NSMutableDictionary, NSString, PBCodable;

@protocol HDNanoSyncPersistentUserInfoCopying 
+ (NSString *)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(NSDictionary *)arg1;
- (PBCodable *)copyForPersistentUserInfo;
- (void)addToPersistentUserInfo:(NSMutableDictionary *)arg1;
- (id)initWithData:(NSData *)arg1;
@end
