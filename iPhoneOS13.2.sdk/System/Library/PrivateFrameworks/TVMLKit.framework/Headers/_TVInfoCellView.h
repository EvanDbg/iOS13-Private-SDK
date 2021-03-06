//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVInfoCellView : UIView <TVAppTemplateImpressionable>
{
    BOOL _headerOnLeading;
    UIView *_headerContentView;
    NSArray *_dataViews;
    double _headerWidth;
    double _headerMaxWidth;
    double _headerMinWidth;
    double _normalizedHeaderWidth;
    UIEdgeInsets _headerMargin;
}

+ (id)infoCellViewWithElement:(id)arg1 existingView:(id)arg2;
@property(nonatomic) double normalizedHeaderWidth; // @synthesize normalizedHeaderWidth=_normalizedHeaderWidth;
@property(nonatomic) UIEdgeInsets headerMargin; // @synthesize headerMargin=_headerMargin;
@property(nonatomic) double headerMinWidth; // @synthesize headerMinWidth=_headerMinWidth;
@property(nonatomic) double headerMaxWidth; // @synthesize headerMaxWidth=_headerMaxWidth;
@property(nonatomic) double headerWidth; // @synthesize headerWidth=_headerWidth;
@property(nonatomic) BOOL headerOnLeading; // @synthesize headerOnLeading=_headerOnLeading;
@property(retain, nonatomic) NSArray *dataViews; // @synthesize dataViews=_dataViews;
@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
// - (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1 withHeaderWidth:(double)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)minimumHeaderWidth;

@end

