//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessagePartChatItem.h>

@class NSAttributedString;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem
{
    NSAttributedString *_subject;
}

@property(readonly, copy, nonatomic) NSAttributedString *subject; // @synthesize subject=_subject;
// - (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange *)arg4 subject:(id)arg5 visibleAssociatedMessageChatItems:(id)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange *)arg4 subject:(id)arg5;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange *)arg4 subject:(id)arg5 shouldDisplayLink:(BOOL)arg6;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (void)setShouldDisplayRichLink:(BOOL)arg1;
- (BOOL)shouldDisplayRichLink;

@end

