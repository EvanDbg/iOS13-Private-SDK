//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerCore/DOCTagRegistryDelegate-Protocol.h>

@class DOCTagRegistryICloudDataSource, NSMutableOrderedSet;

@interface DOCTagRegistry : NSObject <DOCTagRegistryDelegate>
{
    int _localStorageDidUpdateNotifyToken;
    BOOL _inBatchUpdate;
    BOOL _shouldSynchronizeAfterBatchUpdate;
    long long _tagSerialNumber;
    NSMutableOrderedSet *_userTags;
    NSMutableOrderedSet *_discoveredTags;
    DOCTagRegistryICloudDataSource *_iCloudDataSource;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DOCTagRegistryICloudDataSource *iCloudDataSource; // @synthesize iCloudDataSource=_iCloudDataSource;
@property(nonatomic) BOOL shouldSynchronizeAfterBatchUpdate; // @synthesize shouldSynchronizeAfterBatchUpdate=_shouldSynchronizeAfterBatchUpdate;
@property(retain, nonatomic) NSMutableOrderedSet *discoveredTags; // @synthesize discoveredTags=_discoveredTags;
@property(retain, nonatomic) NSMutableOrderedSet *userTags; // @synthesize userTags=_userTags;
@property(nonatomic) long long tagSerialNumber; // @synthesize tagSerialNumber=_tagSerialNumber;
@property(nonatomic) BOOL inBatchUpdate; // @synthesize inBatchUpdate=_inBatchUpdate;
// - (void).cxx_destruct;
- (void)synchronize;
- (BOOL)moveTag:(id)arg1 toIndex:(NSUInteger)arg2;
- (BOOL)replaceTag:(id)arg1 withTag:(id)arg2;
- (BOOL)canReplaceTag:(id)arg1 withTag:(id)arg2;
- (id)_memberTag:(id)arg1;
- (id)tagForName:(id)arg1;
- (void)removeTags:(id)arg1;
- (id)_setForTagType:(long long)arg1;
- (BOOL)insertTag:(id)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)addTag:(id)arg1;
- (BOOL)isValidNewTagName:(id)arg1;
- (id)_tagNameForComparing:(id)arg1;
- (id)_sanitizedTagName:(id)arg1;
- (BOOL)_canAddTag:(id)arg1;
- (void)addTag:(id)arg1 options:(long long)arg2;
- (void)addTags:(id)arg1 options:(long long)arg2;
- (void)removeAllTagsOfType:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

