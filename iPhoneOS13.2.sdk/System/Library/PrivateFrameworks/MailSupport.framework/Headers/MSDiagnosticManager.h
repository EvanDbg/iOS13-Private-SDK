//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailSupport/EFLoggable-Protocol.h>

@class AWDServerConnection;

@interface MSDiagnosticManager : NSObject <EFLoggable>
{
    AWDServerConnection *_awdServerConnection;
}

+ (id)log;
@property(readonly, nonatomic) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;
// - (void).cxx_destruct;
- (void)submitFetchMetricsReport:(id)arg1;
- (void)submitComposeAttachmentReport:(id)arg1;
- (void)submitMessageLoadingReport:(id)arg1;
- (BOOL)submitWithIdentifier:(unsigned int)arg1 metricGenerator:(CDUnknownBlockType)arg2;
- (void)submitSearchSessionWithSearchEngagement:(id)arg1 numberOfMessagesLeftToIndex:(NSUInteger)arg2 percentOfMessagesIndexed:(NSUInteger)arg3 emailProvider:(int)arg4;
- (id)init;

@end

