//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet;

@protocol PGGraphUpdateInventory <NSObject>
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;
@property(readonly, nonatomic) NSSet *localIdentifiersOfPersonsToUpdate;
@property(readonly, nonatomic) NSSet *localIdentifiersOfPersonsToDelete;
@property(readonly, nonatomic) NSSet *localIdentifiersOfPersonsToInsert;
@property(readonly, nonatomic) NSSet *localIdentifiersOfHighlightsToUpdate;
@property(readonly, nonatomic) NSSet *localIdentifiersOfHighlightsToDelete;
@property(readonly, nonatomic) NSSet *localIdentifiersOfHighlightsToInsert;
@property(readonly, nonatomic) NSSet *localIdentifiersOfMomentsToUpdate;
@property(readonly, nonatomic) NSSet *localIdentifiersOfMomentsToDelete;
@property(readonly, nonatomic) NSSet *localIdentifiersOfMomentsToInsert;
@property(readonly, nonatomic) BOOL hasPersonsToUpdate;
@property(readonly, nonatomic) BOOL hasPersonsToDelete;
@property(readonly, nonatomic) BOOL hasPersonsToInsert;
@property(readonly, nonatomic) BOOL hasHighlightDayGroupsToInsert;
@property(readonly, nonatomic) BOOL hasHighlightsToUpdate;
@property(readonly, nonatomic) BOOL hasHighlightsToDelete;
@property(readonly, nonatomic) BOOL hasHighlightsToInsert;
@property(readonly, nonatomic) BOOL hasMomentsToUpdate;
@property(readonly, nonatomic) BOOL hasMomentsToDelete;
@property(readonly, nonatomic) BOOL hasMomentsToInsert;
@property(nonatomic) BOOL isResumingFullAnalysis;
@property(readonly, nonatomic) long long updateType;
- (NSSet *)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(NSUInteger)arg2 includeHighlightsToIngest:(BOOL)arg3;
- (NSSet *)momentsToProcessForMomentUpdateTypes:(NSUInteger)arg1 includeMomentsToIngest:(BOOL)arg2;
@end

