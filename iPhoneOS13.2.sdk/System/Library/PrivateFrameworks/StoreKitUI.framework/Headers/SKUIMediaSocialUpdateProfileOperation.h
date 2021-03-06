//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, NSMutableDictionary, NSNumber, NSString, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    NSString *_entityType;
    NSNumber *_identifier;
    NSLock *_lock;
    NSMutableDictionary *_parameters;
    id /* CDUnknownBlockType */ _outputBlock;
}

// - (void).cxx_destruct;
- (id)_requestBodyWithError:(id )arg1;
- (id)_requestWithError:(id )arg1;
- (id)_imageDictionaryFromPhotoUpload:(id)arg1;
- (void)main;
- (void)setValue:(id)arg1 forProfileField:(id)arg2;
@property(copy) id /* CDUnknownBlockType */ outputBlock;
@property(copy) NSNumber *identifier;
@property(copy) NSString *entityType;
- (id)initWithClientContext:(id)arg1;

@end

