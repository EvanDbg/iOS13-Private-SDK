//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKMetalResource-Protocol.h>

@class NSString;
@protocol MTLBuffer;

@interface PKMetalBuffer : NSObject <PKMetalResource>
{
    unsigned long long _lockCount;
    // Error parsing type: Ai, name: _isPurged
    id <MTLBuffer> _metalBuffer;
}

@property(readonly, nonatomic) id <MTLBuffer> metalBuffer; // @synthesize metalBuffer=_metalBuffer;
- (_Bool)isPurged;
- (void)unlock;
- (_Bool)lock;
- (id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
