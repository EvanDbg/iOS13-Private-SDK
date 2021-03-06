//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface MTUIRenderedHandViewFactory : NSObject
{
    NSBundle *_resourcesBundle;
    NSString *_imagePath;
    CGPoint _offset;
    CGSize _scale;
    CGPDFPage _page;
    CGSize _viewSize;
    BOOL _allowCaching;
    NSMutableDictionary *_angleCache;
    NSUInteger _registeredClientsCount;
}

+ (void)flushAllCaches;
+ (void)unregisterForFactory:(id)arg1;
+ (id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 allowCaching:(BOOL)arg5;
+ (id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4;
@property(nonatomic) NSUInteger registeredClientsCount; // @synthesize registeredClientsCount=_registeredClientsCount;
@property(readonly, nonatomic) BOOL allowCaching; // @synthesize allowCaching=_allowCaching;
// - (void).cxx_destruct;
- (void)flushCache;
- (id)imageForAngle:(double)arg1 viewSize:(CGSize)arg2;
- (id)renderImageForAngle:(double)arg1 viewSize:(CGSize)arg2;
@property(readonly, nonatomic) NSString *key;
- (void)dealloc;
- (id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 allowCaching:(BOOL)arg5;

@end

