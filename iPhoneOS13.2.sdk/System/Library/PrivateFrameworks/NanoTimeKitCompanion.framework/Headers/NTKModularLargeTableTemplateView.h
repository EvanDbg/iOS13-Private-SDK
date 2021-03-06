//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularLargeColumnTemplateView.h>

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKModularLargeTableTemplateView : NTKModularLargeColumnTemplateView
{
    UIView<NTKComplicationImageView> *_headerImageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_row1Column1Label;
    NTKColoringLabel *_row1Column2Label;
    NTKColoringLabel *_row2Column1Label;
    NTKColoringLabel *_row2Column2Label;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
// - (void).cxx_destruct;
- (void)_update;
- (void)_enumerateColumnRowsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_layoutContentView;
- (id)initWithFrame:(CGRect)arg1;

@end

