//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REElementUserActivityAction.h>

@interface REElementUserActivityShortcutAction : REElementUserActivityAction
{
    BOOL _isLocalDonation;
}

@property(readonly, nonatomic) BOOL isLocalDonation; // @synthesize isLocalDonation=_isLocalDonation;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)_submitMetricsWithSuccess:(BOOL)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 isLocalDonation:(BOOL)arg3;

@end

