//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, NWBrowser;

__attribute__((visibility("hidden")))
@interface NWRemoteBrowserWrapper : NSObject
{
    NSUUID *_clientID;
    NWBrowser *_browser;
}

@property(retain) NWBrowser *browser; // @synthesize browser=_browser;
@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;
// - (void).cxx_destruct;

@end

