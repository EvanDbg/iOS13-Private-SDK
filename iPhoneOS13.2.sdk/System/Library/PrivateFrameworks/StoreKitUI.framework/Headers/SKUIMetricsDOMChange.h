//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SKUIMetricsDOMChange : NSObject <NSCopying>
{
    BOOL _fromDeferredMessage;
    double _buildStartTime;
    double _buildEndTime;
    double _renderStartTime;
    double _renderEndTime;
}

@property(nonatomic, getter=isFromDeferredMessage) BOOL fromDeferredMessage; // @synthesize fromDeferredMessage=_fromDeferredMessage;
@property(nonatomic) double renderEndTime; // @synthesize renderEndTime=_renderEndTime;
@property(nonatomic) double renderStartTime; // @synthesize renderStartTime=_renderStartTime;
@property(nonatomic) double buildEndTime; // @synthesize buildEndTime=_buildEndTime;
@property(nonatomic) double buildStartTime; // @synthesize buildStartTime=_buildStartTime;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithReportDomBuildTimesMessagePayload:(id)arg1;

@end

