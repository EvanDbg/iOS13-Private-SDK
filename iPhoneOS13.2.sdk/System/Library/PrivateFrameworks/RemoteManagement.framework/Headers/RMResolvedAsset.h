//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, RMAsset;

@interface RMResolvedAsset : NSObject
{
    RMAsset *_asset;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) RMAsset *asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1 error:(id)arg2;

@end
