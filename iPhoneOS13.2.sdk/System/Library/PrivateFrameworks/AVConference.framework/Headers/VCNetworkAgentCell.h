//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCObject.h>

__attribute__((visibility("hidden")))
@interface VCNetworkAgentCell : VCObject
{
    _Bool _cellularAssertionActive;
}

+ (id)sharedInstance;
@property(readonly) _Bool cellularAssertionActive; // @synthesize cellularAssertionActive=_cellularAssertionActive;
- (void)removeCellularAssertion;
- (void)addCellularAssertion;

@end
