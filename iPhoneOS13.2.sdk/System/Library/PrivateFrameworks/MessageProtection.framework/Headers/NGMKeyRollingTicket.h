//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject
{
    NGMFullPrekey *_prekey;
    NGMPublicDeviceIdentity *_registrationInfo;
}

@property(readonly, nonatomic) NGMPublicDeviceIdentity *registrationInfo; // @synthesize registrationInfo=_registrationInfo;
@property(readonly, nonatomic) NGMFullPrekey *prekey; // @synthesize prekey=_prekey;
// - (void).cxx_destruct;
- (id)publicDeviceIdentity;
- (id)prekeyData;
- (id)identityData;
- (id)initTicketWithSigningKey:(id)arg1 error:(id )arg2;

@end

