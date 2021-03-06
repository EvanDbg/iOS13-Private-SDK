//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol-Protocol.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport-Protocol.h>
#import <iWorkImport/TSCHStyleOwning-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSArray, NSString, TSCHChartAxisID, TSCHChartModel, TSUFastReadInvalidatingCache, TSULocale, TSUWeakReference;
@protocol TSCHStyleActAlike;

__attribute__((visibility("hidden")))
@interface TSCHChartAxis : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel *mChartModel;
    TSCHChartAxisID *mAxisID;
    id <TSCHStyleActAlike> mStyle;
    id <TSCHStyleActAlike> mNonStyle;
    NSUInteger mStyleIndex;
    NSUInteger mNonStyleIndex;
    TSUFastReadInvalidatingCache *mAnalysisCache;
    TSUFastReadInvalidatingCache *mInterceptCache;
    TSUFastReadInvalidatingCache *mMultiDataSetAnalysisCache;
    TSUWeakReference *mNonTransientCounterpart;
}

+ (id)defaultNumberFormat;
+ (id)axisForInfo:(id)arg1;
+ (id)paragraphStyleForLabelsFontForInfo:(id)arg1;
+ (tvec2_84d5962d)sizeOfSeriesLabelsForInfo:(id)arg1;
+ (tvec2_84d5962d)sizeOfSeriesLabelsForInfo:(id)arg1 onlyHeight:(BOOL)arg2;
+ (tvec2_84d5962d)sizeOfLabelsForInfo:(id)arg1 onlyHeight:(BOOL)arg2;
+ (unsigned char)styleOwnerPathType;
@property(readonly, nonatomic) TSCHChartModel *model; // @synthesize model=mChartModel;
@property(readonly, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
- (id)nonstyle;
- (id)style;
- (void)propertiesWereMutated:(id)arg1;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
- (id)context;
- (id)drawableInfo;
- (id)chartInfo;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id )arg2;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float )arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int )arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)defaultProperties;
- (id)p_genericToDefaultPropertyMap;
- (void)clearParent;
- (NSUInteger)axisIndex;
- (NSUInteger)nonStyleIndex;
- (NSUInteger)styleIndex;
- (void)setNonStyle:(id)arg1 index:(NSUInteger)arg2;
- (void)setStyle:(id)arg1 index:(NSUInteger)arg2;
- (id)formattedStringForSeries:(id)arg1 index:(NSUInteger)arg2 multiDataSetIndex:(NSUInteger)arg3;
- (void)updateAxisDateInterceptInAnalysis:(id)arg1;
- (NSUInteger)indexForSelectionPathLabelIndex:(NSUInteger)arg1;
- (NSUInteger)selectionPathLabelIndexForMultiDataSetIndex:(NSUInteger)arg1;
- (NSUInteger)selectionPathLabelIndexForIndex:(NSUInteger)arg1;
- (id)valueForFormattedString:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 index:(NSUInteger)arg2;
- (id)formattedStringForAxisValue:(id)arg1;
- (BOOL)supportsFormattedStringForInvalidValue;
- (id)inspectorStringForSeries:(id)arg1 index:(NSUInteger)arg2 value:(id)arg3;
- (id)p_dataFormatterForSeries:(id)arg1 index:(NSUInteger)arg2 onlyForValidValue:(BOOL)arg3;
- (id)dataFormatterForSeries:(id)arg1 index:(NSUInteger)arg2;
- (id)dataFormatter;
- (id)p_axisDataFormatterFromCurrentModel;
- (id)p_fixupNegativeStyleForDataFormatter:(id)arg1;
- (BOOL)editableFormatForValueStrings;
- (double )unitSpaceCenterValuesForSeries:(id)arg1 indexes:(NSRange *)arg2;
- (double)unitSpaceCenterValueForSeries:(id)arg1 index:(NSUInteger)arg2;
- (double)unitSpaceCenterValueForValue:(double)arg1;
- (double)unitSpaceCenterValueHalfOffset;
- (double)unitSpaceHalfOffsetForCountSpaceHalfOffset;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1 min:(double)arg2 count:(double)arg3;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double )unitSpaceValuesForSeries:(id)arg1 indexes:(NSRange *)arg2;
- (double)unitSpaceValueForSeries:(id)arg1 index:(NSUInteger)arg2;
- (double )unitSpaceValuesForSeries:(id)arg1 indexes:(NSRange *)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForSeries:(id)arg1 index:(NSUInteger)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(NSUInteger)arg3;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (void)updateMinMaxGridLocationsInAnalysis:(id)arg1;
- (id)gridValueAxisToModelValue:(double)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (double)currentDataSetModelMedian;
- (double)currentDataSetModelAverage;
- (double)currentDataSetModelMax;
- (double)currentDataSetModelMin;
- (double)modelMax;
- (double)modelMin;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (BOOL)shouldAnalyzeAxisValue:(double)arg1;
- (int)p_axisGridValueType;
- (BOOL)hasCustomFormatForGridValueType:(int)arg1;
- (id)customFormatForGridValueType:(int)arg1;
- (int)adjustedNumberFormatType;
- (int)gridValueType;
- (id)p_multiDataAxisAnalysisFromCurrentModel;
- (id)p_axisAnalysisFromCurrentModel;
- (id)p_interceptAnalysisFromCurrentModel;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)minorGridLocations;
- (id)majorGridLocations;
- (NSUInteger)p_count;
- (NSUInteger)p_rangeCount;
- (double)range;
- (double)max;
- (double)min;
- (double)axisInterceptPosition;
- (double)interceptForAxis:(id)arg1;
@property(readonly, nonatomic) long long currentAxisScaleSetting;
- (void)invalidateMultiDataSetAnalysis;
- (void)invalidateTransientState;
- (id)multiDataSetAnalysis;
- (id)analysis;
- (id)interceptAnalysis;
- (id)p_nonTransientCounterpart;
- (id)referenceLineWithUUID:(id)arg1;
- (id)referenceLineAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *referenceLines;
@property(readonly) BOOL supportsReferenceLines;
@property(readonly, nonatomic) TSULocale *locale;
@property(readonly) BOOL isRangeContinuous;
@property(readonly) BOOL isCategory;
- (void)dealloc;
- (void)p_setupMultiDataSetAnalysisCacheIfNeeded;
- (id)initWithAxisID:(id)arg1 model:(id)arg2;
- (tvec2_84d5962d)sizeOfLabelsForInfo:(id)arg1 enumerator:(id)arg2 onlyHeight:(BOOL)arg3;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;

@end

