//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <QuickLookThumbnailing/QLThumbnailHost-Protocol.h>

@class NSOperationQueue;
@protocol QLThumbnailSurfaceGeneratorProtocol;

@interface QLThumbnailHostContext : NSExtensionContext <QLThumbnailHost>
{
    NSOperationQueue *_thumbnailGenerationConcurrenQueue;
    id <QLThumbnailSurfaceGeneratorProtocol> _ioSurfaceGenerator;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) __weak id <QLThumbnailSurfaceGeneratorProtocol> ioSurfaceGenerator; // @synthesize ioSurfaceGenerator=_ioSurfaceGenerator;
@property(retain, nonatomic) NSOperationQueue *thumbnailGenerationConcurrenQueue; // @synthesize thumbnailGenerationConcurrenQueue=_thumbnailGenerationConcurrenQueue;
// - (void).cxx_destruct;
- (void)ioSurfaceWithSize:(CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(NSUInteger)arg4 withItem:(id)arg5 ioSurfaceGenerator:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)protocolServiceWithErrorHandler:(CDUnknownBlockType)arg1;

@end

