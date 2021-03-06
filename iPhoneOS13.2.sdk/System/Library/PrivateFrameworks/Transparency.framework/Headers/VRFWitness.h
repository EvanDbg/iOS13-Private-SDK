//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class NSData, TransparencyVRFVerifier;

@interface VRFWitness : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (BOOL)verifyWithError:(id )arg1;
@property(retain) NSData *salt;
@property(retain) NSData *message;
@property(retain) TransparencyVRFVerifier *verifier;

@end

