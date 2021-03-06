//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ChatKit/CKConversationListCell-Protocol.h>

@class CKAvatarView, CKConversation, CKLabel, NSDate, NSObject, NSString, UIDateLabel, UIImageView, UILabel;
@protocol CKConversationListCellDelegate;

@interface CKConversationListCell : UITableViewCell <CKConversationListCell>
{
    UIDateLabel *_dateLabel;
    UILabel *_summaryLabel;
    UILabel *_summaryBlockedLabel;
    UIImageView *_chevronImageView;
    CKLabel *_fromLabel;
    BOOL _isPlaceholder;
    NSString *_searchSummaryText;
    NSString *_searchMessageGUID;
    NSDate *_searchMessageDate;
    BOOL _verified;
    BOOL _shouldHidePreviewSummary;
    NSObject<CKConversationListCellDelegate> *_delegate;
    CKConversation *_conversation;
}

+ (double)cellHeight;
+ (id)identifierForConversation:(id)arg1;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak NSObject<CKConversationListCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldHidePreviewSummary; // @synthesize shouldHidePreviewSummary=_shouldHidePreviewSummary;
@property(nonatomic) BOOL verified; // @synthesize verified=_verified;
@property(copy, nonatomic) NSString *searchSummaryText; // @synthesize searchSummaryText=_searchSummaryText;
@property(retain, nonatomic) NSDate *searchMessageDate; // @synthesize searchMessageDate=_searchMessageDate;
@property(copy, nonatomic) NSString *searchMessageGUID; // @synthesize searchMessageGUID=_searchMessageGUID;
// - (void).cxx_destruct;
- (void)updateBlockedSummaryLabelIfNeeded;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateForEditing:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithSearchResult:(id)arg1;
- (id)_makeSummaryAttributedStringWithText:(id)arg1;
- (id)summaryAttributedTextForBlockedConversationWithIcon:(BOOL)arg1;
- (void)updateSummaryTextForConversation:(id)arg1 fastPreview:(BOOL)arg2;
- (void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2;
- (BOOL)showingEditControl;
- (void)increaseContrastDidChange;
- (void)contentSizeCategoryDidChange;
- (void)_increaseContrastDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic) CKLabel *fromLabel;
@property(readonly, nonatomic) CKAvatarView *avatarView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

