//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/_UIActivityItemCustomization.h>

#import <ShareSheet/_UIActivityItemCustomizationSwitch-Protocol.h>

@interface _UIActivityItemCustomizationSwitch : _UIActivityItemCustomization <_UIActivityItemCustomizationSwitch>
{
    BOOL _value;
    id /* CDUnknownBlockType */ __handler;
}

@property(copy, nonatomic, setter=_setHandler:) id /* CDUnknownBlockType */ _handler; // @synthesize _handler=__handler;
// - (void).cxx_destruct;
- (void)_setValue:(BOOL)arg1;
@property(readonly, nonatomic) BOOL value;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 value:(BOOL)arg3 footerText:(id)arg4;

@end

