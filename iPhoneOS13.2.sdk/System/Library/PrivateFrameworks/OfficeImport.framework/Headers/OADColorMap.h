//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorMap : NSObject
{
    NSMutableDictionary *mMappings;
}

// - (void).cxx_destruct;
- (void)addDefaultMappings:(BOOL)arg1;
- (id)description;
- (BOOL)isEmpty;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)addMapping:(int)arg1 index:(int)arg2;
- (int)mappingForIndex:(int)arg1;
- (id)init;

@end

