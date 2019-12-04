//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSDictionary, _PARSilhouette_Topic;

@protocol _PARSilhouette 
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *topics;
@property(nonatomic) int portraitVersion;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_PARSilhouette_Topic *)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (void)addTopics:(_PARSilhouette_Topic *)arg1;
- (void)clearTopics;
@end
