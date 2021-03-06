//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSDictionary, RBSProcessHandle;

@interface RBSHandshakeResponse : NSObject <BSXPCSecureCoding>
{
    RBSProcessHandle *_handle;
    NSDictionary *_assertionIdentifiersByOldIdentifier;
    NSDictionary *_assertionErrorsByOldIdentifier;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(retain, nonatomic) NSDictionary *assertionErrorsByOldIdentifier; // @synthesize assertionErrorsByOldIdentifier=_assertionErrorsByOldIdentifier;
@property(retain, nonatomic) NSDictionary *assertionIdentifiersByOldIdentifier; // @synthesize assertionIdentifiersByOldIdentifier=_assertionIdentifiersByOldIdentifier;
@property(retain, nonatomic) RBSProcessHandle *handle; // @synthesize handle=_handle;
// - (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

