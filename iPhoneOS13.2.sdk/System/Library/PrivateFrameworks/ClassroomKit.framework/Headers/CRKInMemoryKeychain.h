//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKKeychain-Protocol.h>

@class NSMutableDictionary;

@interface CRKInMemoryKeychain : NSObject <CRKKeychain>
{
    NSMutableDictionary *_keychainItemsByPersistentID;
}

@property(readonly, nonatomic) NSMutableDictionary *keychainItemsByPersistentID; // @synthesize keychainItemsByPersistentID=_keychainItemsByPersistentID;
- (id)addItem:(id)arg1 toAccessGroup:(id)arg2;
- (id)makePrivateKeyWithData:(id)arg1;
- (id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2;
- (void)removeItemWithPersistentID:(id)arg1;
- (id)makeCertificateWithData:(id)arg1;
- (id)makeIdentityWithConfiguration:(id)arg1;
- (id)privateKeyWithPersistentID:(id)arg1;
- (id)identityWithPersistentID:(id)arg1;
- (id)certificateWithPersistentID:(id)arg1;
- (id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2;
- (id)addIdentity:(id)arg1 toAccessGroup:(id)arg2;
- (id)addCertificate:(id)arg1 toAccessGroup:(id)arg2;
- (id)init;

@end
