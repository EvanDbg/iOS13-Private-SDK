//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EAEmailAddressSet;

@interface _EAEmailAddressSetEnumerator : NSEnumerator
{
    EAEmailAddressSet *_set;
//     CDStruct_58648341 _state;
}

// - (void).cxx_destruct;
- (id)nextObject;
// - (NSUInteger)countByEnumeratingWithState:(CDStruct_58648341 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)initWithSet:(id)arg1;

@end

