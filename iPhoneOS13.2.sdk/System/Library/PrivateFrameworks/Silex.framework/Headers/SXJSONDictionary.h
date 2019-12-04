//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>



@class NSArray, NSDictionary, NSMutableDictionary;

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration>
{
    id /* block */ _objectValueClassBlock;
    id /* block */ _valueClassBlock;
    NSDictionary *_json;
    NSMutableDictionary *_objects;
    NSArray *_keys;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(readonly, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(readonly, nonatomic) id /* block */ valueClassBlock; // @synthesize valueClassBlock=_valueClassBlock;
@property(readonly, nonatomic) id /* block */ objectValueClassBlock; // @synthesize objectValueClassBlock=_objectValueClassBlock;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)jsonDictionary;
- (id)NSDictionary;
- (id)allObjects;
- (id)allKeys;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithValueClassBlock:(id /* block */)arg1 objectValueClassBlock:(id /* block */)arg2 purgeBlock:(id /* block */)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5;

@end
