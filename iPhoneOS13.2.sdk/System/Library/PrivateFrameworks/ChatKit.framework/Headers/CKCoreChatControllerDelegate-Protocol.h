//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKComposition, CKConversation, CKCoreChatController;

@protocol CKCoreChatControllerDelegate <NSObject>
- (void)chatController:(CKCoreChatController *)arg1 didReportSpamForConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 didSendCompositionInConversation:(CKConversation *)arg2;
- (void)chatController:(CKCoreChatController *)arg1 willSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3;
@end

