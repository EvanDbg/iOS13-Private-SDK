//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCWeakObjectHolder : NSObject
{
    id _weakObject;
//     struct OpaqueFigCFWeakReference _weakObjectWithoutAutoRelease;
}

+ (id)weakObjectHolderWithObject:(id)arg1;
// @property(readonly, nonatomic) struct OpaqueFigCFWeakReference weak;
@property(readonly, nonatomic) id strong;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

