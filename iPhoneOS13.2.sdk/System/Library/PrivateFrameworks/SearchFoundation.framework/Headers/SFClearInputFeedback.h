//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@interface SFClearInputFeedback : SFFeedback
{
    NSUInteger _triggerEvent;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger triggerEvent; // @synthesize triggerEvent=_triggerEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(NSUInteger)arg1;

@end

