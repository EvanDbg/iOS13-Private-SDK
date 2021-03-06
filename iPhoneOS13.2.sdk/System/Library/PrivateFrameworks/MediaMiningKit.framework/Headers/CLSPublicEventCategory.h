//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface CLSPublicEventCategory : NSObject <NSSecureCoding>
{
    NSString *_category;
    NSString *_localizedName;
    NSArray *_localizedSubcategories;
}

+ (id)appleEvents;
+ (id)tours;
+ (id)familyEvents;
+ (id)educational;
+ (id)community;
+ (id)businessAndTechnology;
+ (id)sports;
+ (id)artsAndMuseums;
+ (id)festivalsAndFairs;
+ (id)dance;
+ (id)theater;
+ (id)nightLife;
+ (id)musicConcerts;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *localizedSubcategories; // @synthesize localizedSubcategories=_localizedSubcategories;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)levelForLocalizedSubcategory:(id)arg1;
- (id)initWithCategory:(id)arg1;

@end

