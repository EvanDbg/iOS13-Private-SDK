//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFActionSetSuggestionItemProvider, HFItem;

@interface HUSceneSuggestionsItemManager : HFItemManager
{
    HFItem *_addCustomSceneItem;
    HFActionSetSuggestionItemProvider *_suggestionItemProvider;
}

@property(retain, nonatomic) HFActionSetSuggestionItemProvider *suggestionItemProvider; // @synthesize suggestionItemProvider=_suggestionItemProvider;
@property(retain, nonatomic) HFItem *addCustomSceneItem; // @synthesize addCustomSceneItem=_addCustomSceneItem;
- (id)_currentSectionIdentifiers;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;

@end
