//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUICardKitProviderSupport/CRKIdentifiedCardSectionViewProviding-Protocol.h>

@class NSArray, NSString;
@protocol CRCard;

@interface SCKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>
{
    id <CRCard> _card;
    NSArray *_viewConfigurations;
}

@property(readonly, nonatomic) id <CRCard> card; // @synthesize card=_card;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
@property(readonly, nonatomic) NSArray *viewConfigurations; // @synthesize viewConfigurations=_viewConfigurations;
- (id)initWithCard:(id)arg1;

@end

