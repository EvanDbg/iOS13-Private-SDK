//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSNumber, NSString, TSTUIDRectRef;

__attribute__((visibility("hidden")))
@interface TSTFormulaPredArg : NSObject <NSCopying>
{
    int _type;
    id _objcData;
    RefTypeHolder_a8d05c9a _baseCellRef;
//     struct TSCERelativeCellRef _relativeCellRef;
    BOOL _hasRelativeCellRef;
    TSTUIDRectRef *_uidRectRef;
//     struct TSCECategoryRef _categoryRef;
//     struct TSUModelCellCoord _hostCellCoord;
//     struct TSUPreserveFlags _preserveFlags;
    union {
        BOOL _boolValue;
        struct {
            double _value;
            int _units;
        } _duration;
    } _union;
}

+ (id)defaultPredicateArg;
// @property(nonatomic) struct TSUModelCellCoord hostCellCoord; // @synthesize hostCellCoord=_hostCellCoord;
@property(retain, nonatomic) TSTUIDRectRef *uidRectRef; // @synthesize uidRectRef=_uidRectRef;
@property(readonly, nonatomic) BOOL hasRelativeCellRef; // @synthesize hasRelativeCellRef=_hasRelativeCellRef;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
// - (void).cxx_destruct;
// - (struct TSCEFormulaCreator)formulaCreatorForPredArgAtHostCell:(const struct TSCECellRef )arg1 calcEngine:(id)arg2;
- (id)description;
// - (BOOL)isEqual:(id)arg1 atHostCoord:(struct TSUModelCellCoord)arg2;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) int durationUnits;
@property(nonatomic) double durationValue;
- (id)initWithDuration:(double)arg1 units:(int)arg2;
- (void)setBaseCellReference:(id)arg1 preserveColumn:(BOOL)arg2 preserveRow:(BOOL)arg3;
- (void)setBaseCellReference:(id)arg1;
- (id)cellReference;
- (id)initWithBaseCellReference:(id)arg1 preserveColumn:(BOOL)arg2 preserveRow:(BOOL)arg3;
- (void)setBaseCellRef:(const RefTypeHolder_a8d05c9a )arg1 preserveColumn:(BOOL)arg2 preserveRow:(BOOL)arg3;
// - (void)setBaseCellRef:(const RefTypeHolder_a8d05c9a )arg1 preserveFlags:(const struct TSUPreserveFlags )arg2;
- (void)setBaseCellRef:(const RefTypeHolder_a8d05c9a )arg1;
// - (struct TSCECellRef)cellRefForHostCoord:(struct TSUModelCellCoord)arg1;
- (const RefTypeHolder_a8d05c9a )baseCellRef;
// - (id)initWithBaseCellRef:(const RefTypeHolder_a8d05c9a )arg1 preserveFlags:(const struct TSUPreserveFlags )arg2;
// @property(nonatomic) struct TSCECategoryRef categoryRef;
@property(readonly, nonatomic) BOOL hasCategoryRef;
// - (id)initWithCategoryRef:(const struct TSCECategoryRef )arg1;
- (void)setUIDRectRef:(id)arg1;
- (BOOL)hasUidRectRef;
- (id)initWithUIDRectRef:(id)arg1;
// - (void)setRelativeCellRef:(const struct TSCERelativeCellRef )arg1;
// - (const struct TSCERelativeCellRef )relativeCellRef;
// - (id)initWithRelativeCellRef:(const struct TSCERelativeCellRef )arg1;
@property(copy, nonatomic) NSString *string;
- (id)initWithString:(id)arg1;
@property(retain, nonatomic) NSDate *date;
@property(readonly, nonatomic) BOOL preserveColumn;
@property(readonly, nonatomic) BOOL preserveRow;
// @property(nonatomic) struct TSUPreserveFlags preserveFlags;
- (id)initWithDate:(id)arg1;
@property(nonatomic) double numberValue;
@property(retain, nonatomic) NSNumber *number;
- (id)initWithNumber:(id)arg1;
- (id)initWithDouble:(double)arg1;
@property(nonatomic) BOOL boolValue;
- (id)initWithBool:(BOOL)arg1;
- (id)init;

@end

