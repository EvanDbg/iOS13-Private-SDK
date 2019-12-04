//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DVector : NSObject <TSSPropertyValueArchiving, NSCopying, NSMutableCopying>
{
    float _x;
    float _y;
    float _z;
    float _w;
}

+ (id)vectorWithVec4:(const tvec4_ac57c72d *)arg1;
+ (id)vectorWithVec3:(const tvec3_17f03ce0 *)arg1;
+ (id)vectorWithVec2:(const tvec2_84d5962d *)arg1;
+ (id)x:(float)arg1 y:(float)arg2 z:(float)arg3 w:(float)arg4;
+ (id)x:(float)arg1 y:(float)arg2 z:(float)arg3;
+ (id)vector;
+ (unsigned long long)hashVec4:(const tvec4_ac57c72d *)arg1;
+     // Error parsing type: @32@0:8r^{Chart3DVectorArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}ffff}16@24, name: instanceWithArchive:unarchiver:
@property(readonly, nonatomic) float w; // @synthesize w=_w;
@property(readonly, nonatomic) float z; // @synthesize z=_z;
@property(readonly, nonatomic) float y; // @synthesize y=_y;
@property(readonly, nonatomic) float x; // @synthesize x=_x;
- (void)didInitFromSOS;
- (float)valueForDimension:(unsigned long long)arg1;
- (tvec2_84d5962d)value2;
- (tvec3_17f03ce0)value3;
- (tvec4_ac57c72d)value4;
- (tvec4_ac57c72d)value;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3 w:(float)arg4;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (id)initWithVec4:(const tvec4_ac57c72d *)arg1;
- (id)initWithVec3:(const tvec3_17f03ce0 *)arg1;
- (id)initWithVec2:(const tvec2_84d5962d *)arg1;
- (id)init;
-     // Error parsing type: v32@0:8^{Chart3DVectorArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}ffff}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{Chart3DVectorArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}ffff}16@24, name: initWithArchive:unarchiver:

@end
