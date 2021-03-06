//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUICardKitProviderSupport/CRKCardSectionViewControllerDelegate-Protocol.h>
#import <SearchUICardKitProviderSupport/CRKCardViewControllerProviding-Protocol.h>
#import <SearchUICardKitProviderSupport/SearchUICardViewDelegate-Protocol.h>
#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface SUICKPCardViewControllerProvider : NSObject <CRKCardSectionViewControllerDelegate, SearchUIFeedbackDelegate, CRKCardViewControllerProviding, SearchUICardViewDelegate>
{
    NSMutableDictionary *_cardsByCardSectionIdentifiers;
    NSMutableDictionary *_cardViewControllersByCardIdentifiers;
    NSMutableArray *_pendingDismissalCommands;
    long long _preferredPunchoutIndex;
    NSMutableDictionary *_feedbackDelegateDemultiplexersByCardIdentifiers;
}

@property(retain, nonatomic) NSMutableDictionary *feedbackDelegateDemultiplexersByCardIdentifiers; // @synthesize feedbackDelegateDemultiplexersByCardIdentifiers=_feedbackDelegateDemultiplexersByCardIdentifiers;
// - (void).cxx_destruct;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (CGSize)boundingSizeForCardSectionViewController:(id)arg1;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
- (BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
- (BOOL)_askDelegateToPerformReferentialCommand:(id)arg1 forCardSection:(id)arg2;
- (id)_cardViewControllerForCardSection:(id)arg1;
- (void)presentViewController:(id)arg1;
- (id)customViewControllerForCardSection:(id)arg1;
- (void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3;
- (NSUInteger)displayPriorityForCard:(id)arg1;
- (id)cardViewControllerForCard:(id)arg1;
- (id)init;

@end

