//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCellLayoutOptions.h>

@class UIFont;

@interface HUGridSceneCellLayoutOptions : HUGridCellLayoutOptions
{
    double _iconInnerHorizontalMargin;
    double _titleInterLineSpacing;
    double _titleDescriptionLineSpacing;
    UIFont *_descriptionFont;
    double _cellHeight;
    NSUInteger _numberOfTitleLines;
}

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
@property(nonatomic) NSUInteger numberOfTitleLines; // @synthesize numberOfTitleLines=_numberOfTitleLines;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property(nonatomic) double titleDescriptionLineSpacing; // @synthesize titleDescriptionLineSpacing=_titleDescriptionLineSpacing;
@property(nonatomic) double titleInterLineSpacing; // @synthesize titleInterLineSpacing=_titleInterLineSpacing;
@property(nonatomic) double iconInnerHorizontalMargin; // @synthesize iconInnerHorizontalMargin=_iconInnerHorizontalMargin;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

