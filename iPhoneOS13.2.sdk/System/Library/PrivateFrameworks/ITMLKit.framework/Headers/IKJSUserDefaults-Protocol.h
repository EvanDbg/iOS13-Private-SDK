//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol IKJSUserDefaults <JSExport>
- (void)removeData:(NSString *)arg1;
- (void)setData:(NSString *)arg1:(JSValue *)arg2;
- (JSValue *)getData:(NSString *)arg1;
@end

