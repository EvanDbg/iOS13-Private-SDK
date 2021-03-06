//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <MobileTimer/MTSerializer-Protocol.h>

@class NSMutableArray;

@interface MTStorageWriter : NSCoder <MTSerializer>
{
    NSMutableArray *_stack;
}

@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
// - (void).cxx_destruct;
- (id)encodedDictionary;
- (id)_dictionaryForProtocolObject:(id)arg1;
- (id)_serializingProtocol;
- (void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_encodeObject:(id)arg1 forKey:(id)arg2;
- (id)init;
@property(readonly, nonatomic) NSUInteger mtType;
@property(readonly, nonatomic) NSCoder *mtCoder;

@end

