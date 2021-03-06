//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject
{
    NSString *m_softwareLayout;
//    struct USet m_precomposedCharacterSet;
//    struct USet m_acceptableCharacterSet;
    NSMutableDictionary *m_compositionMaps;
    NSMutableDictionary *m_reverseCompositionMaps;
    BOOL _useRelaxedOVSPolicy;
    TIInputMode *_inputMode;
    long long _currentUserInterfaceIdiom;
}

+ (id)createSpecializationForInputMode:(id)arg1;
//  (struct USet )createAcceptableCharacterSetForKeyboardLocale:(id)arg1;
@property(nonatomic) BOOL useRelaxedOVSPolicy; // @synthesize useRelaxedOVSPolicy=_useRelaxedOVSPolicy;
@property(nonatomic) long long currentUserInterfaceIdiom; // @synthesize currentUserInterfaceIdiom=_currentUserInterfaceIdiom;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
// - (void).cxx_destruct;
- (id)replacementForDoubleSpace;
- (id)accentKeyStringForKeyboardState:(id)arg1;
- (id)layoutTags;
- (id)allAccentKeyStrings;
- (id)wordSeparator;
- (BOOL)shouldLearnLowercaseAtBeginningOfSentence;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)supportsLearning;
- (BOOL)shouldExtendPriorWord;
- (id)keyboardBehaviors;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1;
- (void)dealloc;
- (id)initWithInputMode:(id)arg1;
- (BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
- (id)dictionaryInputMode;
- (BOOL)allowsAutocorrectionOfValidWords;
- (BOOL)shouldConvertCandidateToExternal;
//  (const struct USet )precomposedCharacterSet;
- (BOOL)canHandleKeyHitTest;
- (BOOL)dictionaryUsesExternalEncoding;
//  (struct USet )createAcceptableCharacterSet;
- (BOOL)acceptsCharacter:(unsigned int)arg1;
- (NSUInteger)maxPriorWordTokensAfterTrimming;
- (id)terminatorsDeletingAutospace;
- (id)wordCharacters;
- (id)sentenceTrailingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)nonstopPunctuationCharacters;
- (id)internalStringToExternal:(id)arg1;
- (id)externalStringToInternal:(id)arg1;
- (NSDictionary )compositionMapForLayout:(id)arg1 reverse:(BOOL)arg2;
- (BOOL)doesComposeText;
//  (void)specializeInputManager:(struct TIInputManager )arg1 forLayoutState:(id)arg2;
//  (struct TIInputManager )createInputManager;

@end

