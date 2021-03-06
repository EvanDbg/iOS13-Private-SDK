//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKPaymentHeroImageManifest, PKPaymentWebService;
@protocol PKPaymentHeroImageControllerDelegate;

@interface PKPaymentHeroImageController : NSObject
{
    PKPaymentWebService *_webService;
    NSString *_primaryImageIdentifier;
    NSArray *_featuredImages;
    PKPaymentHeroImageManifest *_manifest;
    id <PKPaymentHeroImageControllerDelegate> _delegate;
    long long _watchSize;
}

+ (CGSize)cardArtSizeForWatchViewSize:(CGSize)arg1;
+ (id)defaultImages;
@property(nonatomic) long long watchSize; // @synthesize watchSize=_watchSize;
@property(nonatomic) id <PKPaymentHeroImageControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKPaymentHeroImageManifest *manifest; // @synthesize manifest=_manifest;
@property(copy, nonatomic) NSArray *featuredImages; // @synthesize featuredImages=_featuredImages;
@property(copy, nonatomic) NSString *primaryImageIdentifier; // @synthesize primaryImageIdentifier=_primaryImageIdentifier;
// - (void).cxx_destruct;
- (CGSize)cardArtSizeForSize:(CGSize)arg1;
- (void)downloadImages:(id)arg1;
- (id)featuredDefaultImages;
- (id)filterImages:(id)arg1;
- (id)featuredImageIdentifiers;
- (id)initWithManifest:(id)arg1 webService:(id)arg2;

@end

