//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _MFEmailSetEmail : NSObject
{
    NSUInteger _hash;
    NSString *_encodedAddress;
    NSString *_comment;
}

@property(readonly, nonatomic) NSString *commentedAddress;
@property(retain, nonatomic) NSString *address;
- (BOOL)isEqualToEmail:(id)arg1;
@property(readonly, nonatomic) NSUInteger hash;
- (id)description;
- (void)dealloc;
- (id)initWithAddress:(id)arg1;

@end

