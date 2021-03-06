//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardKit/SFResourceLoader-Protocol.h>

@class INUIImageLoader;
@protocol _CRKImageLoaderDelegate;

@interface _CRKImageLoader : NSObject <SFResourceLoader>
{
    INUIImageLoader *_imageLoader;
    BOOL _active;
    id <_CRKImageLoaderDelegate> _delegate;
}

+ (id)sharedInstanceWithInitialDelegate:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) __weak id <_CRKImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)resourceIdentifierForLocalImageType:(int)arg1;
- (void)_loadSFImageForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_unregisterWithSearchFoundaton;
- (void)_registerWithSearchFoundation;

@end

