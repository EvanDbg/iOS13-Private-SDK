//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TIKeyboardState;

@interface TIKeyboardInteractionProtocolBase : NSObject <NSSecureCoding>
{
    TIKeyboardState *_keyboardState;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardState:(id)arg1;

@end

