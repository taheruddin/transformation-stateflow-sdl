#ifndef GENERATED_ASN1SCC_DATAVIEW_UNIQ_H
#define GENERATED_ASN1SCC_DATAVIEW_UNIQ_H
/*
Code automatically generated by asn1scc tool
*/
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef asn1SccSint asn1SccT_Int32;

#define asn1SccT_Int32_REQUIRED_BYTES_FOR_ENCODING       4 
#define asn1SccT_Int32_REQUIRED_BITS_FOR_ENCODING        32
#define asn1SccT_Int32_REQUIRED_BYTES_FOR_ACN_ENCODING   4 
#define asn1SccT_Int32_REQUIRED_BITS_FOR_ACN_ENCODING    32
#define asn1SccT_Int32_REQUIRED_BYTES_FOR_XER_ENCODING   39

void asn1SccT_Int32_Initialize(asn1SccT_Int32* pVal);
flag asn1SccT_Int32_IsConstraintValid(const asn1SccT_Int32* val, int* pErrCode);
#ifndef ERR_asn1SccT_Int32 
#define ERR_asn1SccT_Int32		1001  /*(-2147483648 .. 2147483647)*/
#endif

typedef asn1SccUint asn1SccT_UInt32;

#define asn1SccT_UInt32_REQUIRED_BYTES_FOR_ENCODING       4 
#define asn1SccT_UInt32_REQUIRED_BITS_FOR_ENCODING        32
#define asn1SccT_UInt32_REQUIRED_BYTES_FOR_ACN_ENCODING   4 
#define asn1SccT_UInt32_REQUIRED_BITS_FOR_ACN_ENCODING    32
#define asn1SccT_UInt32_REQUIRED_BYTES_FOR_XER_ENCODING   41

void asn1SccT_UInt32_Initialize(asn1SccT_UInt32* pVal);
flag asn1SccT_UInt32_IsConstraintValid(const asn1SccT_UInt32* val, int* pErrCode);
#ifndef ERR_asn1SccT_UInt32 
#define ERR_asn1SccT_UInt32		1002  /*(0 .. 4294967295)*/
#endif

typedef asn1SccSint asn1SccT_Int8;

#define asn1SccT_Int8_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccT_Int8_REQUIRED_BITS_FOR_ENCODING        8
#define asn1SccT_Int8_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccT_Int8_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define asn1SccT_Int8_REQUIRED_BYTES_FOR_XER_ENCODING   37

void asn1SccT_Int8_Initialize(asn1SccT_Int8* pVal);
flag asn1SccT_Int8_IsConstraintValid(const asn1SccT_Int8* val, int* pErrCode);
#ifndef ERR_asn1SccT_Int8 
#define ERR_asn1SccT_Int8		1003  /*(-128 .. 127)*/
#endif

typedef asn1SccUint asn1SccT_UInt8;

#define asn1SccT_UInt8_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccT_UInt8_REQUIRED_BITS_FOR_ENCODING        8
#define asn1SccT_UInt8_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccT_UInt8_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define asn1SccT_UInt8_REQUIRED_BYTES_FOR_XER_ENCODING   39

void asn1SccT_UInt8_Initialize(asn1SccT_UInt8* pVal);
flag asn1SccT_UInt8_IsConstraintValid(const asn1SccT_UInt8* val, int* pErrCode);
#ifndef ERR_asn1SccT_UInt8 
#define ERR_asn1SccT_UInt8		1004  /*(0 .. 255)*/
#endif

typedef flag asn1SccT_Boolean;

#define asn1SccT_Boolean_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccT_Boolean_REQUIRED_BITS_FOR_ENCODING        1
#define asn1SccT_Boolean_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccT_Boolean_REQUIRED_BITS_FOR_ACN_ENCODING    1
#define asn1SccT_Boolean_REQUIRED_BYTES_FOR_XER_ENCODING   36

void asn1SccT_Boolean_Initialize(asn1SccT_Boolean* pVal);
flag asn1SccT_Boolean_IsConstraintValid(const asn1SccT_Boolean* val, int* pErrCode);


typedef asn1SccUint asn1SccMyInteger;

#define asn1SccMyInteger_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccMyInteger_REQUIRED_BITS_FOR_ENCODING        8
#define asn1SccMyInteger_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccMyInteger_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define asn1SccMyInteger_REQUIRED_BYTES_FOR_XER_ENCODING   43

void asn1SccMyInteger_Initialize(asn1SccMyInteger* pVal);
flag asn1SccMyInteger_IsConstraintValid(const asn1SccMyInteger* val, int* pErrCode);
#ifndef ERR_asn1SccMyInteger 
#define ERR_asn1SccMyInteger		1005  /*(0 .. 255)*/
#endif

typedef struct {    int nCount; 
    
    byte arr[255];
} asn1SccMyString;

#define asn1SccMyString_REQUIRED_BYTES_FOR_ENCODING       256 
#define asn1SccMyString_REQUIRED_BITS_FOR_ENCODING        2048
#define asn1SccMyString_REQUIRED_BYTES_FOR_ACN_ENCODING   256 
#define asn1SccMyString_REQUIRED_BITS_FOR_ACN_ENCODING    2048
#define asn1SccMyString_REQUIRED_BYTES_FOR_XER_ENCODING   531

void asn1SccMyString_Initialize(asn1SccMyString* pVal);
flag asn1SccMyString_IsConstraintValid(const asn1SccMyString* val, int* pErrCode);
#ifndef ERR_asn1SccMyString 
#define ERR_asn1SccMyString		1006  /*(SIZE(0 .. 255))*/
#endif

 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccT_Int32_Encode(const asn1SccT_Int32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Int32_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Int32_ACN_Encode(const asn1SccT_Int32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Int32_ACN_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_UInt32_Encode(const asn1SccT_UInt32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_UInt32_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_UInt32_ACN_Encode(const asn1SccT_UInt32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_UInt32_ACN_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Int8_Encode(const asn1SccT_Int8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Int8_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Int8_ACN_Encode(const asn1SccT_Int8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Int8_ACN_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_UInt8_Encode(const asn1SccT_UInt8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_UInt8_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_UInt8_ACN_Encode(const asn1SccT_UInt8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_UInt8_ACN_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Boolean_Encode(const asn1SccT_Boolean* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Boolean_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Boolean_ACN_Encode(const asn1SccT_Boolean* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Boolean_ACN_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyInteger_Encode(const asn1SccMyInteger* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyInteger_Decode(asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyInteger_ACN_Encode(const asn1SccMyInteger* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyInteger_ACN_Decode(asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyString_Encode(const asn1SccMyString* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyString_Decode(asn1SccMyString* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyString_ACN_Encode(const asn1SccMyString* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyString_ACN_Decode(asn1SccMyString* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif
