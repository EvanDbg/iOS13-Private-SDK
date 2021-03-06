//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarListItem-Protocol.h>

@protocol AVTAvatarRecord;

@interface AVTAvatarListRecordItem : NSObject <AVTAvatarListItem>
{
    id <AVTAvatarRecord> _avatar;
}

@property(readonly, nonatomic) id <AVTAvatarRecord> avatar; // @synthesize avatar=_avatar;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 imageHandler:(CDUnknownBlockType)arg2 viewHandler:(CDUnknownBlockType)arg3;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 viewHandler:(CDUnknownBlockType)arg2;
- (id)initWithAvatar:(id)arg1;

@end

