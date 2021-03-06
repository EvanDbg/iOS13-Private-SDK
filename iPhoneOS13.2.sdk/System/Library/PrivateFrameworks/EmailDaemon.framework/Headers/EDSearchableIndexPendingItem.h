//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol EDIndexableItem;

@interface EDSearchableIndexPendingItem : NSObject
{
    NSString *_identifier;
    NSMutableArray *_items;
    id <EDIndexableItem> _referenceItem;
}

@property(readonly, nonatomic) id <EDIndexableItem> referenceItem; // @synthesize referenceItem=_referenceItem;
@property(copy, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL requiresPreprocessing;
@property(readonly, nonatomic) NSUInteger estimatedSizeInBytes;
- (long long)compare:(id)arg1;
- (void)addPendingItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithItem:(id)arg1;

@end

