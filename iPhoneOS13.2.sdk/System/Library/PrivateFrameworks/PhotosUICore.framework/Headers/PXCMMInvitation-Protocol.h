//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, PXAssetCollectionActionManager, PXCMMContext;
@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;

@protocol PXCMMInvitation <NSObject, PXMediaTypeAggregating>
@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset;
@property(readonly, nonatomic) id <PXCMMInvitationParticipant> owner;
@property(readonly, nonatomic) NSUInteger count;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long shareType;
- (void)acceptWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (PXCMMContext *)contextForActivityType:(NSUInteger)arg1;
@end

