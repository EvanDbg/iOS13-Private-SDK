//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSString;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage
{
}

- (NSUInteger)type;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) NSArray *supportedCommands;
- (id)initWithDefaultSupportedCommands:(id)arg1 forClient:(id)arg2;

@end

