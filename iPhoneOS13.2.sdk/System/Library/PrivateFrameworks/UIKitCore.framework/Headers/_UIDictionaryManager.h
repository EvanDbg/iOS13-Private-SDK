//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDictionaryManager : NSObject
{
    NSArray *_availableDefinitionDictionaries;
}

+ (id)assetManager;
@property(readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;
- (_Bool)_isTTYEnabled;
- (id)_allAvailableDefinitionDictionaries;
- (id)_availableDictionaryAssets;
- (void)_downloadDictionaryAssetCatalog:(id /* block */)arg1;
- (id)_dictionaryAssetType;
- (id)_definitionValuesForTerm:(id)arg1;
- (_Bool)_hasDefinitionForTerm:(id)arg1;
- (id)init;

@end
