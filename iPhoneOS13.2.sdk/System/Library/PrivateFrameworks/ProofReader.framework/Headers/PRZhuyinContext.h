//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProofReader/PRAutocorrectionContext.h>

@class NSMutableArray;

@interface PRZhuyinContext : PRAutocorrectionContext
{
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    char _buffer;
    NSUInteger _syllableLengthArray;
    void _connection;
    NSUInteger _length;
    NSUInteger _lengthBeforeApostrophes;
    NSUInteger _startingPoint;
    NSUInteger _lastIndexes[4];
    NSUInteger _nextIndexes[2];
    NSUInteger _startIndex;
    NSUInteger _endIndex;
    BOOL _lastSyllableIsPartial;
}

- (id)removedModifications;
- (id)addedModifications;
- (id)currentModifications;
- (void)reset;
- (void)removeNumberOfInputCharacters:(NSUInteger)arg1;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void )arg2 geometryData:(id)arg3;
- (void)_filterModifications;
- (void)_addDeletions;
- (void)_addInsertions;
- (void)_addReplacements;
- (void)_addTranspositions;
- (void)_advanceIndexes;
- (void)_removeModificationsAndMoveStartingPoint;
- (id)description;
- (void)dealloc;
- (id)init;

@end

