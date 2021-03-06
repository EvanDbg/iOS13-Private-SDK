//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLGeneratorPredicateNode-Protocol.h>

@class NSArray;
@protocol EFSQLExpressable;

@interface EFSQLGeneratorComparisonPredicateNode : NSObject <EFSQLGeneratorPredicateNode>
{
    NSArray *_keypathGenerators;
    NSUInteger _predicateOperator;
    id <EFSQLExpressable> _constValue;
}

@property(readonly, nonatomic) id <EFSQLExpressable> constValue; // @synthesize constValue=_constValue;
@property(readonly, nonatomic) NSUInteger predicateOperator; // @synthesize predicateOperator=_predicateOperator;
@property(readonly, nonatomic) NSArray *keypathGenerators; // @synthesize keypathGenerators=_keypathGenerators;
// - (void).cxx_destruct;
- (void)traverseTreeWithAliasMap:(id)arg1;
- (id)sqlExpressableWithTableExpressions:(id)arg1;
- (id)initWithKeypathGenerators:(id)arg1 predicateOperator:(NSUInteger)arg2 constValue:(id)arg3;

@end

