//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMResolvedAsset.h>

@class NSURL;

@interface RMResolvedFileAsset : RMResolvedAsset
{
    NSURL *_downloadedURL;
}

@property(readonly, nonatomic) NSURL *downloadedURL; // @synthesize downloadedURL=_downloadedURL;
// - (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 downloadedURL:(id)arg2 error:(id)arg3;

@end

