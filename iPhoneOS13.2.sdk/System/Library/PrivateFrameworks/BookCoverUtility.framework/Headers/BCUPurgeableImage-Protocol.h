//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol BCUPurgeableImage 
@property(readonly, nonatomic) id layerContents;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGImage *CGImage;
@property(readonly, nonatomic) double contentsScale;
- (_Bool)markAsNonVolatile;
- (_Bool)markAsVolatile;
@end
