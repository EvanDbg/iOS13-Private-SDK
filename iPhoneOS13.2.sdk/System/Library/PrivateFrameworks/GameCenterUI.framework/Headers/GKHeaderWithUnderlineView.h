//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSMutableDictionary, UIImageView, UIView;

@interface GKHeaderWithUnderlineView : UICollectionReusableView
{
    BOOL _underlineHasRightMargin;
    BOOL _isPinned;
    BOOL _didSetupConstraints;
    UIView *_underlineView;
    UIImageView *_shadowView;
    NSMutableDictionary *_metrics;
    NSArray *_gutterConstraints;
    double _leadingMargin;
    double _trailingMargin;
    UIView *_pinnedBackdropView;
}

+ (id)phoneMetrics;
+ (id)padMetrics;
+ (id)macMetrics;
+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) BOOL didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UIView *pinnedBackdropView; // @synthesize pinnedBackdropView=_pinnedBackdropView;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(retain, nonatomic) NSArray *gutterConstraints; // @synthesize gutterConstraints=_gutterConstraints;
@property(nonatomic) BOOL isPinned; // @synthesize isPinned=_isPinned;
@property(retain, nonatomic) NSMutableDictionary *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) BOOL underlineHasRightMargin; // @synthesize underlineHasRightMargin=_underlineHasRightMargin;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *underlineView; // @synthesize underlineView=_underlineView;
- (BOOL)allowsVibrancy;
- (void)pinningStateChangedTo:(BOOL)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (BOOL)drawsUnderline;
- (void)updateGutterConstraints;
- (void)establishConstraints;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

