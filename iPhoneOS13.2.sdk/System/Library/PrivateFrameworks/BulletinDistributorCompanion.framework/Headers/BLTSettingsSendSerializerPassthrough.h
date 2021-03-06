//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BLTSettingsSendSerializerDelegate;

@interface BLTSettingsSendSerializerPassthrough : NSObject
{
    id <BLTSettingsSendSerializerDelegate> _delegate;
}

@property(nonatomic) __weak id <BLTSettingsSendSerializerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)sendNowWithSent:(CDUnknownBlockType)arg1 withAcknowledgement:(CDUnknownBlockType)arg2 withTimeout:(id)arg3;
- (void)handleFileURL:(id)arg1;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(CDUnknownBlockType)arg6 andResponse:(CDUnknownBlockType)arg7 spoolToFile:(BOOL)arg8;

@end

