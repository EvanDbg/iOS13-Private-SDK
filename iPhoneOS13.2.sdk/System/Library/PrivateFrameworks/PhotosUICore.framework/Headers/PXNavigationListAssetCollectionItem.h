//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNavigationListItem.h>

@class PHAssetCollection;

@interface PXNavigationListAssetCollectionItem : PXNavigationListItem
{
    BOOL _draggable;
    BOOL _renamable;
    PHAssetCollection *_collection;
    long long _indentationLevel;
}

@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(readonly, nonatomic) PHAssetCollection *collection; // @synthesize collection=_collection;
- (BOOL)isRenamable;
- (BOOL)isDraggable;
// - (void).cxx_destruct;
- (id)representedObject;
- (id)glyphImageName;
- (id)imageNameForIdentifier;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAssetCollection:(id)arg1 itemCount:(long long)arg2;
//  (const struct __CFString )aggregateDictionaryKey;
- (id)viewControllerForCollectionWithGridPresentation:(id)arg1;

@end

