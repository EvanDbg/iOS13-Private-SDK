//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class DOCThumbnailDescriptor;
@protocol NSCopying;

@interface DOCThumbnailKey : NSObject <NSCopying>
{
    NSObject<NSCopying> *_primaryKey;
    DOCThumbnailDescriptor *_descriptor;
}

@property(readonly, nonatomic) DOCThumbnailDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) NSObject<NSCopying> *primaryKey; // @synthesize primaryKey=_primaryKey;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithPrimaryKey:(id)arg1 descriptor:(id)arg2;

@end

