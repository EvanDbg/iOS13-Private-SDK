//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHBaseStyle.h>

@class TSSPropertyMap;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisNonStyle : TSCHBaseStyle
{
}

+ (BOOL)shouldWarnWithPersistingWithoutStylesheet;
+ (id)defaultStyleWithContext:(id)arg1;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)imageFillProperties;
+ (id)properties;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;
- (id)formatObjectPropertySet;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
@property(copy, nonatomic) TSSPropertyMap *overrideMapForSameAsSource; // @dynamic overrideMapForSameAsSource;

@end

