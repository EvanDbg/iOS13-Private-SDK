//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITransientLexiconManaging-Protocol.h>

@interface TITransientLexiconManager : NSObject <TITransientLexiconManaging>
{
//    struct _LXLexicon _namedEntityLexiconRef;
//    struct _LXLexicon _namedEntityPhraseLexiconRef;
    BOOL _lexiconsLoaded;
}

//  (id)getEntries:(struct _LXLexicon )arg1;
+ (id)sharedInstance;
+ (id)singletonInstance;
+ (void)setSharedTITransientLexiconManager:(id)arg1;
- (void)debugLogEntities;
// property(readonly, nonatomic) const struct _LXLexicon namedEntityPhraseLexicon;
// property(readonly, nonatomic) const struct _LXLexicon namedEntityLexicon;
- (void)getOnce:(CDUnknownBlockType)arg1;
- (BOOL)searchForWordCaseInsensitive:(id)arg1;
- (BOOL)searchForWord:(id)arg1;
//  (BOOL)searchHelper:(struct _LXLexicon )arg1 forWord:(struct __CFString )arg2 caseSensitive:(BOOL)arg3;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (void)handleMemoryPressureLevel:(NSUInteger)arg1 excessMemoryInBytes:(NSUInteger)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)loadLexicons;
- (void)dealloc;
- (id)init;

@end

