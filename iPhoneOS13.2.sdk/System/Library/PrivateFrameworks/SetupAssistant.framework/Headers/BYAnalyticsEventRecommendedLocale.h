//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BYAnalyticsEventRecommendedLocale : NSObject
{
    BOOL _userVisitedLocalePane;
    BOOL _userSawRecommendedLocale;
    NSUInteger _source;
    double _durationOfWiFiScan;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL userSawRecommendedLocale; // @synthesize userSawRecommendedLocale=_userSawRecommendedLocale;
@property(nonatomic) BOOL userVisitedLocalePane; // @synthesize userVisitedLocalePane=_userVisitedLocalePane;
@property(nonatomic) double durationOfWiFiScan; // @synthesize durationOfWiFiScan=_durationOfWiFiScan;
@property(nonatomic) NSUInteger source; // @synthesize source=_source;
- (id)eventPayload;
- (id)init;

@end

