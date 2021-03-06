//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGSize {
    float _field1;
    float _field2;
};

struct RSDAAPChunk {
    struct RSDAAPChunkHeader _field1;
    char *_field2;
};

struct RSDAAPChunkHeader {
    unsigned int _field1;
    unsigned int _field2;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

#pragma mark Typedef'd Structures

// Ambiguous groups
typedef struct {
    unsigned int responseCode:1;
    unsigned int sessionIdentifier:1;
} CDStruct_377099b8;

typedef struct {
    unsigned int sessionIdentifier:1;
    unsigned int volume:1;
} CDStruct_77dc7163;

typedef struct {
    unsigned int sessionIdentifier:1;
} CDStruct_07a29e00;

