//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappableWithDefault-Protocol.h>

__attribute__((visibility("hidden")))
@interface GQDSStyle : NSObject <GQDNameMappableWithDefault>
{
    GQDSStyle *mParent;
//     struct GQDSMap mPropertyMap;
}

+ (int)styleTypeForNodeName:(const char )arg1;
// + (id)createReplacementForMissingObject:(struct _xmlTextReader )arg1 processor:(id)arg2;
// + (struct GQDSMap )defaultMapForStyleType:(int)arg1;
// + (const struct StateSpec )stateForReading;
+ (id)createReplacementForMissingStyleOfType:(int)arg1;
- (BOOL)overridesObjectProperty:(int)arg1 value:(id )arg2;
- (BOOL)hasValueForObjectProperty:(int)arg1 value:(id )arg2 wasOverriddenWithNull:(BOOL )arg3;
- (BOOL)hasValueForObjectProperty:(int)arg1 value:(id )arg2;
- (id)valueForObjectProperty:(int)arg1;
- (BOOL)overridesDoubleProperty:(int)arg1 value:(double )arg2;
- (BOOL)hasValueForDoubleProperty:(int)arg1 value:(double )arg2 wasOverriddenWithNull:(BOOL )arg3;
- (BOOL)hasValueForDoubleProperty:(int)arg1 value:(double )arg2;
- (double)valueForDoubleProperty:(int)arg1;
- (BOOL)overridesFloatProperty:(int)arg1 value:(float )arg2;
- (BOOL)hasValueForFloatProperty:(int)arg1 value:(float )arg2 wasOverriddenWithNull:(BOOL )arg3;
- (BOOL)hasValueForFloatProperty:(int)arg1 value:(float )arg2;
- (float)valueForFloatProperty:(int)arg1;
- (BOOL)overridesIntProperty:(int)arg1 value:(int )arg2;
- (BOOL)hasValueForIntProperty:(int)arg1 value:(int )arg2 wasOverriddenWithNull:(BOOL )arg3;
- (BOOL)hasValueForIntProperty:(int)arg1 value:(int )arg2;
- (int)valueForIntProperty:(int)arg1;
- (BOOL)overridesBoolProperty:(int)arg1 value:(BOOL )arg2;
- (BOOL)hasValueForBoolProperty:(int)arg1 value:(BOOL )arg2 wasOverriddenWithNull:(BOOL )arg3;
- (BOOL)hasValueForBoolProperty:(int)arg1 value:(BOOL )arg2;
- (BOOL)valueForBoolProperty:(int)arg1;
- (void)setParent:(id)arg1;
- (id)parent;
// - (void)setPropertyMap:(struct GQDSMap )arg1;
- (void)dealloc;

@end

