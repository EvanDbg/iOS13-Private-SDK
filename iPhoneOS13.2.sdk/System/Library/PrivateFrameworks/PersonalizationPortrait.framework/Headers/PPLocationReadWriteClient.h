//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPXPCClientHelper;

@interface PPLocationReadWriteClient : NSObject
{
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (BOOL)clearWithError:(id )arg1 deletedCount:(NSUInteger )arg2;
- (BOOL)cloudSyncWithError:(id )arg1;
- (BOOL)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 error:(id )arg7;
- (BOOL)_doDeletionSyncCallWithError:(id )arg1 deletedCount:(NSUInteger )arg2 syncCall:(CDUnknownBlockType)arg3;
- (BOOL)_doSyncCallWithError:(id )arg1 syncCall:(CDUnknownBlockType)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

