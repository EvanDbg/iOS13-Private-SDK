//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKAuthorizationValidator : NSObject
{
}

+ (BOOL)_requirePasscodeSet;
+ (BOOL)shouldContinueWithResponse:(id)arg1 error:(id )arg2;
+ (BOOL)canPerformPasswordRequest:(id)arg1 error:(id )arg2;
+ (BOOL)canPerformAuthorizationRequest:(id)arg1 error:(id )arg2;
+ (BOOL)canPerformCredentialRequest:(id)arg1 error:(id )arg2;

@end

