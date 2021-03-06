//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface AKAuthorizationCredentialStateRequest : NSObject <NSSecureCoding>
{
    BOOL _shouldIgnoreUserID;
    BOOL _shouldIgnoreTeamID;
    NSString *_userID;
    NSString *_teamID;
    NSString *_clientID;
    NSString *_altDSID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldIgnoreTeamID; // @synthesize shouldIgnoreTeamID=_shouldIgnoreTeamID;
@property(nonatomic) BOOL shouldIgnoreUserID; // @synthesize shouldIgnoreUserID=_shouldIgnoreUserID;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

