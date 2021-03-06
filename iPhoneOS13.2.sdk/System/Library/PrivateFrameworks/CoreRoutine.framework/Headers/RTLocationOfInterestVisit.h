//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSUUID, RTLocation;

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding>
{
    RTLocation *_location;
    NSUUID *_identifier;
    NSDate *_entryDate;
    NSDate *_exitDate;
    double _locationOfInterestConfidence;
    NSUInteger _locationOfInterestSource;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger locationOfInterestSource; // @synthesize locationOfInterestSource=_locationOfInterestSource;
@property(readonly, nonatomic) double locationOfInterestConfidence; // @synthesize locationOfInterestConfidence=_locationOfInterestConfidence;
@property(readonly, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(readonly, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
// - (void).cxx_destruct;
- (id)exit;
- (id)entry;
- (id)exitTime;
- (id)entryTime;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 entry:(id)arg2 exit:(id)arg3 location:(id)arg4 locationOfInterestConfidence:(double)arg5 locationOfInterestSource:(NSUInteger)arg6;
- (id)init;

@end

