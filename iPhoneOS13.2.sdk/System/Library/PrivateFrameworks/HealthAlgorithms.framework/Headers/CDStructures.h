//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Named Structures

struct CnAlgs;

struct ngt_DayStreamProcessor;

struct ngt_HistoricalAnalyzer;

struct optional<unsigned int> {
    union {
        char __null_state_;
        unsigned int __val_;
    } ;
    BOOL __engaged_;
};

struct unique_ptr<CinnAlgs::CnAlgs, std::__1::default_delete<CinnAlgs::CnAlgs>> {
    struct __compressed_pair<CinnAlgs::CnAlgs *, std::__1::default_delete<CinnAlgs::CnAlgs>> {
        struct CnAlgs __value_;
    } __ptr_;
};

struct unique_ptr<Nightingale::ngt_DayStreamProcessor, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor>> {
    struct __compressed_pair<Nightingale::ngt_DayStreamProcessor *, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor>> {
        struct ngt_DayStreamProcessor __value_;
    } __ptr_;
};

struct unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::__1::default_delete<Nightingale::ngt_HistoricalAnalyzer>> {
    struct __compressed_pair<Nightingale::ngt_HistoricalAnalyzer *, std::__1::default_delete<Nightingale::ngt_HistoricalAnalyzer>> {
        struct ngt_HistoricalAnalyzer __value_;
    } __ptr_;
};

