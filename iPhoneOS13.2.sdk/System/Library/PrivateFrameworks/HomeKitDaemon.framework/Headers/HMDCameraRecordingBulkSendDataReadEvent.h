//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraRecordingLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@interface HMDCameraRecordingBulkSendDataReadEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent>
{
    unsigned short _status;
    NSUInteger _byteCount;
    NSUInteger _chunkSequenceNumber;
    NSUInteger _bitRate;
    NSUInteger _iFrameInterval;
    NSUInteger _imageWidth;
    NSUInteger _imageHeight;
}

+ (id)uuid;
@property(readonly) NSUInteger imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly) NSUInteger imageWidth; // @synthesize imageWidth=_imageWidth;
@property(readonly) NSUInteger iFrameInterval; // @synthesize iFrameInterval=_iFrameInterval;
@property(readonly) NSUInteger bitRate; // @synthesize bitRate=_bitRate;
@property NSUInteger chunkSequenceNumber; // @synthesize chunkSequenceNumber=_chunkSequenceNumber;
@property unsigned short status; // @synthesize status=_status;
@property NSUInteger byteCount; // @synthesize byteCount=_byteCount;
- (id)attributeDescriptions;
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 bitRate:(NSUInteger)arg3 iFrameInterval:(NSUInteger)arg4 imageWidth:(NSUInteger)arg5 imageHeight:(NSUInteger)arg6;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

@end

