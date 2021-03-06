//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCKeyValueStoreCoding-Protocol.h>

@class CKRecord, NSDate, NSString;

@protocol FCIssueReadingHistoryItem <NSObject, FCKeyValueStoreCoding, NSCopying, NSMutableCopying>
@property(readonly, copy, nonatomic) NSString *lastVisitedPageID;
@property(readonly, copy, nonatomic) NSString *lastVisitedArticleID;
@property(readonly, copy, nonatomic) NSDate *lastRemovedFromMyMagazinesDate;
@property(readonly, copy, nonatomic) NSDate *lastEngagedDate;
@property(readonly, copy, nonatomic) NSDate *lastBadgedDate;
@property(readonly, copy, nonatomic) NSDate *lastVisitedDate;
@property(readonly, copy, nonatomic) NSString *issueID;
@property(readonly, copy, nonatomic) NSString *identifier;
- (CKRecord *)asCKRecord;
@end

