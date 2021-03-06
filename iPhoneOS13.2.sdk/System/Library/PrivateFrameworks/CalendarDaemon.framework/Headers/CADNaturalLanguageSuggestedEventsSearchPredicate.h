//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class NSString;

@interface CADNaturalLanguageSuggestedEventsSearchPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
    NSString *_searchString;
    BOOL _allNLEvents;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (BOOL)shouldLoadDefaultProperties;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1 allNLEvents:(BOOL)arg2;
- (id)initWithSearchString:(id)arg1;
// - (id)copyMatchingItemsWithDatabase:(struct CalDatabase )arg1;

@end

