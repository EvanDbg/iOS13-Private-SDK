//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilitySmallImageTemplateView : NTKUtilityCircularComplicationView
{
    BOOL _needsLayoutContent;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setNeedsLayoutContent;
- (void)_updateForTemplateChange;
- (void)_layoutContentView;
- (id)initWithFrame:(CGRect)arg1;

@end

