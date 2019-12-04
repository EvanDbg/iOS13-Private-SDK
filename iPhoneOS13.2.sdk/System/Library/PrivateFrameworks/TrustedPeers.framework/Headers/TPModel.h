//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSMutableSet;
@protocol TPDecrypter;

@interface TPModel : NSObject
{
    NSMutableDictionary *_peersByID;
    NSMutableDictionary *_policiesByVersion;
    NSMutableSet *_uncheckedVouchers;
    NSMutableSet *_vouchers;
    id <TPDecrypter> _decrypter;
    NSData *_recoverySigningPubKey;
    NSData *_recoveryEncryptionPubKey;
    NSArray *_cachedViableBottles;
    NSArray *_cachedPartialViableBottles;
}

+ (id)preapprovalsFromKeys:(id)arg1;
@property(retain, nonatomic) NSArray *cachedPartialViableBottles; // @synthesize cachedPartialViableBottles=_cachedPartialViableBottles;
@property(retain, nonatomic) NSArray *cachedViableBottles; // @synthesize cachedViableBottles=_cachedViableBottles;
@property(retain, nonatomic) NSData *recoveryEncryptionPubKey; // @synthesize recoveryEncryptionPubKey=_recoveryEncryptionPubKey;
@property(retain, nonatomic) NSData *recoverySigningPubKey; // @synthesize recoverySigningPubKey=_recoverySigningPubKey;
@property(retain, nonatomic) id <TPDecrypter> decrypter; // @synthesize decrypter=_decrypter;
@property(retain, nonatomic) NSMutableSet *vouchers; // @synthesize vouchers=_vouchers;
@property(retain, nonatomic) NSMutableSet *uncheckedVouchers; // @synthesize uncheckedVouchers=_uncheckedVouchers;
@property(retain, nonatomic) NSMutableDictionary *policiesByVersion; // @synthesize policiesByVersion=_policiesByVersion;
@property(retain, nonatomic) NSMutableDictionary *peersByID; // @synthesize peersByID=_peersByID;
- (id)recoveryEncryptionPublicKey;
- (id)recoverySigningPublicKey;
- (void)clearViableBottles;
- (void)setViableBottles:(id)arg1;
- (id)currentCachedViableBottlesSet;
- (void)setRecoveryKeys:(id)arg1;
- (_Bool)isRecoveryKeyEnrolled;
- (id)peerIDThatTrustsRecoveryKeys:(id)arg1;
- (id)untrustedPeerIDs;
- (id)bestRecoveryKeyWithDynamicInfo:(id)arg1;
- (_Bool)doesPeerRecoveryKeyMatchPeers:(id)arg1;
- (id)vectorClock;
- (id)getPeerIDsTrustedByPeerWithDynamicInfo:(id)arg1 toAccessView:(id)arg2 error:(id *)arg3;
- (id)getPeerIDsTrustedByPeerWithID:(id)arg1 toAccessView:(id)arg2 error:(id *)arg3;
- (id)getViewsForPeer:(id)arg1 stableInfo:(id)arg2 inViews:(id)arg3 error:(id *)arg4;
- (_Bool)considerPolicyFromPeerID:(id)arg1 stableInfo:(id)arg2 secrets:(id)arg3 newestPolicyDoc:(id *)arg4 error:(id *)arg5;
- (id)policyForPeerIDs:(id)arg1 candidatePeerID:(id)arg2 candidateStableInfo:(id)arg3 error:(id *)arg4;
- (id)policyForPeerIDs:(id)arg1 error:(id *)arg2;
- (id)dynamicInfoForJoiningPeerID:(id)arg1 peerPermanentInfo:(id)arg2 peerStableInfo:(id)arg3 sponsorID:(id)arg4 preapprovedKeys:(id)arg5 signingKeyPair:(id)arg6 currentMachineIDs:(id)arg7 error:(id *)arg8;
- (void)filterPreapprovals:(id)arg1 forExistingPeers:(id)arg2;
- (id)peersWithMachineID:(id)arg1;
- (id)filterPeerList:(id)arg1 byMachineIDs:(id)arg2 dispositions:(id)arg3;
- (id)calculateDynamicInfoFromModel:(id)arg1 peer:(id)arg2 peerPermanentInfo:(id)arg3 peerStableInfo:(id)arg4 startingDynamicInfo:(id)arg5 addingPeerIDs:(id)arg6 removingPeerIDs:(id)arg7 preapprovedKeys:(id)arg8 signingKeyPair:(id)arg9 currentMachineIDs:(id)arg10 error:(id *)arg11;
- (id)calculateDynamicInfoForPeerWithID:(id)arg1 addingPeerIDs:(id)arg2 removingPeerIDs:(id)arg3 preapprovedKeys:(id)arg4 signingKeyPair:(id)arg5 currentMachineIDs:(id)arg6 error:(id *)arg7;
- (void)recursivelyExpandIncludedPeerIDs:(id)arg1 andExcludedPeerIDs:(id)arg2 dispositions:(id)arg3 withPeersTrustedBySponsorID:(id)arg4 currentMachineIDs:(id)arg5 forEpoch:(unsigned long long)arg6;
- (void)considerPreapprovalsSponsoredByPeer:(id)arg1 toRecursivelyExpandIncludedPeerIDs:(id)arg2 andExcludedPeerIDs:(id)arg3 dispositions:(id)arg4 currentMachineIDs:(id)arg5 forEpoch:(unsigned long long)arg6;
- (void)considerVouchersSponsoredByPeerID:(id)arg1 sponsorPermanentInfo:(id)arg2 toRecursivelyExpandIncludedPeerIDs:(id)arg3 andExcludedPeerIDs:(id)arg4 dispositions:(id)arg5 currentMachineIDs:(id)arg6 forEpoch:(unsigned long long)arg7;
- (id)considerCandidateID:(id)arg1 withSponsorID:(id)arg2 sponsorPermanentInfo:(id)arg3 toExpandIncludedPeerIDs:(id)arg4 andExcludedPeerIDs:(id)arg5 dispositions:(id)arg6 currentMachineIDs:(id)arg7 forEpoch:(unsigned long long)arg8;
- (void)checkVouchers;
- (void)registerVoucher:(id)arg1;
- (_Bool)validateVoucherForPeer:(id)arg1 sponsor:(id)arg2;
- (id)createVoucherForCandidate:(id)arg1 stableInfo:(id)arg2 withSponsorID:(id)arg3 reason:(unsigned long long)arg4 signingKeyPair:(id)arg5 error:(id *)arg6;
- (_Bool)checkIntroductionForCandidate:(id)arg1 stableInfo:(id)arg2 withSponsorID:(id)arg3 error:(id *)arg4;
- (_Bool)canIntroduceCandidate:(id)arg1 withSponsor:(id)arg2 toEpoch:(unsigned long long)arg3 underPolicy:(id)arg4 disposition:(id)arg5;
- (_Bool)canTrustCandidate:(id)arg1 inEpoch:(unsigned long long)arg2;
- (id)createDynamicInfoWithIncludedPeerIDs:(id)arg1 excludedPeerIDs:(id)arg2 dispositions:(id)arg3 preapprovals:(id)arg4 signingKeyPair:(id)arg5 error:(id *)arg6;
- (unsigned long long)maxClock;
- (_Bool)updateDynamicInfo:(id)arg1 forPeerWithID:(id)arg2 error:(id *)arg3;
- (id)createStableInfoWithPolicyVersion:(unsigned long long)arg1 policyHash:(id)arg2 policySecrets:(id)arg3 deviceName:(id)arg4 serialNumber:(id)arg5 osVersion:(id)arg6 signingKeyPair:(id)arg7 recoverySigningPubKey:(id)arg8 recoveryEncryptionPubKey:(id)arg9 error:(id *)arg10;
- (_Bool)updateStableInfo:(id)arg1 forPeerWithID:(id)arg2 error:(id *)arg3;
- (id)getDynamicInfoForPeerWithID:(id)arg1;
- (id)getStableInfoForPeerWithID:(id)arg1;
- (_Bool)setWrappedPrivateKeys:(id)arg1 forPeerWithID:(id)arg2 error:(id *)arg3;
- (unsigned long long)statusOfPeerWithID:(id)arg1;
- (_Bool)validatePeerWithPreApproval:(id)arg1 sponsor:(id)arg2;
- (_Bool)hasPotentiallyTrustedPeerPreapprovingKey:(id)arg1;
- (id)viablePeerCountsByModelID;
- (id)allMachineIDs;
- (id)actualPeerWithID:(id)arg1 error:(id *)arg2;
- (id)peerWithID:(id)arg1;
- (_Bool)hasPeerWithID:(id)arg1;
- (void)deletePeerWithID:(id)arg1;
- (void)registerPeerWithPermanentInfo:(id)arg1;
- (id)allVouchers;
- (id)allPeers;
- (id)allPeerIDs;
- (id)policyWithVersion:(unsigned long long)arg1;
- (void)registerPolicyDocument:(id)arg1;
- (unsigned long long)latestEpochAmongPeerIDs:(id)arg1;
- (id)initWithDecrypter:(id)arg1;

@end
