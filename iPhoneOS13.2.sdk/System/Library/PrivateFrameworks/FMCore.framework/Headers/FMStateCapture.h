//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMStateCapture : NSObject
{
    id /* CDUnknownBlockType */ _stateCaptureBlock;
    NSUInteger _handle;
}

@property(nonatomic) NSUInteger handle; // @synthesize handle=_handle;
@property(copy, nonatomic) id /* CDUnknownBlockType */ stateCaptureBlock; // @synthesize stateCaptureBlock=_stateCaptureBlock;
// - (void).cxx_destruct;
//  (struct os_state_data_s )stateDataForDictionary:(id)arg1 title:(id)arg2;
//  (struct os_state_data_s )_stateCapture;
- (void)unregisterHandlerforStateCapture;
- (void)registerHandlerforStateCapture;
- (void)dealloc;
- (id)init;

@end

