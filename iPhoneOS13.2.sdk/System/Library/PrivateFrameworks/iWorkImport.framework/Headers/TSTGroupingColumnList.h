//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>



@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTGroupingColumnList : TSKSosBase <NSCopying>
{
    NSArray *_groupingColumns;
}

-     // Error parsing type: v32@0:8^{GroupColumnListArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::GroupColumnArchive>=^{Arena}ii^{Rep}}}16@24, name: encodeToArchive:archiver:
-     // Error parsing type: @24@0:8r^{GroupColumnListArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::GroupColumnArchive>=^{Arena}ii^{Rep}}}16, name: initWithArchive:
- (void)replaceRuleAtGroupLevel:(unsigned char)arg1 withRule:(id)arg2;
- (void)changeGroupingTypeForGroupLevel:(unsigned char)arg1 toType:(int)arg2;
- (void)moveRuleFromGroupLevel:(unsigned char)arg1 toLevel:(unsigned char)arg2;
- (void)removeRuleAtGroupLevel:(unsigned char)arg1;
- (void)addRule:(id)arg1 atGroupLevel:(unsigned char)arg2;
- (void)replaceRuleAtIndex:(unsigned long long)arg1 withRule:(id)arg2;
- (void)changeGroupingTypeForRuleIndex:(unsigned long long)arg1 toType:(int)arg2;
- (void)moveRuleFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeRuleAtIndex:(unsigned long long)arg1;
- (void)addRule:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isGroupingColumnUidsEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)p_isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)ruleAtGroupLevel:(unsigned char)arg1;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
@property(readonly, nonatomic) NSArray *groupingColumns;
- (id)initWithGroupingColumns:(id)arg1;
- (id)init;

@end
