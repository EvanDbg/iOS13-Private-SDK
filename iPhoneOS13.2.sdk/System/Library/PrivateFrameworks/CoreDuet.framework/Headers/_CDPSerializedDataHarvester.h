//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPDataHarvester-Protocol.h>

@class NSURL;

@interface _CDPSerializedDataHarvester : NSObject <_CDPDataHarvester>
{
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (void)loadWithLimit:(NSUInteger)arg1 dataPointReader:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end

