//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

@interface CPRMTable : NSObject <NSFastEnumeration>
{
    NSMutableArray *_matrix;
    NSUInteger _elementCount;
    NSMutableArray *_rowFirstElements;
    NSMutableArray *_columnFirstElements;
    CGPDFLayout _layout;
    CGPDFNode _tableRoot;
    BOOL _rowOrder;
}

@property BOOL rowOrder; // @synthesize rowOrder=_rowOrder;
- (CGRect)bounds;
// - (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)columnAtIndex:(NSUInteger)arg1;
- (id)rowAtIndex:(NSUInteger)arg1;
- (NSUInteger)columns;
- (NSUInteger)rows;
@property(readonly) CGPDFPage page; // @dynamic page;
- (CGPDFLayout )layout;
- (void)dealloc;
- (void)matrixDealloc;
- (id)initWithRoot:(CGPDFNode )arg1 layout:(CGPDFLayout )arg2;
- (void)dump;

@end

