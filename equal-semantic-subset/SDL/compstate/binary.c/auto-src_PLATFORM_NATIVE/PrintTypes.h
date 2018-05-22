#ifndef __PRINTTYPES_H__
#define __PRINTTYPES_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "dataview-uniq.h" // Generated by ASN1SCC

void PrintT_Int8(const char *paramName, const asn1SccT_Int8 *pData);
void PrintMyString(const char *paramName, const asn1SccMyString *pData);
void PrintT_UInt32(const char *paramName, const asn1SccT_UInt32 *pData);
void PrintMyReal(const char *paramName, const asn1SccMyReal *pData);
void PrintT_Int32(const char *paramName, const asn1SccT_Int32 *pData);
void PrintT_Boolean(const char *paramName, const asn1SccT_Boolean *pData);
void PrintT_UInt8(const char *paramName, const asn1SccT_UInt8 *pData);

#ifdef __cplusplus
}
#endif

#endif
