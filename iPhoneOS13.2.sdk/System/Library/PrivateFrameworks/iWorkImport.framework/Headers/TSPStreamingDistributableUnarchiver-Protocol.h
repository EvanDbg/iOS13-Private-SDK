//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol SFUBufferedInputStream;

@protocol TSPStreamingDistributableUnarchiver <NSObject>
- (BOOL)handleClassInfoWithClassType:(int)arg1 className:(NSString *)arg2 isProtobufClass:(BOOL)arg3 error:(id )arg4;
- (BOOL)handleFileDescriptorProtoWithInputStream:(id <SFUBufferedInputStream>)arg1 length:(unsigned int)arg2 error:(id )arg3;
- (BOOL)handleObjectWithIdentifier:(long long)arg1 fileStateIdentifier:(NSString *)arg2 version:(unsigned int)arg3 classType:(int)arg4 stream:(id <SFUBufferedInputStream>)arg5 length:(long long)arg6 relationshipTargets:(long long )arg7 relationshipCount:(unsigned int)arg8 error:(id )arg9;
// - (BOOL)handleArchivedVersions:(CDStruct_4bcfbbae)arg1 error:(id )arg2;
@end

