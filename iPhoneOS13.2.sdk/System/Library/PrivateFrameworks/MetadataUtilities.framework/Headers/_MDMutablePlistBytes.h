//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetadataUtilities/_MDPlistBytes.h>

@interface _MDMutablePlistBytes : _MDPlistBytes
{
    int _currentUID;
    int _parentSize;
    int _parentCount;
    int _parentUIDs;
//     struct __CFDictionary _ptrUIDMap;
    NSUInteger _fillPtr;
    NSUInteger _limitPtr;
    NSUInteger _rleTagPtr;
    NSUInteger _curContainer;
}

// + (struct __MDPlistBytes )createDictionaryPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
// + (struct __MDPlistBytes )createArrayPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithCapacity:(NSUInteger)arg1 useMalloc:(BOOL)arg2;
// - (id)initWithCapacity:(NSUInteger)arg1 useMalloc:(BOOL)arg2 zone:(struct _malloc_zone_t )arg3;

@end

