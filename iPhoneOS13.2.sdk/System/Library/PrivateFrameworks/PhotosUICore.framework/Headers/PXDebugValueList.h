//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

@interface PXDebugValueList : NSObject <NSFastEnumeration>
{
    NSMutableArray *_debugValues;
}

@property(readonly, nonatomic) NSMutableArray *debugValues; // @synthesize debugValues=_debugValues;
// - (void).cxx_destruct;
// - (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (void)addValueWithLabel:(id)arg1 highlightedScore:(double)arg2;
- (void)addValueWithLabel:(id)arg1 stringValue:(id)arg2;
- (void)addValueWithLabel:(id)arg1 stringValue:(id)arg2 highlightStyle:(NSUInteger)arg3;
- (void)addValueWithLabel:(id)arg1 integerValue:(long long)arg2;
- (void)addValueWithLabel:(id)arg1 doubleValue:(double)arg2;
- (void)addValueWithLabel:(id)arg1 boolValue:(BOOL)arg2;
- (void)addValueWithLabel:(id)arg1 boolValue:(BOOL)arg2 positiveValue:(BOOL)arg3 positiveHighlighted:(BOOL)arg4 negativeHighlighted:(BOOL)arg5;
- (void)addValueWithLabel:(id)arg1;
- (id)init;

@end

