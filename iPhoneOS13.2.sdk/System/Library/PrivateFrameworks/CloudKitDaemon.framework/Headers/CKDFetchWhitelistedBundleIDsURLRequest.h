//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

__attribute__((visibility("hidden")))
@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest
{
    id /* CDUnknownBlockType */ _bundleIDsFetchedBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ bundleIDsFetchedBlock; // @synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock;
// - (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)sourceApplicationBundleIdentifier;
- (BOOL)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;

@end

