//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CKAudioProgressView;

__attribute__((visibility("hidden")))
@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell
{
    CKAudioProgressView *_audioPlaybackView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) CKAudioProgressView *audioPlaybackView; // @synthesize audioPlaybackView=_audioPlaybackView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)formattedCreatedDateTextFromDate:(id)arg1;
- (id)formattedDurationTextForAsset:(id)arg1;
- (void)configureWithAttachmentItem:(id)arg1;

@end

