//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RPFileTransferSmallFilesTask : NSObject
{
    _Bool _needsRetry;
    struct NSMutableArray *_fileItems;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskID;
}

@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool needsRetry; // @synthesize needsRetry=_needsRetry;
@property(retain, nonatomic) NSMutableArray *fileItems; // @synthesize fileItems=_fileItems;

@end
