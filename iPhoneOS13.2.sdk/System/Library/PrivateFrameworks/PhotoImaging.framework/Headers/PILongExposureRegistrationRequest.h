//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NSDictionary;

@interface PILongExposureRegistrationRequest : NURenderRequest
{
    NSDictionary *_recipe;
//     CDStruct_996ac03c _cleanAperture;
}

// @property(nonatomic) CDStruct_996ac03c cleanAperture; // @synthesize cleanAperture=_cleanAperture;
@property(copy, nonatomic) NSDictionary *recipe; // @synthesize recipe=_recipe;
// - (void).cxx_destruct;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
// - (id)copyWithZone:(_NSZone )arg1;

@end

