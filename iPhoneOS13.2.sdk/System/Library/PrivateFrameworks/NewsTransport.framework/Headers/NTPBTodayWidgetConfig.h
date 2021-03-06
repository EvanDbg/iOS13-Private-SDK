//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface NTPBTodayWidgetConfig : PBCodable <NSCopying>
{
    long long _minimumArticleExposureDurationToBePreseen;
    double _prerollLoadingTimeout;
    NSData *_externalAnalyticsConfigurationsData;
    unsigned int _minimumNumberOfTimesPreseenToBeSeen;
    NSData *_videoGroupsConfigData;
   struct {
        unsigned int minimumArticleExposureDurationToBePreseen:1;
        unsigned int prerollLoadingTimeout:1;
        unsigned int minimumNumberOfTimesPreseenToBeSeen:1;
    } _has;
}

@property(retain, nonatomic) NSData *videoGroupsConfigData; // @synthesize videoGroupsConfigData=_videoGroupsConfigData;
@property(retain, nonatomic) NSData *externalAnalyticsConfigurationsData; // @synthesize externalAnalyticsConfigurationsData=_externalAnalyticsConfigurationsData;
@property(nonatomic) double prerollLoadingTimeout; // @synthesize prerollLoadingTimeout=_prerollLoadingTimeout;
@property(nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen; // @synthesize minimumNumberOfTimesPreseenToBeSeen=_minimumNumberOfTimesPreseenToBeSeen;
@property(nonatomic) long long minimumArticleExposureDurationToBePreseen; // @synthesize minimumArticleExposureDurationToBePreseen=_minimumArticleExposureDurationToBePreseen;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasVideoGroupsConfigData;
@property(readonly, nonatomic) BOOL hasExternalAnalyticsConfigurationsData;
@property(nonatomic) BOOL hasPrerollLoadingTimeout;
@property(nonatomic) BOOL hasMinimumNumberOfTimesPreseenToBeSeen;
@property(nonatomic) BOOL hasMinimumArticleExposureDurationToBePreseen;

@end

