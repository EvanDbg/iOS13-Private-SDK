//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRProtocolMessageQueueDataSource-Protocol.h>
#import <MediaRemote/MRProtocolMessageQueueDelegate-Protocol.h>
#import <MediaRemote/MSVMessageParserDelegate-Protocol.h>

@class MRProtocolMessageQueue, MRSupportedProtocolMessages, MSVMessageParser, NSInputStream, NSOutputStream, NSRunLoop, _MRDeviceInfoMessageProtobuf;
@protocol MRProtocolClientConnectionDelegate;

@interface MRProtocolClientConnection : NSObject <NSStreamDelegate, MSVMessageParserDelegate, MRProtocolMessageQueueDelegate, MRProtocolMessageQueueDataSource>
{
    MSVMessageParser *_parser;
    NSRunLoop *_runLoop;
    MRProtocolMessageQueue *_messageQueue;
    BOOL _disconnected;
    NSUInteger _firstClientNanoseconds;
    NSUInteger _firstDeviceTicks;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    MRSupportedProtocolMessages *_supportedMessages;
    id <MRProtocolClientConnectionDelegate> _delegate;
}

@property(nonatomic) __weak id <MRProtocolClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MRSupportedProtocolMessages *supportedMessages; // @synthesize supportedMessages=_supportedMessages;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
// - (void).cxx_destruct;
- (void)_closeStream:(id)arg1;
- (void)closeAllStreams;
- (void)_openStream:(id)arg1;
- (void)_notifyDelegateClientDidRecieveMessage:(id)arg1;
- (void)_notifyDelegateClientDidDisconnect;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (BOOL)_clientSupportsMessage:(id)arg1;
- (void)_disconnectClient;
- (void)_adjustTimestamp:(id)arg1;
- (void)_preProcessMessage:(id)arg1 data:(id)arg2;
- (void)_parseMessageData:(id)arg1;
- (void)_flush;
- (void)_sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)messageQueue:(id)arg1 dataForMessage:(id)arg2;
- (void)messageQueue:(id)arg1 didPurgeMessage:(id)arg2;
- (void)messageQueue:(id)arg1 didSendMessage:(id)arg2;
- (NSUInteger)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (void)_stream:(id)arg1 handleEvent:(NSUInteger)arg2;
- (void)stream:(id)arg1 handleEvent:(NSUInteger)arg2;
- (id)decryptData:(id)arg1 error:(id )arg2;
- (id)encryptDataForMessage:(id)arg1;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1;
@property(readonly, nonatomic) BOOL streamsAreValid;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;

@end

