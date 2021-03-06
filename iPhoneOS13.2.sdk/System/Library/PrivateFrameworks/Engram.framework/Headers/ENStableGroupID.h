//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSUUID;

@interface ENStableGroupID : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_uuid;
}

+ (BOOL)supportsSecureCoding;
+ (id)stableGroupIDWithCurrentTime;
+ (NSUInteger)stableGroupIDLength;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
- (id)description;
- (int)customUUIDCompare:(unsigned char [16])arg1 u2:(unsigned char [16])arg2;
- (long long)compare:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)_mutableDataRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;

@end

