//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUObjectGraph.h>

#import <Symbolication/VMUCommonGraphInterface-Protocol.h>

@class NSArray, NSDictionary, NSString, VMUClassInfoMap, VMUDebugTimer, VMUGraphStackLogReader, VMUNodeToStringMap, VMURangeToStringMap;
@protocol VMUStackLogReader;

@interface VMUProcessObjectGraph : VMUObjectGraph <VMUCommonGraphInterface>
{
    int _pid;
    unsigned int _kernPageSize;
    NSUInteger _machAbsolute;
    NSArray *_regions;
    unsigned int _regionCount;
    NSArray *_zoneNames;
    NSString *_processName;
    NSString *_processDescriptionString;
    NSString *_executablePath;
    NSString *_binaryImagesDescription;
    VMURangeToStringMap *_threadNameRanges;
    VMURangeToStringMap *_binarySectionNameRanges;
    VMURangeToStringMap *_regionSymbolNameRanges;
    BOOL _gotObjcClassStructureRanges;
    BOOL _showRawClassNames;
    NSDictionary *_pthreadOffsets;
    VMUNodeToStringMap *_nodeLabels;
    void _userMarked;
    VMUGraphStackLogReader *_stackLogReader;
    VMUDebugTimer *_debugTimer;
    NSUInteger _physicalFootprint;
    NSUInteger _physicalFootprintPeak;
    BOOL _showsPhysFootprint;
}

@property(nonatomic) BOOL showsPhysFootprint; // @synthesize showsPhysFootprint=_showsPhysFootprint;
@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(nonatomic) NSUInteger physicalFootprintPeak; // @synthesize physicalFootprintPeak=_physicalFootprintPeak;
@property(nonatomic) NSUInteger physicalFootprint; // @synthesize physicalFootprint=_physicalFootprint;
@property(nonatomic) BOOL showRawClassNames; // @synthesize showRawClassNames=_showRawClassNames;
@property(retain, nonatomic) id <VMUStackLogReader> stackLogReader; // @synthesize stackLogReader=_stackLogReader;
@property(retain, nonatomic) VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
@property(nonatomic) NSUInteger snapshotMachTime; // @synthesize snapshotMachTime=_machAbsolute;
@property(readonly, nonatomic) unsigned int regionCount; // @synthesize regionCount=_regionCount;
@property(readonly, nonatomic) unsigned int vmPageSize; // @synthesize vmPageSize=_kernPageSize;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
// - (void).cxx_destruct;
// - (BOOL)nodeDetailIsAutoreleasePoolContentPage:(CDStruct_599faf0f)arg1;
- (BOOL)nodeIsAutoreleasePoolContentPage:(unsigned int)arg1;
- (void)markReachableNodesFromRoots:(void )arg1 inMap:(void )arg2 options:(unsigned int)arg3;
- (void)markReachableNodesFromRoots:(void )arg1 inMap:(void )arg2;
- (void)refineEdges:(unsigned int)arg1 withOptions:(unsigned int)arg2 markingInvalid:(void )arg3;
- (void)refineTypesWithOverlay:(id)arg1;
// - (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
// - (id)_detailedNodeOffsetDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
// - (id)nodeOffsetDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3;
// - (id)nodeDescription:(unsigned int)arg1 withDestinationNode:(unsigned int)arg2 referenceInfo:(CDStruct_8b65991f)arg3;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(NSUInteger)arg2 showLabel:(BOOL)arg3;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(NSUInteger)arg2;
- (id)nodeDescription:(unsigned int)arg1;
- (id)shortNodeDescription:(unsigned int)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (id)vmuVMRegionForAddress:(NSUInteger)arg1;
- (id)_descriptionForRegionAddress:(NSUInteger)arg1 withOffset:(NSUInteger)arg2 showSegment:(BOOL)arg3;
@property(readonly, nonatomic) BOOL is64bit;
@property(readonly, nonatomic) NSString *processName;
@property(readonly, nonatomic) NSString *binaryImagesDescription;
@property(readonly, nonatomic) NSString *processDescriptionString;
- (void)setUserMarked:(void )arg1;
- (void )copyUserMarked;
- (void)_renameWithNodeMap:(unsigned int )arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int )arg3 edgeNamespace:(unsigned int)arg4;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (id)zoneNameForIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int zoneCount;
@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses;
- (id)shortLabelForNode:(unsigned int)arg1;
- (void )contentForNode:(unsigned int)arg1;
- (BOOL)hasLabelsForNodes;
- (id)labelForNode:(unsigned int)arg1;
- (void)setLabel:(id)arg1 forNode:(unsigned int)arg2;
- (unsigned int)nodeReferencedFromDataRegion:(id)arg1 byGlobalSymbol:(id)arg2;
- (unsigned int)enumerateReferencesFromDataRegion:(id)arg1 atGlobalSymbol:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
//  (struct _VMURange)rangeForSymbolName:(id)arg1 inRegion:(id)arg2;
//  (struct _VMURange)regionSymbolRangeContainingAddress:(NSUInteger)arg1;
- (id)regionSymbolNameForAddress:(NSUInteger)arg1;
//  (void)setRegionSymbolName:(id)arg1 forRange:(struct _VMURange)arg2;
- (void)_deriveObjcClassStructureRanges;
//  (struct _VMURange)binarySectionRangeContainingAddress:(NSUInteger)arg1;
- (id)binarySectionNameForAddress:(NSUInteger)arg1;
//  (void)setBinarySectionName:(id)arg1 forRange:(struct _VMURange)arg2;
- (id)threadNameForAddress:(NSUInteger)arg1;
//  (void)setThreadName:(id)arg1 forRange:(struct _VMURange)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(NSUInteger)arg2;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(NSUInteger)arg3 diskLogs:(id)arg4;
- (void)dealloc;
//  (id)initWithPid:(int)arg1 nodes:(struct _VMUBlockNode )arg2 nodeCount:(unsigned int)arg3 zoneNames:(id)arg4 classInfoMap:(id)arg5 regions:(id)arg6 pthreadOffsets:(id)arg7 userMarked:(void )arg8;

@end

