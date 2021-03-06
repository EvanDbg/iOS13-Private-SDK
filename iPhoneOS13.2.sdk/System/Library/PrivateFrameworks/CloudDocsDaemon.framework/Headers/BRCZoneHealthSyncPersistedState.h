//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCPersistedState.h>

@class CKOperationGroup, CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthSyncPersistedState : BRCPersistedState
{
    BOOL _needsSyncDown;
    NSDate *_lastSyncDownDate;
    CKServerChangeToken *_changeToken;
    NSUInteger _requestID;
    CKOperationGroup *_ckGroup;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) CKOperationGroup *ckGroup; // @synthesize ckGroup=_ckGroup;
@property(nonatomic) BOOL needsSyncDown; // @synthesize needsSyncDown=_needsSyncDown;
@property(readonly, nonatomic) NSUInteger requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(readonly) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)allocateNextRequestID;
- (void)zoneHealthWasReset;
- (void)updateWithServerChangeToken:(id)arg1 requestID:(NSUInteger)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneHealthState:(id)arg1;

@end

