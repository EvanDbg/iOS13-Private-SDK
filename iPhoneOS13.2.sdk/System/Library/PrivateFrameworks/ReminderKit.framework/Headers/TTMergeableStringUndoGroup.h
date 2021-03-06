//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/TTMergeableStringUndoCommand-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand>
{
    NSMutableDictionary *_seen;
    NSMutableArray *_commands;
}

@property(retain, nonatomic) NSMutableArray *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) NSMutableDictionary *seen; // @synthesize seen=_seen;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (BOOL)hasTopoIDsThatCanChange;
// - (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
// - (BOOL)addSeenRange:(struct TopoIDRange)arg1;
- (void)addCommand:(id)arg1;
- (void)closeGroup;
- (id)init;

@end

