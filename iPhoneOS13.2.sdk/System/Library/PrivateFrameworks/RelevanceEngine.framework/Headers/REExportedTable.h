//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface REExportedTable : NSObject
{
    NSMutableArray *_data;
    _Bool _sortable;
    NSArray *_header;
}

@property(nonatomic) _Bool sortable; // @synthesize sortable=_sortable;
@property(retain, nonatomic) NSArray *header; // @synthesize header=_header;
- (void)addRow:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long rowsCount;
- (id)init;

@end
