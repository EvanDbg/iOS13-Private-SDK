//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@interface ICSMultiValueProperty : ICSProperty
{
}

- (void)setValues:(id)arg1 valueType:(NSUInteger)arg2;
- (id)values;
- (void)setValue:(id)arg1 type:(NSUInteger)arg2;
- (id)value;
- (BOOL)isMultiValued;
- (id)initWithValue:(id)arg1 type:(NSUInteger)arg2;
- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (void)_setParsedValues:(id)arg1 type:(NSUInteger)arg2;

@end

