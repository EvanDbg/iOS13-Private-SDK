//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNListInstructionContents.h>

#import <Navigation/MNInstructionContents-Protocol.h>

@class NSArray;

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents>
{
    NSArray *_mergeFormats;
    NSArray *_continueFormats;
    NSArray *_maneuverFormats;
}

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3;
@property(retain, nonatomic) NSArray *maneuverFormats; // @synthesize maneuverFormats=_maneuverFormats;
@property(retain, nonatomic) NSArray *continueFormats; // @synthesize continueFormats=_continueFormats;
@property(retain, nonatomic) NSArray *mergeFormats; // @synthesize mergeFormats=_mergeFormats;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasServerContent;
- (id)instructionForStage:(NSUInteger)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;
- (id)_instructionsForFormats:(id)arg1;
@property(readonly, nonatomic) long long context;
- (id)description;
- (void)_populateFromStep:(id)arg1;

@end

