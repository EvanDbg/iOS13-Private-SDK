//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIContactManaging-Protocol.h>

@class NSUUID;

@interface TIContactManager : NSObject <TIContactManaging>
{
    NSUUID *contactCollectionUUID;
}

+ (id)singletonInstance;
+ (id)sharedTIContactManager;
+ (void)setSharedTIContactManager:(id)arg1;
@property(readonly, copy, nonatomic) NSUUID *contactCollectionUUID; // @synthesize contactCollectionUUID;
// - (void).cxx_destruct;
- (void)handleMemoryPressureLevel:(NSUInteger)arg1 excessMemoryInBytes:(NSUInteger)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)unload;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (void)getOnce:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;

@end

