//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _ACComponentWrapper : NSObject <NSSecureCoding>
{
    shared_ptr_a99cf2ba mComponent;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithComponent:(shared_ptr_a99cf2ba )arg1;

@end

