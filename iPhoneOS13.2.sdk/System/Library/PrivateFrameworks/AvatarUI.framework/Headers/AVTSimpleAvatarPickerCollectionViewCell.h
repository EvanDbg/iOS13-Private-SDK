//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVTUIAnimatingImageView, NSUUID, UIView;

@interface AVTSimpleAvatarPickerCollectionViewCell : UICollectionViewCell
{
    BOOL _showSelectedState;
    NSUUID *_displaySessionUUID;
    NSUInteger _imageInsetSize;
    UIView *_selectionLayer;
    AVTUIAnimatingImageView *_imageView;
}

+ (double)imageInsetForInsetSize:(NSUInteger)arg1;
+ (CGPathRef)selectionPathInBounds:(CGRect)arg1;
+ (id)cellIdentifier;
@property(readonly, nonatomic) AVTUIAnimatingImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIView *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(nonatomic) BOOL showSelectedState; // @synthesize showSelectedState=_showSelectedState;
@property(nonatomic) NSUInteger imageInsetSize; // @synthesize imageInsetSize=_imageInsetSize;
@property(retain, nonatomic) NSUUID *displaySessionUUID; // @synthesize displaySessionUUID=_displaySessionUUID;
// - (void).cxx_destruct;
- (void)updateHighlightedState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateWithImage:(id)arg1 animated:(BOOL)arg2;
- (void)updateSelectionLayerOpacityAnimated:(BOOL)arg1;
- (BOOL)shouldShowSelectionLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

