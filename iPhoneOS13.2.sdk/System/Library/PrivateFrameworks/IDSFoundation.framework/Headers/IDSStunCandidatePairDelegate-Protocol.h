//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IDSStunCandidatePair, NSDictionary;

@protocol IDSStunCandidatePairDelegate <NSObject>
- (void)sendAllocbindRequest:(IDSStunCandidatePair *)arg1 isRealloc:(BOOL)arg2 inResponseToNoSessionState:(BOOL)arg3;
- (void)disconnectCandidatePair:(IDSStunCandidatePair *)arg1;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didAddQREvent:(NSDictionary *)arg2;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveSessionInfo:(NSDictionary *)arg2 success:(BOOL)arg3;
@end

