//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSTConcurrentMutableCellUIDSet : NSObject
{
//     struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSUMutableUUIDSet *, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSUMutableUUIDSet *>>> _rowUIDToColumnUIDSetMap;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)reapAccumulatedCellRegionWithTable:(id)arg1;
// - (void)addCellUID:(const struct TSTCellUID )arg1;
- (id)init;

@end

