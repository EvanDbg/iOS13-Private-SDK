//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTCellSpec;

__attribute__((visibility("hidden")))
@interface TSTTableDataCellSpec : TSTTableDataObject
{
    TSTCellSpec *_cellSpec;
}

+ (id)objectWithCellSpec:(id)arg1 refCount:(unsigned int)arg2;
- (id)cellSpec;
// - (void).cxx_destruct;
- (void)setCellSpec:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)estimateByteSize;
- (NSUInteger)hash;
//  (void)encodeToArchive:(struct TableDataList_ListEntry )arg1 key:(unsigned int)arg2 archiver:(id)arg3;
//  (void)loadFromArchive:(const struct TableDataList_ListEntry )arg1 unarchiver:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initObjectWithCellSpec:(id)arg1 refCount:(unsigned int)arg2;

@end

