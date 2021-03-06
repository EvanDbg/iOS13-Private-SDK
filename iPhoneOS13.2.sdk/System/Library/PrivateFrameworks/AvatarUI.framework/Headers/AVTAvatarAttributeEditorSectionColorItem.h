//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSectionItem-Protocol.h>

@class AVTColorPreset, AVTCoreModelColor, NSString;

@interface AVTAvatarAttributeEditorSectionColorItem : NSObject <AVTAvatarAttributeEditorSectionItem>
{
    BOOL _selected;
    NSString *_localizedName;
    id /* CDUnknownBlockType */ _avatarUpdater;
    id /* CDUnknownBlockType */ _layerContentProvider;
    id /* CDUnknownBlockType */ _gradientProvider;
    AVTCoreModelColor *_color;
    AVTColorPreset *_skinColor;
}

@property(readonly, nonatomic) AVTColorPreset *skinColor; // @synthesize skinColor=_skinColor;
@property(readonly, nonatomic) AVTCoreModelColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ gradientProvider; // @synthesize gradientProvider=_gradientProvider;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ layerContentProvider; // @synthesize layerContentProvider=_layerContentProvider;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ avatarUpdater; // @synthesize avatarUpdater=_avatarUpdater;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithColor:(id)arg1 skinColor:(id)arg2 imageProvider:(id)arg3 avatarUpdater:(CDUnknownBlockType)arg4 selected:(BOOL)arg5;
- (id)initWithColor:(id)arg1 imageProvider:(id)arg2 avatarUpdater:(CDUnknownBlockType)arg3 selected:(BOOL)arg4;

@end

