//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSNumber, NSString, SUScriptSegmentedControl;

@interface SUScriptStorePageViewController : SUScriptViewController
{
    NSArray *_initialURLStrings;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (BOOL)copyURLStrings:(id )arg1 forValue:(id)arg2;
// - (void).cxx_destruct;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_storePageViewController;
- (void)_setValue:(id)arg1 forScriptPropertyKey:(id)arg2;
- (id)_pathForWebArchiveWithIdentifier:(id)arg1 inDirectory:(id)arg2;
- (BOOL)_isSegmentedControlValid:(id)arg1;
- (id)_copyURLsFromURLStrings:(id)arg1;
- (void)_setURLs:(id)arg1;
@property(readonly) long long indicatorStyleWhite;
@property(readonly) long long indicatorStyleGray;
@property(retain) NSString *userInfo;
@property(retain) id URLs;
@property(retain) NSNumber *timeoutInterval;
@property id showsVerticalScrollIndicator;
@property id showsHorizontalScrollIndicator;
@property BOOL showsBackgroundShadow;
@property id shouldShowFormAccessory;
@property BOOL shouldInvalidateForLowMemory;
@property BOOL shouldLoadProgressively;
@property(retain) SUScriptSegmentedControl *segmentedControl;
@property BOOL scrollingEnabled;
@property(retain) id placeholderBackgroundStyle;
@property id loadsWhenHidden;
@property(retain) id loadingTextShadowColor;
@property(retain) id loadingTextColor;
@property long long loadingIndicatorStyle;
@property id inputViewObeysDOMFocus;
@property BOOL flashesScrollIndicators;
@property BOOL doubleTapEnabled;
@property id alwaysDispatchesScrollEvents;
@property(readonly) id rootObject;
- (id)_className;
- (void)setScrollEdgeInsetsWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (id)saveWebArchiveWithIdentifier:(id)arg1 toDirectory:(id)arg2;
- (void)reloadWithCallback:(id)arg1;
- (id)loadWebArchiveWithIdentifier:(id)arg1 fromDirectory:(id)arg2;
- (void)setNativeViewController:(id)arg1;
- (id)newNativeViewController;
@property(readonly) NSArray *URLStrings;
- (void)applyURLStrings:(id)arg1 toViewController:(id)arg2;
- (id)initWithURLStrings:(id)arg1;
- (id)init;

@end

