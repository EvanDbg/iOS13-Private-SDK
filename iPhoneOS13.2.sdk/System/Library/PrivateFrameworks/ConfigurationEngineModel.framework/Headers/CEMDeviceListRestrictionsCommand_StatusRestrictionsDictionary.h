//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceListRestrictionsCommand_StatusBooleanDictionary, CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary, CEMDeviceListRestrictionsCommand_StatusValueDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary : CEMPayloadBase
{
    CEMDeviceListRestrictionsCommand_StatusBooleanDictionary *_statusRestrictedBool;
    CEMDeviceListRestrictionsCommand_StatusValueDictionary *_statusRestrictedValue;
    CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *_statusIntersection;
    CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *_statusUnion;
}

+ (id)buildRequiredOnly;
+ (id)buildWithRestrictedBool:(id)arg1 withRestrictedValue:(id)arg2 withIntersection:(id)arg3 withUnion:(id)arg4;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusUnion; // @synthesize statusUnion=_statusUnion;
@property(copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusIntersection; // @synthesize statusIntersection=_statusIntersection;
@property(copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusValueDictionary *statusRestrictedValue; // @synthesize statusRestrictedValue=_statusRestrictedValue;
@property(copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusBooleanDictionary *statusRestrictedBool; // @synthesize statusRestrictedBool=_statusRestrictedBool;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

