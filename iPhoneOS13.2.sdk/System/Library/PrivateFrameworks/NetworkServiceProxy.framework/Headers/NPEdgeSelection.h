//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkServiceProxy/EdgeSelection.h>

@class NPWaldo, NSDate, NSString;

@interface NPEdgeSelection : EdgeSelection
{
    NPWaldo *_waldoInfo;
    NSString *_bestEdge;
    NSUInteger _bestEdgeRTT;
    NSUInteger _bestEdgeProbedRTT;
    NSString *_nextBestEdge;
    NSUInteger _nextBestEdgeRTT;
    NSDate *_probeDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *probeDate; // @synthesize probeDate=_probeDate;
@property NSUInteger nextBestEdgeRTT; // @synthesize nextBestEdgeRTT=_nextBestEdgeRTT;
@property(retain) NSString *nextBestEdge; // @synthesize nextBestEdge=_nextBestEdge;
@property NSUInteger bestEdgeProbedRTT; // @synthesize bestEdgeProbedRTT=_bestEdgeProbedRTT;
@property NSUInteger bestEdgeRTT; // @synthesize bestEdgeRTT=_bestEdgeRTT;
@property(retain) NSString *bestEdge; // @synthesize bestEdge=_bestEdge;
@property(nonatomic) __weak NPWaldo *waldoInfo; // @synthesize waldoInfo=_waldoInfo;
// - (void).cxx_destruct;
- (id)copyEdgeSelectionTelemetry;
- (id)description;
- (void)updateEdgeSelection:(NSUInteger)arg1;
- (BOOL)shouldProbeForEdgeSelection:(id)arg1 edgeRank:(long long )arg2 edgeIndex:(long long )arg3 bestEdgeLabel:(id )arg4;
- (void)trainEdgeSelection:(id)arg1 edgeRank:(NSUInteger)arg2 rtt:(NSUInteger)arg3;
- (void)getBestEdgeFromEdgeSelection;
- (id)initWithWaldo:(id)arg1 signature:(id)arg2 interfaceType:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

