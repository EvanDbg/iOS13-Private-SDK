//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface REExportedValue : NSObject
{
}

+ (id)_exportedValueForTable:(id)arg1;
+ (id)exportedValueForObject:(id)arg1;
+ (id)exportedValueForString:(id)arg1;
+ (id)exportedValueForNumber:(id)arg1;
+ (id)exportedValueForDate:(id)arg1;
+ (id)exportedValueForDictionary:(id)arg1;
+ (id)exportedValueForArray:(id)arg1;
- (id)exportedValueForKey:(id)arg1;
- (BOOL)shouldEncodeProperty:(id)arg1;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (NSUInteger)type;
- (NSUInteger)propertyCount;
- (id)dateValue;
- (id)numberValue;
- (id)stringValue;
- (id)objectValue;
- (id)dictionaryValue;
- (id)arrayValue;

@end

