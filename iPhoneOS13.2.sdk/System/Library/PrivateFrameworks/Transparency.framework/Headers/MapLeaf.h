//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@interface MapLeaf : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (BOOL)verifyWithError:(id )arg1;
- (id)recordForAccountId:(id)arg1 deviceIdVRFOutput:(id)arg2 appVersion:(NSUInteger)arg3 clientDataVRFoutput:(id)arg4;

@end

