//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPUIGraphicalAttachment.h>

__attribute__((visibility("hidden")))
@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment
{
}

- (id)description;
// - (void)saveToArchive:(struct FormulaEqualsTokenAttachmentArchive )arg1 archiver:(id)arg2;
// - (void)loadFromArchive:(const struct FormulaEqualsTokenAttachmentArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (BOOL)wantsSelectionAtPoint:(CGPoint)arg1;
- (double)baselineOffset;
- (CGSize)size;
- (id)rendererForAttachment;

@end

