//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKWhistlerDigitalFace : NTKFace
{
}

+ (id)_richComplicationSlotsForDevice:(id)arg1;
+ (id)_orderedComplicationSlots;
+ (NSUInteger)_dateComplicationSlotSupportedStylesForDevice:(id)arg1;
+ (id)_dateComplicationSlotForDevice:(id)arg1;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_initialDefaultComplicationForSlot:(id)arg1 forDevice:(id)arg2;
+ (id)_complicationSlotDescriptors;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)_defaultColorOption;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (NSUInteger)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(NSUInteger)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (NSUInteger)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;

@end

