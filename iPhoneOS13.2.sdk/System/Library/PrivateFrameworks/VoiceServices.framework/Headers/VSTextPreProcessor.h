//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject
{
    NSArray *_rules;
    NSString *_languageID;
//    struct __CFStringTokenizer _tokenizer;
}

- (id)processedTextFromString:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2;

@end

