//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBHandshake : NSObject
{
    unsigned int _position;
    unsigned int _version;
    unsigned int _state;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int position; // @synthesize position=_position;
- (id)description;

@end
