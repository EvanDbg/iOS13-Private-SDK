//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HKSample;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct DataStore;

struct HDActivityCacheActiveSource {
    double _field1;
    long long _field2;
    vector_d87a6415 _field3;
};

struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample;

struct HDActivityCacheStatisticsBuilderBreatheSample;

struct HDActivityCacheStatisticsBuilderSample {
    double _field1;
    double _field2;
    double _field3;
    long long _field4;
};

struct HDActivityCacheStatisticsBuilderStandHourSample;

struct HDActivityCacheStatisticsBuilderWorkoutSample;

struct HDDemoDataBloodPressure {
    double _field1;
    double _field2;
};

struct HDDemoDataHeartRate {
    double _field1;
    long long _field2;
};

struct HDDemoDataMenstrualFlow {
    long long _field1;
    long long _field2;
};

struct HDSyncAnchorRange {
    long long start;
    long long end;
};

struct HistogramBucket;

struct HistogramState {
    struct vector<HistogramBucket, std::__1::allocator<HistogramBucket>> _dateBuckets;
    double _histogramBucketAnchor;
    double _histogramBucketSize;
    long long _currentStartDateBucket;
};

struct ObjectIdentifier {
    long long objectType;
    NSUInteger identifier;
};

struct _HDActivityCacheActiveSourceCalculatorSourceEvent {
    double _field1;
    long long _field2;
    long long _field3;
};

struct _HDDeleteObjectDataDefn {
    BOOL _field1;
    long long _field2;
    long long _field3;
    long long _field4;
};

struct _HDStatisticsCollectionCalculatorImplementation;

struct _HDWrappedSource {
    id _field1;
    vector_d87a6415 _field2;
    double _field3;
    BOOL _field4;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*> __next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*> __next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> __left_;
};

struct atomic_flag {
    _Atomic BOOL _Value;
};

struct deque<std::__1::tuple<double, double, float>, std::__1::allocator<std::__1::tuple<double, double, float>>> {
    struct __split_buffer<std::__1::tuple<double, double, float>*, std::__1::allocator<std::__1::tuple<double, double, float>*>> {
        struct tuple<double, double, float> __first_;
        struct tuple<double, double, float> __begin_;
        struct tuple<double, double, float> __end_;
        struct __compressed_pair<std::__1::tuple<double, double, float>**, std::__1::allocator<std::__1::tuple<double, double, float>*>> {
            struct tuple<double, double, float> __value_;
        } __end_cap_;
    } __map_;
    NSUInteger __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::tuple<double, double, float>>> {
        NSUInteger __value_;
    } __size_;
};

struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> {
    unsigned int __x_;
};

struct map<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>, std::__1::less<_HKDataTypeCode>, std::__1::allocator<std::__1::pair<const _HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>>> {
    struct __tree<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>, std::__1::less<_HKDataTypeCode>, true>, std::__1::allocator<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> __begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>>>, std::__1::less<_HKDataTypeCode>, true>> {
            NSUInteger __value_;
        } __pair3_;
    } __tree_;
};

struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>> {
    struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>> {
            NSUInteger _field1;
        } _field3;
    } _field1;
};

struct normal_distribution<double> {
    struct param_type __p_;
    double _V_;
    BOOL _V_hot_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct param_type {
    double __mean_;
    double __stddev_;
};

struct shared_ptr<health::DataStore> {
    struct DataStore __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct tuple<double, double, float>;

struct tuple<long long, HKSample *> {
    struct __tuple_impl<std::__1::__tuple_indices<0, 1>, long long, HKSample *> {
        long long __value_;
        HKSample *__value_;
    } __base_;
};

struct unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::__1::default_delete<_HDStatisticsCollectionCalculatorImplementation>> {
    struct __compressed_pair<_HDStatisticsCollectionCalculatorImplementation *, std::__1::default_delete<_HDStatisticsCollectionCalculatorImplementation>> {
        struct _HDStatisticsCollectionCalculatorImplementation __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*> __value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>*>> {
                NSUInteger __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*> __value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*>*>> {
                NSUInteger __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<long long, HKSource *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, HKSource *>>> {
    struct __hash_table<std::__1::__hash_value_type<long long, HKSource *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, HKSource *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::hash<long long>, true>> {
            NSUInteger __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::equal_to<long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool>>> {
    struct __hash_table<std::__1::__hash_value_type<long long, bool>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, bool>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true>> {
            NSUInteger __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource>> {
    struct HDActivityCacheActiveSource __begin_;
    struct HDActivityCacheActiveSource __end_;
    struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource>> {
        struct HDActivityCacheActiveSource __value_;
    } __end_cap_;
};

struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> {
    struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample __begin_;
    struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample __end_;
    struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> {
        struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample __value_;
    } __end_cap_;
};

struct vector<HDActivityCacheStatisticsBuilderBreatheSample, std::__1::allocator<HDActivityCacheStatisticsBuilderBreatheSample>> {
    struct HDActivityCacheStatisticsBuilderBreatheSample _field1;
    struct HDActivityCacheStatisticsBuilderBreatheSample _field2;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderBreatheSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderBreatheSample>> {
        struct HDActivityCacheStatisticsBuilderBreatheSample _field1;
    } _field3;
};

struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample>> {
    struct HDActivityCacheStatisticsBuilderSample __begin_;
    struct HDActivityCacheStatisticsBuilderSample __end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample>> {
        struct HDActivityCacheStatisticsBuilderSample __value_;
    } __end_cap_;
};

struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> {
    struct HDActivityCacheStatisticsBuilderStandHourSample __begin_;
    struct HDActivityCacheStatisticsBuilderStandHourSample __end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> {
        struct HDActivityCacheStatisticsBuilderStandHourSample __value_;
    } __end_cap_;
};

struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> {
    struct HDActivityCacheStatisticsBuilderWorkoutSample __begin_;
    struct HDActivityCacheStatisticsBuilderWorkoutSample __end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> {
        struct HDActivityCacheStatisticsBuilderWorkoutSample __value_;
    } __end_cap_;
};

struct vector<HistogramBucket, std::__1::allocator<HistogramBucket>> {
    struct HistogramBucket __begin_;
    struct HistogramBucket __end_;
    struct __compressed_pair<HistogramBucket *, std::__1::allocator<HistogramBucket>> {
        struct HistogramBucket __value_;
    } __end_cap_;
};

struct vector<_HDWrappedSource, std::__1::allocator<_HDWrappedSource>> {
    struct _HDWrappedSource __begin_;
    struct _HDWrappedSource __end_;
    struct __compressed_pair<_HDWrappedSource *, std::__1::allocator<_HDWrappedSource>> {
        struct _HDWrappedSource __value_;
    } __end_cap_;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long _field1;
    long long _field2;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long _field1;
    } _field3;
};

struct vector<std::__1::tuple<long long, HKSample *>, std::__1::allocator<std::__1::tuple<long long, HKSample *>>> {
    struct tuple<long long, HKSample *> __begin_;
    struct tuple<long long, HKSample *> __end_;
    struct __compressed_pair<std::__1::tuple<long long, HKSample *>*, std::__1::allocator<std::__1::tuple<long long, HKSample *>>> {
        struct tuple<long long, HKSample *> __value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    unsigned char _field3;
} CDStruct_4c492439;

typedef struct {
    unsigned int list;
    NSUInteger count;
    NSUInteger size;
} CDStruct_9f2792e4;

typedef struct {
    long long list;
    NSUInteger count;
    NSUInteger size;
} CDStruct_5df41632;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    BOOL _field4;
    BOOL _field5;
    BOOL _field6;
} CDStruct_b3408c18;

// Ambiguous groups
typedef struct {
    unsigned int endDate:1;
    unsigned int startDate:1;
    unsigned int value:1;
} CDStruct_2d5b04fb;

typedef struct {
    unsigned int requestType:1;
} CDStruct_7c66fec0;

typedef struct {
    unsigned int success:1;
} CDStruct_f2ecb737;

typedef struct {
    unsigned int timestamp:1;
} CDStruct_b5306035;

typedef struct {
    unsigned int value:1;
} CDStruct_01ef6375;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct {
    long long majorVersion;
    long long minorVersion;
    long long patchVersion;
} CDStruct_f6aba300;

typedef struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal>>> {
    struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>> {
            NSUInteger _field1;
        } _field3;
    } _field1;
} map_c63dce6d;

typedef struct shared_ptr<health::DataStore> {
    struct DataStore __ptr_;
    struct __shared_weak_count __cntrl_;
} shared_ptr_88ae0538;

typedef struct unordered_map<long long, HKSource *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, HKSource *>>> {
    struct __hash_table<std::__1::__hash_value_type<long long, HKSource *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, HKSource *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, HKSource *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::hash<long long>, true>> {
            NSUInteger __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, HKSource *>, std::__1::equal_to<long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
} unordered_map_0fc8d213;

typedef struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource>> {
    struct HDActivityCacheActiveSource __begin_;
    struct HDActivityCacheActiveSource __end_;
    struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource>> {
        struct HDActivityCacheActiveSource __value_;
    } __end_cap_;
} vector_67487aec;

typedef struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> {
    struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample __begin_;
    struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample __end_;
    struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> {
        struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample __value_;
    } __end_cap_;
} vector_8ece868d;

typedef struct vector<HDActivityCacheStatisticsBuilderBreatheSample, std::__1::allocator<HDActivityCacheStatisticsBuilderBreatheSample>> {
    struct HDActivityCacheStatisticsBuilderBreatheSample _field1;
    struct HDActivityCacheStatisticsBuilderBreatheSample _field2;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderBreatheSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderBreatheSample>> {
        struct HDActivityCacheStatisticsBuilderBreatheSample _field1;
    } _field3;
} vector_b2eb559c;

typedef struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample>> {
    struct HDActivityCacheStatisticsBuilderSample __begin_;
    struct HDActivityCacheStatisticsBuilderSample __end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample>> {
        struct HDActivityCacheStatisticsBuilderSample __value_;
    } __end_cap_;
} vector_7eaa0458;

typedef struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> {
    struct HDActivityCacheStatisticsBuilderStandHourSample __begin_;
    struct HDActivityCacheStatisticsBuilderStandHourSample __end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> {
        struct HDActivityCacheStatisticsBuilderStandHourSample __value_;
    } __end_cap_;
} vector_6cc1e454;

typedef struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> {
    struct HDActivityCacheStatisticsBuilderWorkoutSample __begin_;
    struct HDActivityCacheStatisticsBuilderWorkoutSample __end_;
    struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> {
        struct HDActivityCacheStatisticsBuilderWorkoutSample __value_;
    } __end_cap_;
} vector_89c96404;

typedef struct vector<_HDWrappedSource, std::__1::allocator<_HDWrappedSource>> {
    struct _HDWrappedSource __begin_;
    struct _HDWrappedSource __end_;
    struct __compressed_pair<_HDWrappedSource *, std::__1::allocator<_HDWrappedSource>> {
        struct _HDWrappedSource __value_;
    } __end_cap_;
} vector_f9051771;

typedef struct vector<long long, std::__1::allocator<long long>> {
    long long _field1;
    long long _field2;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long _field1;
    } _field3;
} vector_d87a6415;

