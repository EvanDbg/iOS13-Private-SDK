//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class QLThumbnailGenerationRequest, QLThumbnailGenerator;

@interface DOCIconThumbnailRequest : DOCThumbnailRequest
{
    QLThumbnailGenerationRequest *_request;
    QLThumbnailGenerator *_thumbnailGenerator;
}

// - (void).cxx_destruct;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
- (id)initWithItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;

@end

