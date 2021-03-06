//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRandomNumberGenerator;

@interface ICRandomTextGenerator : NSObject
{
    NSUInteger _language;
    ICRandomNumberGenerator *_randomNumberGenerator;
}

+ (id)sentencePunctuationForLanguage:(NSUInteger)arg1 endOfParagraph:(BOOL)arg2;
+ (BOOL)hasSpacesBetweenWordsForLanguage:(NSUInteger)arg1;
+ (id)wordsForLanguage:(NSUInteger)arg1;
+ (id)loadWordsForLanguage:(NSUInteger)arg1;
@property(retain, nonatomic) ICRandomNumberGenerator *randomNumberGenerator; // @synthesize randomNumberGenerator=_randomNumberGenerator;
@property(nonatomic) NSUInteger language; // @synthesize language=_language;
// - (void).cxx_destruct;
- (id)generateMinSentences:(NSUInteger)arg1 maxSentences:(NSUInteger)arg2 minWords:(NSUInteger)arg3 maxWords:(NSUInteger)arg4;
- (id)generateWordsWithMinLength:(NSUInteger)arg1;
- (id)generateMinWords:(NSUInteger)arg1 maxWords:(NSUInteger)arg2;
- (id)generateWords:(NSUInteger)arg1 minLength:(NSUInteger)arg2;
- (id)paragraph;
- (id)sentence;
- (id)lineOfText;
- (id)word;
@property(readonly, nonatomic) BOOL isRightToLeftLanguage;
- (id)initWithRandomNumberGenerator:(id)arg1;

@end

