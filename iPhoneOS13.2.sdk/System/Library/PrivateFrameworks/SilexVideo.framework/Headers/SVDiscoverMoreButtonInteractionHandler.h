//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVInteractionHandling-Protocol.h>

@protocol SVDiscoverMoreInteractionHandling;

@interface SVDiscoverMoreButtonInteractionHandler : NSObject <SVInteractionHandling>
{
    id <SVDiscoverMoreInteractionHandling> _discoverMoreInteractionHandler;
}

@property(readonly, nonatomic) id <SVDiscoverMoreInteractionHandling> discoverMoreInteractionHandler; // @synthesize discoverMoreInteractionHandler=_discoverMoreInteractionHandler;
// - (void).cxx_destruct;
- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithDiscoverMoreInteractionHandler:(id)arg1;

@end

