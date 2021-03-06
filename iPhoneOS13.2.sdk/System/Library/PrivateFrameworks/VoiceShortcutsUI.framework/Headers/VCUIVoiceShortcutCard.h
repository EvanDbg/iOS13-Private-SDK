//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Cards/CRBasicCard.h>

@class INIntent, INIntentResponse, NSArray, NSString;

@interface VCUIVoiceShortcutCard : CRBasicCard
{
    NSString *_shortcutIdentifier;
    INIntent *_intent;
    INIntentResponse *_intentResponse;
    NSArray *_sectionCommands;
}

@property(readonly, nonatomic) NSArray *sectionCommands; // @synthesize sectionCommands=_sectionCommands;
@property(readonly, nonatomic) INIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) NSString *shortcutIdentifier; // @synthesize shortcutIdentifier=_shortcutIdentifier;
// - (void).cxx_destruct;
- (void)loadCardWithContent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadCardWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)asynchronous;
- (id)cardIdentifier;
- (id)initWithShortcutIdentifier:(id)arg1 intent:(id)arg2 intentResponse:(id)arg3 commands:(id)arg4;

@end

