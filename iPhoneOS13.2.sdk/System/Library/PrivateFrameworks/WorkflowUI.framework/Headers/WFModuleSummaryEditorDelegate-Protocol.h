//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSTextAttachment, WFModuleSummaryEditor, WFVariable;
@protocol WFParameterState;

@protocol WFModuleSummaryEditorDelegate <NSObject>
- (void)summaryEditorDidFinish:(WFModuleSummaryEditor *)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(NSTextAttachment *)arg3;
- (void)summaryEditorDidRequestTextEntry:(WFModuleSummaryEditor *)arg1;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 didCommitParameterState:(id <WFParameterState>)arg2;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 didStageParameterState:(id <WFParameterState>)arg2;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 willUpdateVariable:(WFVariable *)arg2;
@end

