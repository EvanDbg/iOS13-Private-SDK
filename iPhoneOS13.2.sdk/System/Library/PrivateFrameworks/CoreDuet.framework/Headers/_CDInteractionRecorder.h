//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDInteractionDeleting-Protocol.h>
#import <CoreDuet/_CDInteractionQuerying-Protocol.h>
#import <CoreDuet/_CDInteractionRecording-Protocol.h>

@class NSXPCConnection, _CDInteractionPolicies;

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording>
{
    NSXPCConnection *_connection;
    _CDInteractionPolicies *_policies;
    BOOL _enforceDataLimits;
    BOOL _enforcePrivacy;
}

+ (id)interactionRecorder;
@property BOOL enforcePrivacy; // @synthesize enforcePrivacy=_enforcePrivacy;
@property BOOL enforceDataLimits; // @synthesize enforceDataLimits=_enforceDataLimits;
// - (void).cxx_destruct;
- (NSUInteger)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id )arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(BOOL)arg2 domainIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (NSUInteger)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id )arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(BOOL)arg2 account:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (NSUInteger)deleteInteractionsWithBundleId:(id)arg1 error:(id )arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (NSUInteger)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 error:(id )arg4;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 synchronous:(BOOL)arg2 sortDescriptors:(id)arg3 limit:(NSUInteger)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (NSUInteger)countContactsUsingPredicate:(id)arg1 error:(id )arg2;
- (void)countContactsUsingPredicate:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 error:(id )arg4;
- (void)queryContactsUsingPredicate:(id)arg1 synchronous:(BOOL)arg2 sortDescriptors:(id)arg3 limit:(NSUInteger)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (NSUInteger)countInteractionsUsingPredicate:(id)arg1 error:(id )arg2;
- (void)countInteractionsUsingPredicate:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 error:(id )arg4;
- (void)queryInteractionsUsingPredicate:(id)arg1 synchronous:(BOOL)arg2 sortDescriptors:(id)arg3 limit:(NSUInteger)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)recordInteractions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)recordInteractions:(id)arg1;
- (BOOL)recordInteraction:(id)arg1;
- (BOOL)recordInteractions:(id)arg1 synchronous:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;

@end

