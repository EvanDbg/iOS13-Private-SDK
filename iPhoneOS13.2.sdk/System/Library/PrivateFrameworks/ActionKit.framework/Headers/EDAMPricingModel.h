//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMPricingModel : FATObject
{
    NSNumber *_gnomeActive;
    NSNumber *_gnomeWarmingPeriod;
    NSNumber *_pricingModelStart;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *pricingModelStart; // @synthesize pricingModelStart=_pricingModelStart;
@property(retain, nonatomic) NSNumber *gnomeWarmingPeriod; // @synthesize gnomeWarmingPeriod=_gnomeWarmingPeriod;
@property(retain, nonatomic) NSNumber *gnomeActive; // @synthesize gnomeActive=_gnomeActive;

@end
