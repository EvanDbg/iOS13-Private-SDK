//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RLMSortDescriptor : NSObject
{
    BOOL _ascending;
    NSString *_keyPath;
}

+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(BOOL)arg2;
@property(readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
// - (void).cxx_destruct;
- (id)reversedSortDescriptor;

@end

