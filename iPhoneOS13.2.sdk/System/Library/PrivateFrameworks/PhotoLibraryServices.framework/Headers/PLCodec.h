//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLCodecIdentity-Protocol.h>

@interface PLCodec : PLManagedObject <PLCodecIdentity>
{
}

+ (id)commonCodec_HEVC_inContext:(id)arg1;
+ (id)commonCodec_H264_inContext:(id)arg1;
+ (id)codecFromFourCharCodeName:(id)arg1 createIfMissing:(BOOL)arg2 context:(id)arg3;
+ (id)entityName;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable; // @dynamic playable;
- (BOOL)supportsCloudUpload;
- (unsigned int)_typeCodeFromString:(id)arg1;

@end

