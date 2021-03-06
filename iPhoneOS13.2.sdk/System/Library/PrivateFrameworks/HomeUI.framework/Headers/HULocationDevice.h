//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NAIdentifiable-Protocol.h>

@class NSString;

@interface HULocationDevice : NSObject <NAIdentifiable>
{
    BOOL _currentDevice;
    NSString *_identifier;
    NSString *_name;
}

+ (id)na_identity;
@property(readonly, nonatomic, getter=isCurrentDevice) BOOL currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 currentDevice:(BOOL)arg3;
- (id)initWithFMFDevice:(id)arg1;
- (id)initWithHMDevice:(id)arg1;

@end

