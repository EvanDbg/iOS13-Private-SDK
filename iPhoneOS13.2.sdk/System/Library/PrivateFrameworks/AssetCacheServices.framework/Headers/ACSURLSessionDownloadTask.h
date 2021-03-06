//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetCacheServices/ACSURLSessionTask.h>

@class NSError, NSURLRequest;

@interface ACSURLSessionDownloadTask : ACSURLSessionTask
{
    id /* CDUnknownBlockType */ __clientLocationCompletionHandler;
    NSURLRequest *__resumedOriginalRequest;
    NSError *__deferredLinkError;
}

@property(retain) NSError *_deferredLinkError; // @synthesize _deferredLinkError=__deferredLinkError;
@property(retain) NSURLRequest *_resumedOriginalRequest; // @synthesize _resumedOriginalRequest=__resumedOriginalRequest;
@property(copy) id /* CDUnknownBlockType */ _clientLocationCompletionHandler; // @synthesize _clientLocationCompletionHandler=__clientLocationCompletionHandler;
// - (void).cxx_destruct;
- (BOOL)_isUpload;
- (id)initWithNSURLDownloadTaskCreator:(CDUnknownBlockType)arg1 initialRequest:(id)arg2 forSession:(id)arg3;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSURLRequest *originalRequest;

@end

