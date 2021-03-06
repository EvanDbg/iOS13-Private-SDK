//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/DAMailboxFetchSearchResultConsumer-Protocol.h>
#import <Message/DAMailboxStreamingContentConsumer-Protocol.h>

@class MFConditionLock, MFError;
@protocol MFDAStreamingContentConsumer;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer>
{
    MFConditionLock *_doneCondition;
    id <MFDAStreamingContentConsumer> _streamConsumer;
    MFError *_error;
}

@property(retain, nonatomic) id <MFDAStreamingContentConsumer> streamConsumer; // @synthesize streamConsumer=_streamConsumer;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)consumeData:(char )arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)searchResultFetchedWithResponses:(id)arg1;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)waitUntilDone;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (id)init;

@end

