//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/_NUImageRenderResult.h>

#import <NeutrinoCore/NUBufferRenderResult-Protocol.h>

@class NSString, NUImageGeometry, NURegion;
@protocol NUBufferImage, NURenderStatistics;

@interface _NUBufferRenderResult : _NUImageRenderResult <NUBufferRenderResult>
{
    id <NUBufferImage> _image;
}

@property(retain) id <NUBufferImage> image; // @synthesize image=_image;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NUImageGeometry *geometry;
@property(readonly) NSUInteger hash;
@property(readonly) NURegion *region;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end
