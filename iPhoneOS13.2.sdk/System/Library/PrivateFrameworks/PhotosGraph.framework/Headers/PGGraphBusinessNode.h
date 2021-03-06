//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGGraphPortraitNamedEntity-Protocol.h>

@class NSSet, NSString, PPNamedEntity;

@interface PGGraphBusinessNode : PGGraphNode <PGGraphPortraitNamedEntity>
{
}

- (id)associatedNodesForRemoval;
- (id)keywordDescription;
@property(readonly, nonatomic) NSSet *publicEventNodes;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long venueCapacity;
@property(readonly, copy, nonatomic) NSSet *businessCategories;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) PPNamedEntity *pg_namedEntity;

@end

