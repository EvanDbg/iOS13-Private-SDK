//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_offers;
}

+ (id)_offerFullPath;
+ (id)_offerPath;
+ (id)defaultOfferManager;
@property(retain, nonatomic) NSArray *offers; // @synthesize offers=_offers;
// - (void).cxx_destruct;
- (void)_setOffers:(id)arg1;
- (id)_offers;
- (id)_connection;
- (void)clearOffers:(CDUnknownBlockType)arg1;
- (void)fetchOffers:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveOffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

