//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject
{
    NSMutableDictionary *_personMap;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *_personMap; // @synthesize _personMap;
// - (void).cxx_destruct;
- (void)_dumpAllPersons;
- (id)personForUniqueID:(id)arg1;
- (void)unregisterPerson:(id)arg1;
- (void)registerPerson:(id)arg1;

@end

