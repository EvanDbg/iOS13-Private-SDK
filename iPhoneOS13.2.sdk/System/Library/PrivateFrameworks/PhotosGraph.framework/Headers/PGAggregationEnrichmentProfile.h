//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGEnrichmentProfile-Protocol.h>

@class NSDictionary, NSString, PGDejunkerDeduperOptions, PGManager, PLDateRangeTitleGenerator;

@interface PGAggregationEnrichmentProfile : NSObject <PGEnrichmentProfile>
{
    BOOL _collectsDebugInfo;
    PGManager *_manager;
    PGDejunkerDeduperOptions *_extendedCurationOptions;
    PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
}

@property(retain, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator; // @synthesize dateRangeTitleGenerator=_dateRangeTitleGenerator;
@property(retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions; // @synthesize extendedCurationOptions=_extendedCurationOptions;
@property(nonatomic) BOOL collectsDebugInfo; // @synthesize collectsDebugInfo=_collectsDebugInfo;
@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
// - (void).cxx_destruct;
- (id)curationsWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)extendedCurationWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)keyAssetWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (NSUInteger)moodWithHighlightTailorContext:(id)arg1;
- (double)promotionScoreWithHighlightTailorContext:(id)arg1;
- (id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)arg1;
@property(readonly) NSDictionary *debugInfos;
- (id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)arg1;
- (id)curationOptionsForForHighlightTailorContext:(id)arg1;
- (id)titleWithHighlightTailorContext:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4;
- (id)highlightTailorContextForHighlight:(id)arg1;
- (BOOL)canUseLocationInformationForHighlightTailorContext:(id)arg1;
- (BOOL)canEnrichHighlight:(id)arg1 withOptions:(NSUInteger)arg2;
- (unsigned short)enrichmentStateWithHighlightTailorContext:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithManager:(id)arg1;

@end

