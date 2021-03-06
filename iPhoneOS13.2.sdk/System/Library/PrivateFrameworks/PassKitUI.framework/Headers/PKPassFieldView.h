//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKDiffView, PKPassColorProfile, PKPassField, PKPassFieldTemplate, UILabel;

@interface PKPassFieldView : UIView
{
    BOOL _needsRecalculation;
    CGSize _cachedSize;
    long long _background;
    PKPassField *_field;
    PKPassFieldTemplate *_fieldTemplate;
    PKPassColorProfile *_colorProfile;
    PKDiffView *_diffView;
    UILabel *_labelLabel;
    UILabel *_valueLabel;
}

+ (id)newViewForField:(id)arg1 fieldTemplate:(id)arg2;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) PKDiffView *diffView; // @synthesize diffView=_diffView;
@property(retain, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;
@property(retain, nonatomic) PKPassFieldTemplate *fieldTemplate; // @synthesize fieldTemplate=_fieldTemplate;
@property(retain, nonatomic) PKPassField *field; // @synthesize field=_field;
// - (void).cxx_destruct;
- (id)_valueAttributedStringForColorProfile:(id)arg1;
- (id)_labelAttributedStringForColorProfile:(id)arg1;
- (CGSize)_resizeMultiLineValueFontForAvailableSize:(CGSize)arg1;
- (BOOL)_shouldDisplayLabel;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)invalidateCachedFieldSize;
- (void)layoutSubviews;
- (void)setColorProfile:(id)arg1 background:(long long)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;

@end

