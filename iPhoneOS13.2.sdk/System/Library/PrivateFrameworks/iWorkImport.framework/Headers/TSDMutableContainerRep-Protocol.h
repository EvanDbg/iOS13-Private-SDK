//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDContainerRep-Protocol.h>

@class NSArray, NSObject, TSDRep;
@protocol TSDMutableContainerInfo;

@protocol TSDMutableContainerRep <TSDContainerRep>
@property(readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
- (void)replaceChildRep:(TSDRep *)arg1 with:(TSDRep *)arg2;
- (void)removeChildRep:(TSDRep *)arg1;
- (void)insertChildRep:(TSDRep *)arg1 above:(TSDRep *)arg2;
- (void)insertChildRep:(TSDRep *)arg1 below:(TSDRep *)arg2;
- (void)insertChildRep:(TSDRep *)arg1 atIndex:(NSUInteger)arg2;
- (void)addChildRep:(TSDRep *)arg1;
- (void)setChildReps:(NSArray *)arg1;
@end

