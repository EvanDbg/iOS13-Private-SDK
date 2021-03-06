//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUStreamCompression : NSObject
{
    int _status;
   struct {
        char dst_ptr;
        NSUInteger dst_size;
        char src_ptr;
        NSUInteger src_size;
        void state;
    } _stream;
    int _operation;
    id /* CDUnknownBlockType */ _handler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
// - (void).cxx_destruct;
- (BOOL)processBytes:(char )arg1 size:(NSUInteger)arg2 flags:(int)arg3;
- (BOOL)didFinishProcessing;
- (BOOL)processBytes:(char )arg1 size:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithAlgorithm:(int)arg1 operation:(int)arg2;

@end

