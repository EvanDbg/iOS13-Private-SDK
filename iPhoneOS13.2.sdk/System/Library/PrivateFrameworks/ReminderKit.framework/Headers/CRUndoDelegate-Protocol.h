//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol CRUndoDelegate <NSObject>
- (BOOL)wantsUndoCommands;
- (void)addUndoCommandsForObject:(id)arg1 block:(void (^)(id))arg2;
@end

