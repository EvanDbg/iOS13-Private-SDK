//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface PLURIWithHash : NSObject
{
    NSObject<OS_xpc_object> *_uri;
    NSUInteger _uriHash;
}

@property(nonatomic) NSUInteger uriHash; // @synthesize uriHash=_uriHash;
@property(retain, nonatomic) NSObject<OS_xpc_object> *uri; // @synthesize uri=_uri;
// - (void).cxx_destruct;
- (id)initWithXPCURI:(id)arg1;
- (id)init;

@end

