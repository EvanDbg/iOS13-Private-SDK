//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRRemoteTextInputMessage : MRProtocolMessage
{
}

- (NSUInteger)type;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSUInteger version;
- (id)initWithVersion:(NSUInteger)arg1 data:(id)arg2;

@end

