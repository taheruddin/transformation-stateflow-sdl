#ifndef __GETSET_H__
#define __GETSET_H__

#include "dataview-uniq.h"

size_t GetStreamCurrentLength(BitStream *pBitStrm);
byte *GetBitstreamBuffer(BitStream *pBitStrm);
byte GetBufferByte(byte *p, size_t off);
void SetBufferByte(byte *p, size_t off, byte b);
void ResetStream(BitStream *pStrm);
BitStream *CreateStream(size_t bufferSize);
void DestroyStream(BitStream *pBitStrm);


/* INTEGER */
asn1SccSint Amount__Get(Amount* root);

/* INTEGER */
void Amount__Set(Amount* root, asn1SccSint value);

/* INTEGER */
asn1SccSint Num__Get(Num* root);

/* INTEGER */
void Num__Set(Num* root, asn1SccSint value);

/* INTEGER */
asn1SccSint T_UInt8__Get(T_UInt8* root);

/* INTEGER */
void T_UInt8__Set(T_UInt8* root, asn1SccSint value);

/* OCTETSTRING */
long MyString__GetLength(MyString* root);

/* OCTETSTRING */
void MyString__SetLength(MyString* root, long value);

/* OCTETSTRING_bytes */
byte MyString__iDx_Get(MyString* root, int iDx);

/* OCTETSTRING_bytes */
void MyString__iDx_Set(MyString* root, int iDx, byte value);

/* INTEGER */
asn1SccSint T_Int32__Get(T_Int32* root);

/* INTEGER */
void T_Int32__Set(T_Int32* root, asn1SccSint value);

/* BOOLEAN */
flag T_Boolean__Get(T_Boolean* root);

/* BOOLEAN */
void T_Boolean__Set(T_Boolean* root, flag value);

/* REAL */
double MyReal__Get(MyReal* root);

/* REAL */
void MyReal__Set(MyReal* root, double value);

/* INTEGER */
asn1SccSint T_Int8__Get(T_Int8* root);

/* INTEGER */
void T_Int8__Set(T_Int8* root, asn1SccSint value);

/* INTEGER */
asn1SccSint T_UInt32__Get(T_UInt32* root);

/* INTEGER */
void T_UInt32__Set(T_UInt32* root, asn1SccSint value);

/* Helper functions for NATIVE encodings */

void SetDataFor_Amount(void *dest, void *src);
byte* MovePtrBySizeOf_Amount(byte *pData);
byte* CreateInstanceOf_Amount(void);
void DestroyInstanceOf_Amount(byte *pData);

void SetDataFor_Num(void *dest, void *src);
byte* MovePtrBySizeOf_Num(byte *pData);
byte* CreateInstanceOf_Num(void);
void DestroyInstanceOf_Num(byte *pData);

void SetDataFor_T_UInt8(void *dest, void *src);
byte* MovePtrBySizeOf_T_UInt8(byte *pData);
byte* CreateInstanceOf_T_UInt8(void);
void DestroyInstanceOf_T_UInt8(byte *pData);

void SetDataFor_MyString(void *dest, void *src);
byte* MovePtrBySizeOf_MyString(byte *pData);
byte* CreateInstanceOf_MyString(void);
void DestroyInstanceOf_MyString(byte *pData);

void SetDataFor_T_Int32(void *dest, void *src);
byte* MovePtrBySizeOf_T_Int32(byte *pData);
byte* CreateInstanceOf_T_Int32(void);
void DestroyInstanceOf_T_Int32(byte *pData);

void SetDataFor_T_Boolean(void *dest, void *src);
byte* MovePtrBySizeOf_T_Boolean(byte *pData);
byte* CreateInstanceOf_T_Boolean(void);
void DestroyInstanceOf_T_Boolean(byte *pData);

void SetDataFor_MyReal(void *dest, void *src);
byte* MovePtrBySizeOf_MyReal(byte *pData);
byte* CreateInstanceOf_MyReal(void);
void DestroyInstanceOf_MyReal(byte *pData);

void SetDataFor_T_Int8(void *dest, void *src);
byte* MovePtrBySizeOf_T_Int8(byte *pData);
byte* CreateInstanceOf_T_Int8(void);
void DestroyInstanceOf_T_Int8(byte *pData);

void SetDataFor_T_UInt32(void *dest, void *src);
byte* MovePtrBySizeOf_T_UInt32(byte *pData);
byte* CreateInstanceOf_T_UInt32(void);
void DestroyInstanceOf_T_UInt32(byte *pData);

void SetDataFor_int(void *dest, void *src);
byte* MovePtrBySizeOf_int(byte *pData);
byte* CreateInstanceOf_int(void);
void DestroyInstanceOf_int(byte *pData);


#endif
