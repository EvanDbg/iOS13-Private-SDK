//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class Protocol;

@interface _REInterfaceKey : NSObject <NSCopying>
{
    Class _c;
    Protocol *_p;
    BOOL _isClass;
    Class _cls;
    Protocol *_protocol;
}

@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) Class cls; // @synthesize cls=_cls;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)enumerateExposedMethods:(CDUnknownBlockType)arg1;
- (void)enumerateExposedProperties:(CDUnknownBlockType)arg1;
- (void)enumerateConformedProperties:(CDUnknownBlockType)arg1;
- (void)enumerateAutomaticProperties:(CDUnknownBlockType)arg1;
- (BOOL)conforms:(id)arg1;
@property(readonly, nonatomic) _REInterfaceKey *superclassKey;
@property(readonly, nonatomic) BOOL isProtocol;
- (id)initWithProtocol:(id)arg1;
- (id)initWithClass:(Class)arg1;

@end

