//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class DNDModeAssertionDetails, DNDModeAssertionSource, NSDate, NSUUID;

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSDate *_startDate;
    DNDModeAssertionDetails *_details;
    DNDModeAssertionSource *_source;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) DNDModeAssertionSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) DNDModeAssertionDetails *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 details:(id)arg3 source:(id)arg4;

@end

