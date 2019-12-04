//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures




struct SCNMatrix4 {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
};

struct SCNVector3 {
    float x;
    float y;
    float z;
};

struct SCNVector4 {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};




struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    long long _field3;
} CDStruct_b01a1f36;

typedef struct {
    double timestamp;
    _Bool translation__orientation__cameraSpace;
    float blendShapeWeights_smooth[51];
    float blendShapeWeights_raw[51];
    float parameters_smooth[1];
    float parameters_raw[1];
} CDStruct_32896d86;

typedef struct {
    double totalLatency;
    double arKitLatency;
    double updateSyncLatency;
    double metalLatency;
    double timeBetweenARFrame;
    unsigned int fps;
    double audioTime;
    unsigned int droppedFrame;
    _Bool doubleBuffer;
    unsigned int onlineShaderCompilationCount;
} CDStruct_53ba08a1;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;
