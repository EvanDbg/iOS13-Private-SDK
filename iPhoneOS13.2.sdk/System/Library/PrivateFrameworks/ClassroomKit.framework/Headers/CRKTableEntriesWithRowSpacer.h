//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTableEntries-Protocol.h>

@protocol CRKTableEntries, CRKTableEntry;

@interface CRKTableEntriesWithRowSpacer : NSObject <CRKTableEntries>
{
    id <CRKTableEntries> mOrigin;
    NSUInteger mIndex;
    id <CRKTableEntry> mSpacerEntry;
}

// - (void).cxx_destruct;
- (id)entryAtRow:(NSUInteger)arg1 column:(NSUInteger)arg2;
- (NSUInteger)columnCount;
- (NSUInteger)rowCount;
- (id)initWithOrigin:(id)arg1 index:(NSUInteger)arg2 spacerEntry:(id)arg3;

@end

