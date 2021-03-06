//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPIconPack : PBCodable <NSCopying>
{
    NSMutableArray *_atlas;
    NSMutableArray *_icons;
    unsigned int _identifier;
}

@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSMutableArray *atlas; // @synthesize atlas=_atlas;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)iconsAtIndex:(NSUInteger)arg1;
- (NSUInteger)iconsCount;
- (void)addIcons:(id)arg1;
- (void)clearIcons;
- (id)atlasAtIndex:(NSUInteger)arg1;
- (NSUInteger)atlasCount;
- (void)addAtlas:(id)arg1;
- (void)clearAtlas;
- (void)dealloc;

@end

