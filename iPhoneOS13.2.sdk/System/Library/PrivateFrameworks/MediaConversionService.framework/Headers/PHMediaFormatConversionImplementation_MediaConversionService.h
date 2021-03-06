//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaConversionService/PHMediaFormatConversionImplementation-Protocol.h>

@class NSSet, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PHMediaFormatConversionImplementation_MediaConversionService : NSObject <PHMediaFormatConversionImplementation>
{
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    PAImageConversionServiceClient *_imageConversionServiceClient;
}

@property(retain) PAImageConversionServiceClient *imageConversionServiceClient; // @synthesize imageConversionServiceClient=_imageConversionServiceClient;
@property(retain) PAVideoConversionServiceClient *videoConversionServiceClient; // @synthesize videoConversionServiceClient=_videoConversionServiceClient;
// - (void).cxx_destruct;
- (void)applyCommonOptionsFromRequest:(id)arg1 toOptions:(id)arg2;
- (void)performImageConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)applyCommonOptionsFromVideoRequest:(id)arg1 toOptions:(id)arg2;
- (id)submitSinglePassVideoConversionRequest:(id)arg1 destination:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)submitNonSinglePassVideoConversionRequest:(id)arg1 destination:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performVideoConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSSet *ut_objectsToBeDeallocatedWithReceiver;
- (void)dealloc;
- (id)init;
@property(readonly) long long transferBehaviorUserPreference;

@end

