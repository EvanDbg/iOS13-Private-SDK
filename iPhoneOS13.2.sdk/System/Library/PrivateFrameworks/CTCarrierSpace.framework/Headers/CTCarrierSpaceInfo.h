//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CTCarrierSpaceAppsInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo;

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding>
{
    CTCarrierSpaceUsageInfo *_usageInfo;
    CTCarrierSpacePlansInfo *_plansInfo;
    CTCarrierSpaceAppsInfo *_appsInfo;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CTCarrierSpaceAppsInfo *appsInfo; // @synthesize appsInfo=_appsInfo;
@property(retain, nonatomic) CTCarrierSpacePlansInfo *plansInfo; // @synthesize plansInfo=_plansInfo;
@property(retain, nonatomic) CTCarrierSpaceUsageInfo *usageInfo; // @synthesize usageInfo=_usageInfo;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

