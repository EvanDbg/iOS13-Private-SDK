//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKAnalogDialShapeEditOption : NTKEnumeratedEditOption
{
}

+ (id)_nameLocalizationKeyForValue:(NSUInteger)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(NSUInteger)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)optionWithShape:(NSUInteger)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
- (NSUInteger)_value;
@property(readonly, nonatomic) NSUInteger dialShape;
- (long long)swatchStyle;

@end

