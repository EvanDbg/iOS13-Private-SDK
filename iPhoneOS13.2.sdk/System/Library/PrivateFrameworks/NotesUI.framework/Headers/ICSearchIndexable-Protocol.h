//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSSearchableItemAttributeSet, NSArray, NSData, NSDate, NSManagedObjectContext, NSManagedObjectID, NSString, NSURL;

@protocol ICSearchIndexable <NSObject>
- (CSSearchableItemAttributeSet *)userActivityContentAttributeSet;
- (CSSearchableItemAttributeSet *)searchableItemAttributeSet;
- (NSString *)searchDomainIdentifier;
- (NSArray *)authorsExcludingCurrentUser;
- (BOOL)isMovable;
- (BOOL)isHiddenFromSearch;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (NSUInteger)searchResultType;
- (NSUInteger)searchResultsSection;
- (NSDate *)modificationDate;
- (NSDate *)creationDate;
- (NSString *)contentIdentifier;
- (NSString *)searchIndexingIdentifier;
- (long long)visibilityTestingType;
- (NSManagedObjectID *)objectID;
- (NSManagedObjectContext *)managedObjectContext;

@optional
- (NSData *)dataForTypeIdentifier:(NSString *)arg1;
- (NSURL *)fileURLForTypeIdentifier:(NSString *)arg1;
@end

