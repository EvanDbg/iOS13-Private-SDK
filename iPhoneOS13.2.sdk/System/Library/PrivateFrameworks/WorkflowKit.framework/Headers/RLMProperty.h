//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RLMProperty : NSObject
{
    int _type;
//    struct objc_ivar _swiftIvar;
    BOOL _indexed;
    BOOL _optional;
    BOOL _array;
    BOOL _isPrimary;
    NSString *_name;
    NSString *_objectClassName;
    NSString *_linkOriginPropertyName;
    NSString *_columnName;
    NSUInteger _index;
    NSString *_getterName;
    NSString *_setterName;
    SEL _getterSel;
    SEL _setterSel;
}

//  (id)propertyForObjectStoreProperty:(const struct Property )arg1;
@property(nonatomic) SEL setterSel; // @synthesize setterSel=_setterSel;
@property(nonatomic) SEL getterSel; // @synthesize getterSel=_getterSel;
@property(copy, nonatomic) NSString *setterName; // @synthesize setterName=_setterName;
@property(copy, nonatomic) NSString *getterName; // @synthesize getterName=_getterName;
// property(nonatomic) struct objc_ivar swiftIvar; // @synthesize swiftIvar=_swiftIvar;
@property(nonatomic) BOOL isPrimary; // @synthesize isPrimary=_isPrimary;
@property(nonatomic) NSUInteger index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
@property(readonly, nonatomic) BOOL array; // @synthesize array=_array;
@property(nonatomic) BOOL optional; // @synthesize optional=_optional;
@property(readonly, copy, nonatomic) NSString *linkOriginPropertyName; // @synthesize linkOriginPropertyName=_linkOriginPropertyName;
@property(copy, nonatomic) NSString *objectClassName; // @synthesize objectClassName=_objectClassName;
@property(nonatomic) BOOL indexed; // @synthesize indexed=_indexed;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
//  (struct Property)objectStoreCopy:(id)arg1;
- (id)description;
- (BOOL)isEqualToProperty:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithNewName:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
//  (id)initSwiftLinkingObjectsPropertyWithName:(id)arg1 ivar:(struct objc_ivar )arg2 objectClassName:(id)arg3 linkOriginPropertyName:(id)arg4;
//  (id)initSwiftOptionalPropertyWithName:(id)arg1 indexed:(BOOL)arg2 ivar:(struct objc_ivar )arg3 propertyType:(int)arg4;
- (id)initSwiftListPropertyWithName:(id)arg1 instance:(id)arg2;
//  (id)initWithName:(id)arg1 indexed:(BOOL)arg2 linkPropertyDescriptor:(id)arg3 property:(struct objc_property )arg4;
//  (id)initSwiftPropertyWithName:(id)arg1 indexed:(BOOL)arg2 linkPropertyDescriptor:(id)arg3 property:(struct objc_property )arg4 instance:(id)arg5;
//  (void)parseObjcProperty:(struct objc_property )arg1 readOnly:(BOOL )arg2 computed:(BOOL )arg3 rawType:(id )arg4;
- (BOOL)setTypeFromRawType:(id)arg1;
- (void)updateAccessors;
- (id)initWithName:(id)arg1 type:(int)arg2 objectClassName:(id)arg3 linkOriginPropertyName:(id)arg4 indexed:(BOOL)arg5 optional:(BOOL)arg6;

@end

