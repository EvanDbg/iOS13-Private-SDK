//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteTextInput/RTIInputSystemSessionProtocol-Protocol.h>
#import <RemoteTextInput/RTIInputSystemSessionResponseProtocol-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet;
@protocol RTIInputSystemClientDelegate;

@interface RTIInputSystemClient : NSObject <RTIInputSystemSessionResponseProtocol, RTIInputSystemSessionProtocol>
{
    NSUInteger _environmentOptions;
    BOOL _isInDealloc;
    NSUInteger _currentEnvironmentOptions;
    id <RTIInputSystemClientDelegate> _delegate;
    NSMutableDictionary *_activeSessions;
    NSMutableSet *_begunSessionIDs;
    NSMutableSet *_allowanceRequestors;
    NSArray *_machNames;
    NSMutableDictionary *_connections;
    NSMutableSet *_endpointConnections;
}

@property(retain, nonatomic) NSMutableSet *endpointConnections; // @synthesize endpointConnections=_endpointConnections;
@property(retain, nonatomic) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSArray *machNames; // @synthesize machNames=_machNames;
@property(retain, nonatomic) NSMutableSet *allowanceRequestors; // @synthesize allowanceRequestors=_allowanceRequestors;
@property(retain, nonatomic) NSMutableSet *begunSessionIDs; // @synthesize begunSessionIDs=_begunSessionIDs;
@property(retain, nonatomic) NSMutableDictionary *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(nonatomic) __weak id <RTIInputSystemClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUInteger currentEnvironmentOptions; // @synthesize currentEnvironmentOptions=_currentEnvironmentOptions;
// - (void).cxx_destruct;
- (oneway void)performTextOperations:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (oneway void)performTextOperations:(id)arg1;
- (oneway void)endRemoteTextInputSessionWithID:(id)arg1;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;
- (oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;
- (void)notifyServiceOfPause:(BOOL)arg1 withReason:(id)arg2;
- (void)_modifyTextEditingAllowedForReason:(id)arg1 notify:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)_remoteTextEditingIsAllowed;
- (void)setEnvironmentOptions:(NSUInteger)arg1 withReason:(id)arg2;
- (void)setEnvironmentEnabled:(BOOL)arg1 withReason:(id)arg2;
@property(readonly, nonatomic, getter=isEnvironmentEnabled) BOOL environmentEnabled;
- (void)_endAllActiveSessionsForServices:(id)arg1;
- (void)_beginAllActiveSessionsForServices:(id)arg1;
- (void)_endAllActiveSessions;
- (void)_beginAllActiveSessions;
- (void)_endSessionWithID:(id)arg1 forServices:(id)arg2;
- (void)_updateAttributesForSessionWithID:(id)arg1;
- (void)_updateTextForSessionWithID:(id)arg1;
- (void)_beginSessionWithID:(id)arg1 forServices:(id)arg2;
- (void)enumerateServices:(id)arg1 force:(BOOL)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)endAllowingRemoteTextInput:(id)arg1;
- (void)beginAllowingRemoteTextInput:(id)arg1;
- (void)removeEndpoint:(id)arg1;
- (void)addEndpoint:(id)arg1;
- (void)_initializeConnection:(id)arg1 withMachName:(id)arg2;
- (void)dealloc;
- (id)initWithMachNames:(id)arg1;

@end

