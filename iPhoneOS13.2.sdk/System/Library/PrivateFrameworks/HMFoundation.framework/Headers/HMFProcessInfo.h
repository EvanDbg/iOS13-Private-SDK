//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFBoolean, NSString;

@interface HMFProcessInfo : HMFObject <HMFLogging>
{
//     CDStruct_6ad76789 _auditToken;
    NSString *_applicationIdentifier;
    int _identifier;
    NSString *_name;
}

+ (id)logCategory;
+ (id)processInfoForXPCConnection:(id)arg1;
+ (id)processInfo;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) int identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (BOOL)getAuditToken:(CDStruct_6ad76789 )arg1;
- (id)attributeDescriptions;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)dealloc;
- (id)initWithIdentifier:(int)arg1;
// - (id)initWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)init;
- (id)valueForEntitlement:(id)arg1;
@property(readonly, copy, getter=isPlatformBinary) HMFBoolean *platformBinary;
@property(readonly, copy, getter=isCodeSigned) HMFBoolean *codeSigned;
@property(readonly, copy) NSString *applicationIdentifier;

@end

