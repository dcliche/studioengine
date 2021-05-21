#ifndef TYPES_H
#define TYPES_H

#ifndef YES
#define YES -1
#endif

#ifndef NO
#define NO 0
#endif

#if (TARGET_OS_IPHONE || TARGET_OS_MAC)

#include <MacTypes.h>

typedef Float32 GraphSampleType;
typedef Float32 SampleType;

#else

#ifndef NULL
#define NULL 0L
#endif  // NULL

typedef char SInt8;
typedef unsigned char UInt8;

typedef short int SInt16;
typedef unsigned short int UInt16;

typedef int SInt32;
typedef unsigned int UInt32;
typedef float Float32;

typedef long long SInt64;
typedef unsigned long long UInt64;
typedef double Float64;

typedef Float32 GraphSampleType;
typedef Float32 SampleType;

#endif

#endif  // TYPES_H
