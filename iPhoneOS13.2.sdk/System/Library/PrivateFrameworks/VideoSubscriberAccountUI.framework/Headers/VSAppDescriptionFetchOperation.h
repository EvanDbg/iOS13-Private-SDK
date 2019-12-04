//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, NSSet, SSLookupRequest, VSAuditToken, VSOptional;

@interface VSAppDescriptionFetchOperation : VSAsyncOperation
{
    _Bool _needsProductProfile;
    _Bool _shouldPersonalizeResponse;
    _Bool _shouldPrecomposeIcon;
    NSSet *_appAdamIDs;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    SSLookupRequest *_lookupRequest;
    NSOperationQueue *_imageLoadingQueue;
    struct CGSize _preferredArtworkSize;
}

@property(retain, nonatomic) NSOperationQueue *imageLoadingQueue; // @synthesize imageLoadingQueue=_imageLoadingQueue;
@property(retain, nonatomic) SSLookupRequest *lookupRequest; // @synthesize lookupRequest=_lookupRequest;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(retain, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) _Bool shouldPrecomposeIcon; // @synthesize shouldPrecomposeIcon=_shouldPrecomposeIcon;
@property(nonatomic) _Bool shouldPersonalizeResponse; // @synthesize shouldPersonalizeResponse=_shouldPersonalizeResponse;
@property(nonatomic) _Bool needsProductProfile; // @synthesize needsProductProfile=_needsProductProfile;
@property(nonatomic) struct CGSize preferredArtworkSize; // @synthesize preferredArtworkSize=_preferredArtworkSize;
@property(copy, nonatomic) NSSet *appAdamIDs; // @synthesize appAdamIDs=_appAdamIDs;
- (void)cancel;
- (void)executionDidBegin;
- (id)_appDescriptionFromLookupResponse:(id)arg1 appAdamID:(id)arg2;
- (void)_handleLookupResponse:(id)arg1;
- (id)initWithAppAdamIDs:(id)arg1;
- (id)initWithAppAdamIDs:(id)arg1 preferredArtworkSize:(struct CGSize)arg2;
- (id)init;

@end
