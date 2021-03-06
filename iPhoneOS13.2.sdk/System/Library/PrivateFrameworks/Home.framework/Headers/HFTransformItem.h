//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>


@interface HFTransformItem : HFItem <NSCopying>
{
    HFItem *_sourceItem;
    id /* CDUnknownBlockType */ _optionsTransformBlock;
    id /* CDUnknownBlockType */ _resultsTransformBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ resultsTransformBlock; // @synthesize resultsTransformBlock=_resultsTransformBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ optionsTransformBlock; // @synthesize optionsTransformBlock=_optionsTransformBlock;
@property(retain, nonatomic) HFItem *sourceItem; // @synthesize sourceItem=_sourceItem;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(CDUnknownBlockType)arg2 resultsTransformBlock:(CDUnknownBlockType)arg3;
- (id)initWithSourceItem:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (id)initWithSourceItem:(id)arg1 resultKeyExclusionFilter:(id)arg2;
- (id)initWithSourceItem:(id)arg1 resultKeyFilter:(id)arg2;
- (id)init;

@end

