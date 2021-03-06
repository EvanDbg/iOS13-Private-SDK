//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAbstractReviewTableViewCell.h>

@class CNAvatarView, IMChat;

__attribute__((visibility("hidden")))
@interface CKReviewLargeConversationsTableViewCell : CKAbstractReviewTableViewCell
{
    IMChat *_chat;
    CNAvatarView *_avatarView;
}

+ (CGSize)leftHandSideViewSize;
+ (double)requestedHeight;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (id)leftHandSideView;
- (void)setModelObject:(id)arg1;

@end

