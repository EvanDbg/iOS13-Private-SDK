//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIUndoTextOperation.h>

@class NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationTyping : _UIUndoTextOperation
{
    NSRange * _replacementRange;
    NSMutableAttributedString *_attributedString;
}

// - (void).cxx_destruct;
- (BOOL)supportsCoalescing;
- (void)undoRedo;
- (BOOL)coalesceAffectedRange:(NSRange *)arg1 replacementRange:(NSRange *)arg2 selectedRange:(NSRange *)arg3 textStorage:(id)arg4;
- (id)initWithAffectedRange:(NSRange *)arg1 inputController:(id)arg2 replacementRange:(NSRange *)arg3;

@end

