//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding>
{
    unsigned int _flags;
    NSString *_contactID;
    NSArray *_handles;
    NSString *_sendersKnownAlias;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *sendersKnownAlias; // @synthesize sendersKnownAlias=_sendersKnownAlias;
@property(copy, nonatomic) NSArray *handles; // @synthesize handles=_handles;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

