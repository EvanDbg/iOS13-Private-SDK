//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISImageDescriptor-Protocol.h>

@interface ISSymbolImageDescriptor : NSObject <ISImageDescriptor>
{
    double _pointSize;
    double _scale;
    NSUInteger _size;
    long long _weight;
}

@property(nonatomic) long long weight; // @synthesize weight=_weight;
@property(nonatomic) NSUInteger size; // @synthesize size=_size;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
- (id)init;

@end

