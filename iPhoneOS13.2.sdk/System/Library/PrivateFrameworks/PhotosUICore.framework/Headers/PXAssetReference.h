//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedObjectReference.h>

#import <PhotosUICore/PXAssetReferenceProtocol-Protocol.h>

@protocol PXDisplayAsset, PXDisplayAssetCollection;

@interface PXAssetReference : PXSectionedObjectReference <PXAssetReferenceProtocol>
{
}

@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection;
@property(readonly, nonatomic) id <PXDisplayAsset> asset;
// property(readonly, nonatomic) struct PXSimpleIndexPath simpleIndexPath;

@end

