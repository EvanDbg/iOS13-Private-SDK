//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDImageFill.h>

@class TSPData, TSUColor;

@interface TSDMutableImageFill : TSDImageFill
{
}

@property(nonatomic) BOOL interpretsUntaggedImageDataAsGeneric; // @dynamic interpretsUntaggedImageDataAsGeneric;
- (void)setScale:(double)arg1;
@property(nonatomic) CGSize fillSize; // @dynamic fillSize;
@property(retain, nonatomic) TSPData *imageData; // @dynamic imageData;
@property(nonatomic) int technique; // @dynamic technique;
@property(copy, nonatomic) TSUColor *tintColor; // @dynamic tintColor;
// - (id)copyWithZone:(_NSZone )arg1;

@end

