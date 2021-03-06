//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitIncident-Protocol.h>

@class GEOPBTransitIncident, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding>
{
    GEOPBTransitIncident *_incident;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *affectedEntities;
@property(readonly, nonatomic, getter=isBlockingIncident) BOOL blockingIncident;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) int iconType;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *messageForNonRoutable;
@property(readonly, nonatomic) NSString *messageForRouteStepping;
@property(readonly, nonatomic) NSString *messageForRoutePlanning;
@property(readonly, nonatomic) NSString *fullDescription;
@property(readonly, nonatomic) NSString *summary;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSUInteger muid;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncident:(id)arg1;

@end

