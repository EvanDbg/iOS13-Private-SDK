//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HMDCameraSnapshotSessionID, NSString;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying>
{
    HMDCameraSnapshotSessionID *_sessionID;
    NSString *_applicationIdentifier;
}

@property(readonly, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithSessionID:(id)arg1 applicationIdentifier:(id)arg2;

@end

