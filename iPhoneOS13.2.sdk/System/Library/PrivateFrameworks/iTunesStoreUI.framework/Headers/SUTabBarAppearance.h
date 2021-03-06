//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary, UIImage;

@interface SUTabBarAppearance : NSObject <NSCopying>
{
    UIImage *_backgroundImage;
    UIImage *_dividerImage;
    UIImage *_selectedDividerImage;
    UIImage *_selectionIndicatorImage;
    double _tabBarButtonSpacing;
    double _tabBarButtonWidth;
    NSMutableDictionary *_titleTextAttributes;
}

@property(nonatomic) double tabBarButtonWidth; // @synthesize tabBarButtonWidth=_tabBarButtonWidth;
@property(nonatomic) double tabBarButtonSpacing; // @synthesize tabBarButtonSpacing=_tabBarButtonSpacing;
@property(retain, nonatomic) UIImage *selectionIndicatorImage; // @synthesize selectionIndicatorImage=_selectionIndicatorImage;
@property(retain, nonatomic) UIImage *selectedDividerImage; // @synthesize selectedDividerImage=_selectedDividerImage;
@property(retain, nonatomic) UIImage *dividerImage; // @synthesize dividerImage=_dividerImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (id)titleTextAttributesForState:(NSUInteger)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(NSUInteger)arg2;
- (void)enumerateTitleTextAttributesUsingBlock:(CDUnknownBlockType)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;

@end

