//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol PKPGSVSectionHeaderView, PKPGSVSectionSubheaderView;

@interface PKPGSVSectionHeaderContext : NSObject
{
    UIView<PKPGSVSectionHeaderView> *_headerView;
    UIView<PKPGSVSectionSubheaderView> *_subheaderView;
    UIEdgeInsets _headerMargins;
    UIEdgeInsets _subheaderMargins;
}

+ (id)createUpdatedHeaderContextForGroupStackView:(id)arg1 passType:(NSUInteger)arg2 currentContext:(id)arg3 allowHeader:(BOOL)arg4 allowSubheader:(BOOL)arg5;
@property(nonatomic) UIEdgeInsets subheaderMargins; // @synthesize subheaderMargins=_subheaderMargins;
@property(readonly, nonatomic) UIView<PKPGSVSectionSubheaderView> *subheaderView; // @synthesize subheaderView=_subheaderView;
@property(nonatomic) UIEdgeInsets headerMargins; // @synthesize headerMargins=_headerMargins;
@property(readonly, nonatomic) UIView<PKPGSVSectionHeaderView> *headerView; // @synthesize headerView=_headerView;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) double totalHeight;
- (double)_subheaderHeight;
- (double)_headerHeight;
- (CGRect)boundsForSubheaderViewInContainerFrame:(CGRect)arg1;
- (CGRect)boundsForHeaderViewInContainerFrame:(CGRect)arg1;
- (CGPoint)positionForSubheaderViewInContainerFrame:(CGRect)arg1;
- (CGPoint)positionForHeaderViewInContainerFrame:(CGRect)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)initWithHeaderView:(id)arg1 headerMargins:(UIEdgeInsets)arg2 subheaderView:(id)arg3 subheaderMargins:(UIEdgeInsets)arg4;
- (id)init;

@end

