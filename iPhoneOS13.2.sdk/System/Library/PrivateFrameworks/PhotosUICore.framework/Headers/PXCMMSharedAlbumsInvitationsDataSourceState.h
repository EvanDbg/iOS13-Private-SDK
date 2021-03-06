//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, PHFetchResult;

@interface PXCMMSharedAlbumsInvitationsDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_sharedAlbums;
    NSDictionary *_invitationsBySharedAlbumObjectID;
}

@property(readonly, nonatomic) NSDictionary *invitationsBySharedAlbumObjectID; // @synthesize invitationsBySharedAlbumObjectID=_invitationsBySharedAlbumObjectID;
@property(readonly, nonatomic) PHFetchResult *sharedAlbums; // @synthesize sharedAlbums=_sharedAlbums;
// - (void).cxx_destruct;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id )arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSharedAlbums:(id)arg1 invitationsBySharedAlbumObjectID:(id)arg2;

@end

