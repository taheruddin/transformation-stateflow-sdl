#ifndef __C_DATAVIEW_UNIQ_H__
#define __C_DATAVIEW_UNIQ_H__

#include <stdlib.h> /* for size_t */

#include "dataview-uniq.h" // Space certified compiler generated

#include "../../system_config.h" // Choose ASN.1 Types to use

#ifdef __NEED_Num_UPER
size_t Encode_UPER_Num(void *pBuffer, size_t iMaxBufferSize, const asn1SccNum *pSrc);
#endif

#ifdef __NEED_Num_ACN
size_t Encode_ACN_Num(void *pBuffer, size_t iMaxBufferSize, asn1SccNum *pSrc);
#endif

#ifdef __NEED_Num_NATIVE
size_t Encode_NATIVE_Num(void *pBuffer, size_t iMaxBufferSize, const asn1SccNum *pSrc);
#endif

#ifdef __NEED_Num_UPER
int Decode_UPER_Num(asn1SccNum *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Num_ACN
int Decode_ACN_Num(asn1SccNum *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Num_NATIVE
int Decode_NATIVE_Num(asn1SccNum *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Amount_UPER
size_t Encode_UPER_Amount(void *pBuffer, size_t iMaxBufferSize, const asn1SccAmount *pSrc);
#endif

#ifdef __NEED_Amount_ACN
size_t Encode_ACN_Amount(void *pBuffer, size_t iMaxBufferSize, asn1SccAmount *pSrc);
#endif

#ifdef __NEED_Amount_NATIVE
size_t Encode_NATIVE_Amount(void *pBuffer, size_t iMaxBufferSize, const asn1SccAmount *pSrc);
#endif

#ifdef __NEED_Amount_UPER
int Decode_UPER_Amount(asn1SccAmount *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Amount_ACN
int Decode_ACN_Amount(asn1SccAmount *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_Amount_NATIVE
int Decode_NATIVE_Amount(asn1SccAmount *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyString_UPER
size_t Encode_UPER_MyString(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyString *pSrc);
#endif

#ifdef __NEED_MyString_ACN
size_t Encode_ACN_MyString(void *pBuffer, size_t iMaxBufferSize, asn1SccMyString *pSrc);
#endif

#ifdef __NEED_MyString_NATIVE
size_t Encode_NATIVE_MyString(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyString *pSrc);
#endif

#ifdef __NEED_MyString_UPER
int Decode_UPER_MyString(asn1SccMyString *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyString_ACN
int Decode_ACN_MyString(asn1SccMyString *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyString_NATIVE
int Decode_NATIVE_MyString(asn1SccMyString *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_UPER
size_t Encode_UPER_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_ACN
size_t Encode_ACN_T_Int32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_NATIVE
size_t Encode_NATIVE_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_UPER
int Decode_UPER_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_ACN
int Decode_ACN_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_NATIVE
int Decode_NATIVE_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_UPER
size_t Encode_UPER_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_ACN
size_t Encode_ACN_T_Int8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_NATIVE
size_t Encode_NATIVE_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_UPER
int Decode_UPER_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_ACN
int Decode_ACN_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_NATIVE
int Decode_NATIVE_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_UPER
size_t Encode_UPER_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_ACN
size_t Encode_ACN_T_UInt32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_NATIVE
size_t Encode_NATIVE_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_UPER
int Decode_UPER_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_ACN
int Decode_ACN_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_NATIVE
int Decode_NATIVE_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyReal_UPER
size_t Encode_UPER_MyReal(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyReal *pSrc);
#endif

#ifdef __NEED_MyReal_ACN
size_t Encode_ACN_MyReal(void *pBuffer, size_t iMaxBufferSize, asn1SccMyReal *pSrc);
#endif

#ifdef __NEED_MyReal_NATIVE
size_t Encode_NATIVE_MyReal(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyReal *pSrc);
#endif

#ifdef __NEED_MyReal_UPER
int Decode_UPER_MyReal(asn1SccMyReal *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyReal_ACN
int Decode_ACN_MyReal(asn1SccMyReal *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyReal_NATIVE
int Decode_NATIVE_MyReal(asn1SccMyReal *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_UPER
size_t Encode_UPER_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_ACN
size_t Encode_ACN_T_Boolean(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_NATIVE
size_t Encode_NATIVE_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_UPER
int Decode_UPER_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_ACN
int Decode_ACN_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_NATIVE
int Decode_NATIVE_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_UPER
size_t Encode_UPER_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_ACN
size_t Encode_ACN_T_UInt8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_NATIVE
size_t Encode_NATIVE_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_UPER
int Decode_UPER_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_ACN
int Decode_ACN_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_NATIVE
int Decode_NATIVE_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif


#endif
