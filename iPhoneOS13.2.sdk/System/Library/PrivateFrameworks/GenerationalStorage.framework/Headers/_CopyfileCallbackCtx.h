//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress;

__attribute__((visibility("hidden")))
@interface _CopyfileCallbackCtx : NSObject
{
    _Bool _doArchive;
    _Bool _doUnarchive;
    NSProgress *_progress;
    unsigned long long _generationSize;
}

@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long generationSize; // @synthesize generationSize=_generationSize;
@property(nonatomic) _Bool doUnarchive; // @synthesize doUnarchive=_doUnarchive;
@property(nonatomic) _Bool doArchive; // @synthesize doArchive=_doArchive;
- (id)initWithPath:(const char *)arg1 error:(id *)arg2;

@end
