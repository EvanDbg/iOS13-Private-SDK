//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface HFFormatterTransformer : NSFormatter
{
    NSFormatter *_sourceFormatter;
    id /* CDUnknownBlockType */ _transformBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ transformBlock; // @synthesize transformBlock=_transformBlock;
@property(copy, nonatomic) NSFormatter *sourceFormatter; // @synthesize sourceFormatter=_sourceFormatter;
// - (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithSourceFormatter:(id)arg1 transformBlock:(CDUnknownBlockType)arg2;

@end

