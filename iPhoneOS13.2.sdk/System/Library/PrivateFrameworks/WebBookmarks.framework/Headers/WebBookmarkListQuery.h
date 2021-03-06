//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol WebBookmarkInMemoryChangeFilter;

@interface WebBookmarkListQuery : NSObject
{
    NSString *_query;
    NSString *_queryWithOrderBy;
    NSString *_orderBy;
    NSArray *_titleWordPrefixes;
    NSArray *_titleWordPrefixesForInMemoryFiltering;
    NSString *_urlFilter;
    BOOL _includeHidden;
    BOOL _countShouldUseNumChildrenIfPossible;
    BOOL _customQuery;
    int _folderID;
    id <WebBookmarkInMemoryChangeFilter> _inMemoryFilter;
}

@property(retain, nonatomic) id <WebBookmarkInMemoryChangeFilter> inMemoryFilter; // @synthesize inMemoryFilter=_inMemoryFilter;
@property(readonly, nonatomic) int folderID; // @synthesize folderID=_folderID;
@property(readonly, nonatomic, getter=isCustomQuery) BOOL customQuery; // @synthesize customQuery=_customQuery;
// - (void).cxx_destruct;
- (void)_preparePrefixesFromNormalizedString:(id)arg1;
- (id)_normalizeUserTypedString:(id)arg1;
- (id)bookmarksInCollection:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:(int)arg1 collection:(id)arg2;
- (id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:(BOOL)arg1 bookmarksInFolder:(int)arg2 collection:(id)arg3;
- (int)countInCollection:(id)arg1;
- (id)_filterBookmarks:(id)arg1;
- (int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)arg1 collection:(id)arg2 skipCountingBookmarksThatAreDeletedInMemory:(BOOL)arg3;
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)arg1 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(BOOL)arg2;
- (long long)_listQueryType;
- (id)debugDescription;
- (id)initWithBookmarksWhere:(id)arg1 folderID:(int)arg2 orderBy:(id)arg3 usingFilter:(id)arg4;
- (id)initWithBookmarksWhere:(id)arg1 orderBy:(id)arg2 usingFilter:(id)arg3;
- (id)initWithFolderID:(int)arg1 inCollection:(id)arg2 includeHidden:(BOOL)arg3 usingFilter:(id)arg4;
- (id)init;

@end

