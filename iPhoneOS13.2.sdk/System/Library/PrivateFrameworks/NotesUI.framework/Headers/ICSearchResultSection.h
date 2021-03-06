//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface ICSearchResultSection : NSObject
{
    NSMutableOrderedSet *_searchResults;
    NSMutableDictionary *_identifierToSearchResult;
    NSMutableDictionary *_hiddenSearchResults;
}

@property(retain, nonatomic) NSMutableDictionary *hiddenSearchResults; // @synthesize hiddenSearchResults=_hiddenSearchResults;
@property(retain, nonatomic) NSMutableDictionary *identifierToSearchResult; // @synthesize identifierToSearchResult=_identifierToSearchResult;
@property(retain, nonatomic) NSMutableOrderedSet *searchResults; // @synthesize searchResults=_searchResults;
// - (void).cxx_destruct;
- (void)resetToSearchResults:(id)arg1;
- (void)addSearchResults:(id)arg1;
- (BOOL)removeSearchResultForIdentifier:(id)arg1 forHiding:(BOOL)arg2;
- (id)hiddenIdentifiers;
- (id)identifiers;
- (id)description;
- (id)init;

@end

