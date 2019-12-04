//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface PICurveControlPoint : NSObject <NSCopying>
{
    _Bool _editable;
    double _x;
    double _y;
}

@property(readonly, nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(readonly, nonatomic) double y; // @synthesize y=_y;
@property(readonly, nonatomic) double x; // @synthesize x=_x;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 editable:(_Bool)arg3;

@end
