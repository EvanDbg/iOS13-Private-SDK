//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAMailboxGetUpdatesRequest.h>

#import <Message/MFDAMailAccountRequest-Protocol.h>

@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest>
{
    BOOL _isUserRequested;
}

- (BOOL)mf_alwaysReportFailures;
- (id)deferredOperation;
@property(readonly, nonatomic) BOOL isUserRequested;
@property(readonly, nonatomic) BOOL shouldSend;
- (NSUInteger)generationNumber;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(BOOL)arg3;

@end

