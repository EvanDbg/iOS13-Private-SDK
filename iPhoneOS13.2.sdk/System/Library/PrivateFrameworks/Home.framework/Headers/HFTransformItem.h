//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>



@interface HFTransformItem : HFItem <NSCopying>
{
    HFItem *_sourceItem;
    id /* block */ _optionsTransformBlock;
    id /* block */ _resultsTransformBlock;
}

@property(copy, nonatomic) id /* block */ resultsTransformBlock; // @synthesize resultsTransformBlock=_resultsTransformBlock;
@property(copy, nonatomic) id /* block */ optionsTransformBlock; // @synthesize optionsTransformBlock=_optionsTransformBlock;
@property(retain, nonatomic) HFItem *sourceItem; // @synthesize sourceItem=_sourceItem;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(id /* block */)arg2 resultsTransformBlock:(id /* block */)arg3;
- (id)initWithSourceItem:(id)arg1 transformationBlock:(id /* block */)arg2;
- (id)initWithSourceItem:(id)arg1 resultKeyExclusionFilter:(id)arg2;
- (id)initWithSourceItem:(id)arg1 resultKeyFilter:(id)arg2;
- (id)init;

@end
