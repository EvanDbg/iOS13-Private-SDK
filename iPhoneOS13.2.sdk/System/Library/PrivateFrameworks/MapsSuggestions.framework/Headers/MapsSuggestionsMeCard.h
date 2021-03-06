//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface MapsSuggestionsMeCard : NSObject <NSCopying>
{
    NSDictionary *_perCNPostalAddress;
    BOOL _hasCorrected;
    BOOL _hasGeocoded;
    BOOL _hasHomeOrWork;
    NSArray *_shortcutsForHome;
    NSArray *_shortcutsForWork;
    NSArray *_hiddenShortcutsForHome;
    NSArray *_hiddenShortcutsForWork;
    NSArray *_shortcutsForAll;
    NSArray *_mapItemsForHome;
    NSArray *_mapItemsForWork;
    NSArray *_mapItemsForAll;
}

@property(readonly, nonatomic) BOOL hasHomeOrWork; // @synthesize hasHomeOrWork=_hasHomeOrWork;
@property(readonly, nonatomic) BOOL hasGeocoded; // @synthesize hasGeocoded=_hasGeocoded;
@property(readonly, nonatomic) BOOL hasCorrected; // @synthesize hasCorrected=_hasCorrected;
@property(readonly, nonatomic) NSArray *mapItemsForAll; // @synthesize mapItemsForAll=_mapItemsForAll;
@property(readonly, nonatomic) NSArray *mapItemsForWork; // @synthesize mapItemsForWork=_mapItemsForWork;
@property(readonly, nonatomic) NSArray *mapItemsForHome; // @synthesize mapItemsForHome=_mapItemsForHome;
@property(readonly, nonatomic) NSArray *shortcutsForAll; // @synthesize shortcutsForAll=_shortcutsForAll;
@property(readonly, nonatomic) NSArray *hiddenShortcutsForWork; // @synthesize hiddenShortcutsForWork=_hiddenShortcutsForWork;
@property(readonly, nonatomic) NSArray *hiddenShortcutsForHome; // @synthesize hiddenShortcutsForHome=_hiddenShortcutsForHome;
@property(readonly, nonatomic) NSArray *shortcutsForWork; // @synthesize shortcutsForWork=_shortcutsForWork;
@property(readonly, nonatomic) NSArray *shortcutsForHome; // @synthesize shortcutsForHome=_shortcutsForHome;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMeCard:(id)arg1;
- (id)shortcutForCNPostalAddressIdentifier:(id)arg1;
- (NSDictionary )shortcutsPerCNPostalAddress;
- (id)initWithShortcuts:(NSArray *)arg1 hasCorrected:(BOOL)arg2 hasGeocoded:(BOOL)arg3;
- (id)initWithShortcuts:(NSArray *)arg1 perCNPostalAddress:(NSDictionary )arg2 hasCorrected:(BOOL)arg3 hasGeocoded:(BOOL)arg4;
- (id)initWithHomes:(NSArray *)arg1 works:(NSArray *)arg2 hiddenHomes:(NSArray *)arg3 hiddenWorks:(NSArray *)arg4 all:(NSArray *)arg5 perCNPostalAddress:(NSDictionary )arg6 hasCorrect:(BOOL)arg7 hasGeocoded:(BOOL)arg8;

@end

