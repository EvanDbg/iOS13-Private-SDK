//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPOffscreenColumn-Protocol.h>

@class TPPageController;
@protocol TSWPFlowInfo;

__attribute__((visibility("hidden")))
@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn>
{
    NSUInteger _pageIndex;
    id <TSWPFlowInfo> _flowInfo;
    TPPageController *_pageController;
}

// - (void).cxx_destruct;
- (id)p_targetLastHint;
- (id)p_targetFirstHint;
- (void)trimToCharIndex:(NSUInteger)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(NSUInteger)arg3 removeAutoNumberFootnoteCount:(NSUInteger)arg4;
@property(readonly, nonatomic) BOOL terminatedByBreak;
@property(readonly, nonatomic) BOOL lastLineIsEmptyAndHasListLabel;
@property(readonly, nonatomic) NSUInteger nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) NSRange * anchoredRange;
- (NSUInteger)startAnchoredCharIndex;
@property(readonly, nonatomic) NSRange * range;
- (NSUInteger)startCharIndex;
- (id)initWithPageIndex:(NSUInteger)arg1 pageController:(id)arg2 flowInfo:(id)arg3;
- (id)initWithPageIndex:(NSUInteger)arg1 pageController:(id)arg2;

@end

