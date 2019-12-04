//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString;

@interface _CLKTimeFormatData : NSObject
{
    NSString *_formatHourMinSecSubsec;
    NSString *_formatHourMinSec;
    NSString *_formatHourMin;
    NSString *_formatMinSecSubsec;
    NSString *_formatMinSec;
    NSString *_formatMin;
    NSNumberFormatter *_singleWidthNumberFormatter;
    NSNumberFormatter *_doubleWidthNumberFormatter;
}

+ (id)_timeLocale;
+ (id)_timeFormatDataAccessLock;
+ (id)instanceForCurrentLocale;
+ (void)resetTimeFormatData;
@property(readonly, nonatomic) NSNumberFormatter *doubleWidthNumberFormatter; // @synthesize doubleWidthNumberFormatter=_doubleWidthNumberFormatter;
@property(readonly, nonatomic) NSNumberFormatter *singleWidthNumberFormatter; // @synthesize singleWidthNumberFormatter=_singleWidthNumberFormatter;
@property(readonly, nonatomic) NSString *formatMin; // @synthesize formatMin=_formatMin;
@property(readonly, nonatomic) NSString *formatMinSec; // @synthesize formatMinSec=_formatMinSec;
@property(readonly, nonatomic) NSString *formatMinSecSubsec; // @synthesize formatMinSecSubsec=_formatMinSecSubsec;
@property(readonly, nonatomic) NSString *formatHourMin; // @synthesize formatHourMin=_formatHourMin;
@property(readonly, nonatomic) NSString *formatHourMinSec; // @synthesize formatHourMinSec=_formatHourMinSec;
@property(readonly, nonatomic) NSString *formatHourMinSecSubsec; // @synthesize formatHourMinSecSubsec=_formatHourMinSecSubsec;
- (id)init;

@end
