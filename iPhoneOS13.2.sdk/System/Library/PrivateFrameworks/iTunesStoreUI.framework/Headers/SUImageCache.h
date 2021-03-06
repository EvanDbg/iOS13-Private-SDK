//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLRUDictionary;

@interface SUImageCache : NSObject
{
    CPLRUDictionary *_dictionary;
}

- (void)removeAllCachedImages;
- (id)imageForURL:(id)arg1 dataProvider:(id)arg2;
- (void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3;
- (void)dealloc;
- (id)initWithMaximumCapacity:(long long)arg1;
- (id)init;

@end

