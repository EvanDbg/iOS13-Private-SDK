//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTMergeableStringSelection : NSObject
{
    vector_0ee2fe7a _selectionRanges;
    NSUInteger _selectionAffinity;
}

@property(nonatomic) NSUInteger selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hasTopoIDsThatCanChange;
//  (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (vector_0ee2fe7a )selectionRanges;

@end

