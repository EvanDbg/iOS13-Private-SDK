//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol IKJSDataItem <JSExport>
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *type;
- (id)initConstructor:(JSValue *)arg1:(JSValue *)arg2;
@end

