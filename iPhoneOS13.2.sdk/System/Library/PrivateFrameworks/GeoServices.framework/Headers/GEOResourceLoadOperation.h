//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceLoadOperation-Protocol.h>


@class GEOApplicationAuditToken, GEOReportedProgress, NSData, NSMutableData, NSProgress, NSString, NSURL, NSURLSession, NSURLSessionTask;
@protocol GEORequestCounterTicket, OS_dispatch_queue, OS_os_log;

@interface GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation>
{
    NSURL *_url;
    NSURL *_proxyURL;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    id <GEORequestCounterTicket> _requestCounterTicket;
    NSMutableData *_data;
    _Bool _expectsPartialContent;
    GEOApplicationAuditToken *_auditToken;
    NSURL *_authProxyURL;
    struct os_unfair_lock_s _lock;
    _Bool _requiresWiFi;
    _Bool _preferDirectNetworking;
    GEOReportedProgress *_progress;
    NSObject<OS_os_log> *_log;
}

@property(nonatomic) _Bool preferDirectNetworking; // @synthesize preferDirectNetworking=_preferDirectNetworking;
@property(nonatomic) _Bool requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cancel;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;
@property(readonly) NSProgress *progress;
- (void)dealloc;
- (id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURL:(id)arg4 proxyURL:(id)arg5 log:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
