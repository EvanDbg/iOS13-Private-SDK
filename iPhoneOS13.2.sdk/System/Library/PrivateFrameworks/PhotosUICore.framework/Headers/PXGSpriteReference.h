//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGSpriteIndexReferencing-Protocol.h>

@class NSString, PXGLayout;

@interface PXGSpriteReference : NSObject <PXGSpriteIndexReferencing>
{
    BOOL _isDynamic;
    unsigned int _spriteIndex;
    long long _layoutVersion;
    PXGLayout *_layout;
    id _objectReference;
}

@property(retain, nonatomic) id objectReference; // @synthesize objectReference=_objectReference;
@property(nonatomic) BOOL isDynamic; // @synthesize isDynamic=_isDynamic;
@property(nonatomic) __weak PXGLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long layoutVersion; // @synthesize layoutVersion=_layoutVersion;
@property(nonatomic) unsigned int spriteIndex; // @synthesize spriteIndex=_spriteIndex;
// - (void).cxx_destruct;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasObjectReference;
@property(readonly, nonatomic) BOOL isValid;
- (id)_init;
- (id)init;

@end

