//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@protocol FCFeedTransforming;

@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming>
{
    id <FCFeedTransforming> _innerFilter;
}

@property(retain, nonatomic) id <FCFeedTransforming> innerFilter; // @synthesize innerFilter=_innerFilter;
// - (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)initWithFilterMethod:(NSUInteger)arg1 consumedArticleItems:(id)arg2 minimumTimeSinceFirstConsumedToFilter:(double)arg3 filterDate:(id)arg4 articleIDProvider:(CDUnknownBlockType)arg5 dateOfArticleIDConsumptionProvider:(CDUnknownBlockType)arg6 maxVersionConsumedProvider:(CDUnknownBlockType)arg7 dateOfMaxVersionConsumptionProvider:(CDUnknownBlockType)arg8;
- (id)init;

@end

