//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastDataParser-Protocol.h>

@interface WFWeatherHistorical30DayParserV3 : NSObject <WFForecastDataParser>
{
}

+ (id)dateFormatter;
+ (id)daysOfWeek;
- (long long)getDataIndexFromFirstDayOfWeek:(id)arg1 andRequestedDate:(id)arg2;
- (id)parseHistorical30DayForecastDataFromJson:(id)arg1 location:(id)arg2 date:(id)arg3 error:(id )arg4;
- (id)parseForecastData:(id)arg1 types:(NSUInteger)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id )arg6 rules:(id)arg7;
- (id)parseForecastData:(id)arg1 types:(NSUInteger)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id )arg6;

@end

