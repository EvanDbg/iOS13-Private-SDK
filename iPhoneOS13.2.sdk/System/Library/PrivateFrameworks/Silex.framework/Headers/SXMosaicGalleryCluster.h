//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXMosaicGalleryCluster : NSObject
{
    NSArray *_items;
}

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)clusterIsEqualToTileTypes:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isClusterOfType:(int)arg1;
- (id)initWithItems:(id)arg1;

@end

