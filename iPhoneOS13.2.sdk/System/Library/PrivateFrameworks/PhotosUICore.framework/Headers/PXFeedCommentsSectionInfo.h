//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeedSectionInfo.h>

@interface PXFeedCommentsSectionInfo : PXFeedSectionInfo
{
    BOOL __hasLikes;
}

@property(nonatomic, setter=_setHasLikes:) BOOL _hasLikes; // @synthesize _hasLikes=__hasLikes;
- (BOOL)isMine;
- (NSUInteger)assetsCount;
- (id)assets;
- (long long)indexOfItemWithComment:(id)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (BOOL)containsAsset:(id)arg1;
- (void)getCommentCount:(out NSUInteger )arg1 likeCount:(out NSUInteger )arg2;
- (id)likesForItemAtIndex:(long long)arg1;
- (id)commentTextForItemAtIndex:(long long)arg1;
- (id)commentForItemAtIndex:(long long)arg1;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (BOOL)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (id)cloudFeedCommentsEntry;
- (long long)sectionType;

@end

