//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalActionReplayer.h>

#import <EmailCore/ECIMAPLocalActionReplayer-Protocol.h>

@protocol ECIMAPServerInterface;

@interface ECGmailLabelChangeReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>
{
    id <ECIMAPServerInterface> serverInterface;
}

@property(retain, nonatomic) id <ECIMAPServerInterface> serverInterface; // @synthesize serverInterface;
// - (void).cxx_destruct;
- (id)replayAction;

@end

