//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PCSShareProtectionObject : NSObject
{
//    struct _OpaquePCSShareProtection _shareProtection;
//    struct _PCSIdentityData _identity;
}

// property(readonly, nonatomic) struct _OpaquePCSShareProtection shareProtection; // @synthesize shareProtection=_shareProtection;
- (id)exportAcceptedSharingRequestWithError:(id )arg1;
//  (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData )arg1 owner:(void )arg2 flags:(unsigned int)arg3 error:(id )arg4;
//  (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData )arg1 flags:(unsigned int)arg2 error:(id )arg3;
//  (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData )arg1 error:(id )arg2;
- (void)dealloc;
//  (id)initWithSharingRequestData:(id)arg1 identitySet:(struct _PCSIdentitySetData )arg2 error:(id )arg3;
//  (id)initWithShareProtectionRef:(struct _OpaquePCSShareProtection )arg1;

@end

