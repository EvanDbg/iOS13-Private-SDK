//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSDescriptionBuilder, NSString;

@protocol BSDescriptionProviding <NSObject>
- (BSDescriptionBuilder *)succinctDescriptionBuilder;
- (NSString *)succinctDescription;
- (BSDescriptionBuilder *)descriptionBuilderWithMultilinePrefix:(NSString *)arg1;
- (NSString *)descriptionWithMultilinePrefix:(NSString *)arg1;
@end

