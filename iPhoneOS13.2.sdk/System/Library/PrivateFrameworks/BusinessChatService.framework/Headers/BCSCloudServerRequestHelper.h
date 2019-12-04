//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BCSCloudServerBodyProvider, BCSCloudServerRouteProvider;

__attribute__((visibility("hidden")))
@interface BCSCloudServerRequestHelper : NSObject
{
    id <BCSCloudServerRouteProvider> _cloudServerRouteProvider;
    id <BCSCloudServerBodyProvider> _cloudServerBodyProvider;
}

@property(retain, nonatomic) id <BCSCloudServerBodyProvider> cloudServerBodyProvider; // @synthesize cloudServerBodyProvider=_cloudServerBodyProvider;
@property(retain, nonatomic) id <BCSCloudServerRouteProvider> cloudServerRouteProvider; // @synthesize cloudServerRouteProvider=_cloudServerRouteProvider;
- (id)baseBusinessItemJSONPostRequestWithTimeout:(double)arg1 cloudServerRequestType:(long long)arg2;
- (void)addEdgeCachingToRequest:(id)arg1 requestType:(id)arg2 requestIdentifier:(id)arg3;
- (id)bloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 timeout:(double)arg3;
- (id)configItemRequestWithTimeout:(double)arg1;
- (id)businessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 timeout:(double)arg3;
- (id)businessItemRequestWithBizID:(id)arg1 timeout:(double)arg2;
- (id)initWithRouteProvider:(unsigned long long)arg1 bodyProvider:(unsigned long long)arg2;

@end
