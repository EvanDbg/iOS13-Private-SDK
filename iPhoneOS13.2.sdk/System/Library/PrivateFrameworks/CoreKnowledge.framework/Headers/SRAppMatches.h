//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSData, NSString;

@interface SRAppMatches : NSObject
{
    MISSING_TYPE *matchType;
    MISSING_TYPE *bundleIDs;
    MISSING_TYPE *signalsJSON;
}

+ (void)setSupportsSecureCoding:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(void )arg1;
@property(nonatomic, readonly) NSString *description;
- (id)initWithMatchType:(long long)arg1 bundleIDs:(id)arg2 signalsJSON:(id)arg3;
@property(nonatomic, readonly) NSData *signalsJSON;
@property(nonatomic, readonly) NSArray *bundleIDs;
@property(nonatomic, readonly) long long matchType; // @synthesize matchType;

@end

