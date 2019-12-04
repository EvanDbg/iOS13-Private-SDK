//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarKit/AVTStickerProp.h>

@class UIImage;

@interface AVTStickerImageProp : AVTStickerProp
{
    struct UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(_Bool)arg3 completionHandler:(id /* block */)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(struct UIImage *)arg1 size:(struct CGSize)arg2 scale:(struct SCNVector3)arg3 position:(struct SCNVector3)arg4 renderLast:(_Bool)arg5 orientToCamera:(_Bool)arg6 rotation:(struct SCNVector3)arg7 palettesDescriptions:(id)arg8 modifiers:(id)arg9;

@end
