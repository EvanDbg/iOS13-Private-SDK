//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NetworkCursor : NSObject
{
//    struct vector<unsigned long, std::__1::allocator<unsigned long>> _nodeIndexes;
    NSUInteger _stateType;
}

+ (id)cursorByAddingNodeIndex:(NSUInteger)arg1 toCursor:(id)arg2;
@property(nonatomic) NSUInteger stateType; // @synthesize stateType=_stateType;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)isCompletePattern;
- (NSUInteger)nodeIndexAtPosition:(NSUInteger)arg1;
- (NSUInteger)nodeIndexCount;
- (void)addNodeIndex:(NSUInteger)arg1 withStateType:(NSUInteger)arg2;
- (id)init;

@end

