//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSPlayStatusUpdateRequest : HSRequest
{
    unsigned int _interfaceID;
    unsigned int _revisionID;
}

@property(readonly, nonatomic) unsigned int revisionID; // @synthesize revisionID=_revisionID;
@property(readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
- (double)timeoutInterval;
- (BOOL)isConcurrent;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 revisionID:(unsigned int)arg2;

@end

