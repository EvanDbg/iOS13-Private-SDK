//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UIDictationPhrase : NSObject
{
    NSString *_text;
    NSArray *_alternativeInterpretations;
    long long _style;
}

+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;
+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSArray *alternativeInterpretations; // @synthesize alternativeInterpretations=_alternativeInterpretations;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (void)dealloc;
- (id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;

@end
