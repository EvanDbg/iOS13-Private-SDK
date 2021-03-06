//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSNumberFormatter;

@interface CNTimeIntervalFormatter : NSFormatter
{
    NSNumberFormatter *_numberFormatterWith3SigFigs;
    NSNumberFormatter *_numberFormatterWith4SigFigs;
}

+ (id)multiplierForOrder:(long long)arg1;
+ (id)stringForTimeInterval:(double)arg1;
+ (id)sharedFormatter;
+ (id)numberFormatterWithSignificantDigits:(NSUInteger)arg1;
// - (void).cxx_destruct;
- (id)stringForTimeInterval:(double)arg1;
- (id)stringForObjectValue:(id)arg1;
@property(readonly, nonatomic) NSNumberFormatter *numberFormatterWith4SigFigs; // @synthesize numberFormatterWith4SigFigs=_numberFormatterWith4SigFigs;
@property(readonly, nonatomic) NSNumberFormatter *numberFormatterWith3SigFigs; // @synthesize numberFormatterWith3SigFigs=_numberFormatterWith3SigFigs;

@end

