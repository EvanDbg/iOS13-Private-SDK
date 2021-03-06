//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHStyleVending-Protocol.h>

@class NSArray, NSDictionary, NSString, TSCHChartInfo, TSCHChartModel, TSPObjectContext, TSSPropertySet, TSSStyle;

@protocol TSCHStyleOwning <NSObject, TSCHStyleVending>
- (NSArray *)defaultProperties;
- (NSArray *)swapTuplesForParagraphStyleMutations:(NSDictionary *)arg1 forReferencingProperty:(int)arg2;
- (NSArray *)swapTuplesForMutations:(NSDictionary *)arg1 forImport:(BOOL)arg2;
- (TSSStyle *)nonstyle;
- (TSSStyle *)style;
- (TSPObjectContext *)context;
- (TSCHChartModel *)model;
- (TSCHChartInfo *)chartInfo;
- (id)valueForProperty:(int)arg1;
- (NSString *)operationPropertyNameFromGenericProperty:(int)arg1;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id )arg2;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float )arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int )arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;

@optional
- (void)propertiesWereMutated:(TSSPropertySet *)arg1;
@end

