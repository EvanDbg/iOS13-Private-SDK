//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TSPComponentParserDelegate;

__attribute__((visibility("hidden")))
@interface TSPComponentParser : NSObject
{
    id <TSPComponentParserDelegate> _delegate;
    NSUInteger _state;
    unsigned int _archiveInfoLength;
//     struct ArchiveInfo _archiveInfo;
    unsigned int _messagesLength;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
// - (NSUInteger)readArchiveFromStream:(struct DispatchDataInputStream )arg1 error:(id )arg2;
// - (NSUInteger)readArchiveInfoFromStream:(struct DispatchDataInputStream )arg1 error:(id )arg2;
// - (NSUInteger)readArchiveInfoLengthFromStream:(struct DispatchDataInputStream )arg1 error:(id )arg2;
// - (BOOL)readFromStream:(struct DispatchDataInputStream )arg1 error:(id )arg2;
- (void)readWithChannel:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

