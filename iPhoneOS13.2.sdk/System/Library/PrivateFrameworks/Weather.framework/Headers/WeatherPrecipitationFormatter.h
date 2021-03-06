//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter
{
    NSLocale *_locale;
}

+ (id)convenienceFormatter;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
// - (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (long long)precipitationUnit;
- (double)convertDistanceInMetric:(double)arg1 to:(long long)arg2;
- (double)convertDistanceInImperial:(double)arg1 to:(long long)arg2;
- (id)stringFromDistance:(double)arg1 isDataMetric:(BOOL)arg2;
- (id)stringFromInches:(double)arg1;
- (id)stringFromCentimeters:(double)arg1;
- (id)init;

@end

