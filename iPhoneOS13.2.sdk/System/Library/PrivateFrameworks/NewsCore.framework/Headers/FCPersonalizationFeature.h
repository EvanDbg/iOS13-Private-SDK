//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface FCPersonalizationFeature : NSObject <NSCopying>
{
    BOOL _shouldBeBoosted;
    NSString *_personalizationIdentifier;
    NSString *_fc_description;
    NSString *_tagID;
}

+ (id)featureObserver;
+ (id)featureForFreeValuedIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1 allowFreeValued:(BOOL)arg2;
+ (id)featureForIdentifier:(id)arg1;
+ (id)featureFromTagID:(id)arg1;
+ (id)featuresFromTagIDs:(id)arg1;
+ (id)featuresFromTag:(id)arg1;
+ (id)featuresFromPersonalizingItem:(id)arg1 personalizationTreatment:(id)arg2;
+ (id)featuresFromTodayPersonalizationEvent:(id)arg1;
+ (id)featuresFromHeadline:(id)arg1 personalizationTreatment:(id)arg2;
+ (id)featuresFromIssue:(id)arg1;
@property(retain, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(readonly, nonatomic) NSString *fc_description; // @synthesize fc_description=_fc_description;
@property(retain, nonatomic) NSString *personalizationIdentifier; // @synthesize personalizationIdentifier=_personalizationIdentifier;
@property(nonatomic) BOOL shouldBeBoosted; // @synthesize shouldBeBoosted=_shouldBeBoosted;
// - (void).cxx_destruct;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;
- (id)fr_description;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

