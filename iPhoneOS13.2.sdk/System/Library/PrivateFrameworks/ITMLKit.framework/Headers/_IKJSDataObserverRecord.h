//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IKJSDataObserving;

__attribute__((visibility("hidden")))
@interface _IKJSDataObserverRecord : NSObject
{
    struct {
        BOOL hasDidChangePropertyPath;
    } _observerFlags;
    id <IKJSDataObserving> _observer;
    NSString *_observerHash;
    NSString *_pathString;
}

+ (id)hashForObserver:(id)arg1;
@property(readonly, nonatomic) NSString *pathString; // @synthesize pathString=_pathString;
@property(readonly, nonatomic) NSString *observerHash; // @synthesize observerHash=_observerHash;
@property(readonly, nonatomic) __weak id <IKJSDataObserving> observer; // @synthesize observer=_observer;
// - (void).cxx_destruct;
- (BOOL)isAffectedByPropertyPathWithString:(id)arg1 subpathString:(id )arg2;
- (id)initWithObserver:(id)arg1 pathString:(id)arg2;

@end

