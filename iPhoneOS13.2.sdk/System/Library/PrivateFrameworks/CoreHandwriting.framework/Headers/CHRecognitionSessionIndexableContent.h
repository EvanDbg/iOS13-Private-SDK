//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CHRecognitionSessionIndexableContent : NSObject
{
    NSString *_indexableTextRepresentation;
    NSString *_presentableTextRepresentation;
}

@property(readonly, copy, nonatomic) NSString *presentableTextRepresentation; // @synthesize presentableTextRepresentation=_presentableTextRepresentation;
@property(readonly, copy, nonatomic) NSString *indexableTextRepresentation; // @synthesize indexableTextRepresentation=_indexableTextRepresentation;
- (void)dealloc;
- (id)initWithIndexableTextRepresentation:(id)arg1 presentableTextRepresentation:(id)arg2;

@end

