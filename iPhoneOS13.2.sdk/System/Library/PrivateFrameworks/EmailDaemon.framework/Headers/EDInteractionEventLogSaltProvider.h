//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSData;

@interface EDInteractionEventLogSaltProvider : NSObject <EFLoggable>
{
//    struct os_unfair_lock_s _lock;
    NSData *_salt;
}

+ (id)saltProviderFromKeyChain;
+ (id)saltProviderWithString:(id)arg1;
+ (id)log;
// property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSData *salt; // @synthesize salt=_salt;
// - (void).cxx_destruct;
- (BOOL)migrateAccessClass;
- (void)_deleteSalt;
- (id)_createSalt;
- (id)_findExistingSaltError:(out id )arg1;
- (id)_queryKeychainError:(out id )arg1;
- (id)_findOrCreateSalt;
- (id)init;

@end

