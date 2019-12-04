//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface WFFileSize : NSObject <NSSecureCoding, NSCopying, WFSerializableContent, WFNaming>
{
    long long _byteCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
@property(readonly, nonatomic) long long byteCount; // @synthesize byteCount=_byteCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)wfSerializedRepresentation;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSUInteger hash;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *formattedString;
- (id)initWithByteCount:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
