//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKBarcodeStickerView, PKPass;

@interface PKBarcodeTableViewCell : UITableViewCell
{
    PKPass *_pass;
    PKBarcodeStickerView *_barcodeStickerView;
    CGSize _maximumBarcodeSize;
}

@property(nonatomic) CGSize maximumBarcodeSize; // @synthesize maximumBarcodeSize=_maximumBarcodeSize;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPass:(id)arg1;

@end

