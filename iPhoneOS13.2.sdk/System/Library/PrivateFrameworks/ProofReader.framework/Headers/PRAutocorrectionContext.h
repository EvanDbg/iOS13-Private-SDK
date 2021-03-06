//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRAutocorrectionContext : NSObject
{
    NSUInteger _modificationMask;
}

+ (void)clearCaches;
+ (id)autocorrectionContextOfType:(NSUInteger)arg1;
- (double)validSequenceCorrectionThreshold;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (void)reset;
- (id)correction;
- (id)completions;
- (id)guesses;
- (id)prefixes;
- (id)removedModifications;
- (id)addedModifications;
- (id)currentModifications;
- (NSUInteger)modificationMask;
- (void)setModificationMask:(NSUInteger)arg1;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void )arg2 geometryData:(id)arg3;
- (void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2;

@end

