//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutableImage-Protocol.h>

@class NURegion;

@protocol NUMutableBufferImage <NUBufferImage, NUMutableImage>
- (void)writeBufferRegion:(NURegion *)arg1 withBlock:(void (^)(id <NUMutableBufferTile>, BOOL ))arg2;
@end

