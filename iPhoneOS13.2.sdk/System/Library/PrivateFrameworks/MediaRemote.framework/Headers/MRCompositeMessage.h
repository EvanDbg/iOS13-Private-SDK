//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSMutableArray;

@interface MRCompositeMessage : MRProtocolMessage
{
    NSMutableArray *_messages;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *messages;
- (void)addMessage:(id)arg1;

@end

