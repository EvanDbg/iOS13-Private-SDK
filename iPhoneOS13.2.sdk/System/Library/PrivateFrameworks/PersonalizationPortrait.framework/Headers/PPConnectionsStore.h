//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPClientStore-Protocol.h>
#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSString, PPClientFeedbackHelper;

@interface PPConnectionsStore : NSObject <PPFeedbackAccepting, PPClientStore>
{
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (_Bool)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id *)arg6 block:(id /* block */)arg7;
- (_Bool)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4 error:(id *)arg5 block:(id /* block */)arg6;
- (_Bool)iterRecentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id *)arg3 block:(id /* block */)arg4;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;

@end
