//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTDictionarySerializable-Protocol.h>
#import <MobileTimer/MTTimerTime-Protocol.h>

@class NSDate, NSString;

@interface MTTimerDate : NSObject <MTDictionarySerializable, MTTimerTime>
{
    NSDate *_date;
    id /* block */ _currentDateProvider;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) id /* block */ currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqualToTime:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double remainingTime;
- (id)initWithDate:(id)arg1 currentDateProvider:(id /* block */)arg2;
- (id)initWithDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
