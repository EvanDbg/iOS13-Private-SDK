//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol EMMutableDictionaryProtocol;

@interface EMListUnsubscribeDetector : NSObject
{
    id <EMMutableDictionaryProtocol> _persistentDictionary;
}

+ (id)receivingAccountFromMessage:(id)arg1;
// - (void).cxx_destruct;
- (BOOL)_shouldIgnoreMessageWithHeaders:(id)arg1;
- (id)_persistentKeyForHeaders:(id)arg1;
- (id)_senderString:(id)arg1;
- (id)_listIDString:(id)arg1;
- (id)_normalizedAddress:(id)arg1;
- (void)removeAllPersistedCommands;
- (void)ignoreCommand:(id)arg1;
- (void)acceptCommand:(id)arg1;
- (id)commandForMessage:(id)arg1;
- (id)init;
- (id)initWithMutableDictionary:(id)arg1;

@end

