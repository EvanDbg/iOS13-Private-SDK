//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface FCMockURLProtocol : NSURLProtocol
{
}

+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)URLForError:(id)arg1;
+ (id)URLForData:(id)arg1 mimeType:(id)arg2;
- (void)stopLoading;
- (void)startLoading;

@end

