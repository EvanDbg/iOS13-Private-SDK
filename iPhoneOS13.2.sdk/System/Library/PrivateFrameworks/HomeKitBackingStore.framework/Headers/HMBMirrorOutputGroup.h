//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions;

@interface HMBMirrorOutputGroup : HMFObject
{
    HMBProcessingOptions *_options;
    NSUInteger _blockRow;
}

@property(readonly, nonatomic) NSUInteger blockRow; // @synthesize blockRow=_blockRow;
@property(readonly, nonatomic) HMBProcessingOptions *options; // @synthesize options=_options;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithBlockRow:(NSUInteger)arg1 options:(id)arg2;

@end

