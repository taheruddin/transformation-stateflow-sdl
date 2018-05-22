/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "dataview-uniq.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void MyString_Initialize(MyString* pVal)
{
    *pVal = (MyString) {0,
    {
    }
};
}
#endif

 
flag MyString_IsConstraintValid(const MyString* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (0 <= pVal->nCount && pVal->nCount <= 255);
	*pErrCode = ret ? 0 : ERR_MyString;

	return ret;
}

flag MyString_Equal(const MyString* pVal1, const MyString* pVal2)
{
	flag ret=TRUE;
	
	ret = ((pVal1->nCount == pVal2->nCount) && (memcmp(pVal1->arr, pVal2->arr, pVal1->nCount) ==0));
		

	return ret;
}

flag MyString_Encode(const MyString* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? MyString_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 0, 255);
	    	
	    for(i1=0; (i1 < (int)pVal->nCount) && ret; i1++) 
	    {
	    	BitStream_AppendByte0(pBitStrm, pVal->arr[i1]);
	    }
    }

	return ret;
}

flag MyString_Decode(MyString* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nCount;
	int i1=0;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 0, 255);
	*pErrCode = ret ? 0 : 268435457;
	pVal->nCount = (long)nCount;
		
	for(i1=0; (i1 < (int)pVal->nCount) && ret; i1++) 
	{
		ret = BitStream_ReadByte(pBitStrm, &pVal->arr[i1]); 
		*pErrCode = ret ? 0 : 268435458;
	}

	return ret;
}

flag MyString_ACN_Encode(const MyString* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? MyString_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 0, 255);
	    	
	    for(i1=0; (i1 < (int)pVal->nCount) && ret; i1++) 
	    {
	    	BitStream_AppendByte0(pBitStrm, pVal->arr[i1]);
	    }
    }

	return ret;
}

flag MyString_ACN_Decode(MyString* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 0, 255);
    *pErrCode = ret ? 0 : 268435459;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < (int)pVal->nCount) && ret; i1++) 
    {
    	ret = BitStream_ReadByte(pBitStrm, &pVal->arr[i1]); 
    	*pErrCode = ret ? 0 : 268435460;
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void MyReal_Initialize(MyReal* pVal)
{
    *pVal = (MyReal) 0.00000000000000000000E+000;
}
#endif

 
flag MyReal_IsConstraintValid(const MyReal* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (0.00000000000000000000E+000 <= *pVal && *pVal <= 1.00000000000000000000E+003);
	*pErrCode = ret ? 0 : ERR_MyReal;

	return ret;
}

flag MyReal_Equal(const MyReal* pVal1, const MyReal* pVal2)
{
	flag ret=TRUE;
	
	ret =  *pVal1 == *pVal2 ? TRUE : (*pVal1 == 0.0 ? *pVal2 ==0.0 : (fabs((*pVal1 - *pVal2) / *pVal1) < 0.00001));

	return ret;
}

flag MyReal_Encode(const MyReal* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? MyReal_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeReal(pBitStrm, *pVal);
    }

	return ret;
}

flag MyReal_Decode(MyReal* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	BitStream_DecodeReal(pBitStrm, pVal);
	*pErrCode = ret ? 0 : 268435461;

	return ret;
}

flag MyReal_ACN_Encode(const MyReal* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? MyReal_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeReal(pBitStrm, *pVal);
    }

	return ret;
}

flag MyReal_ACN_Decode(MyReal* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    BitStream_DecodeReal(pBitStrm, pVal);
    *pErrCode = ret ? 0 : 268435462;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void T_Int32_Initialize(T_Int32* pVal)
{
    *pVal = (T_Int32) -2147483648LL;
}
#endif

 
flag T_Int32_IsConstraintValid(const T_Int32* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (-2147483648LL <= *pVal && *pVal <= 2147483647LL);
	*pErrCode = ret ? 0 : ERR_T_Int32;

	return ret;
}

flag T_Int32_Equal(const T_Int32* pVal1, const T_Int32* pVal2)
{
	flag ret=TRUE;
	
	ret = (*pVal1 == *pVal2);

	return ret;
}

flag T_Int32_Encode(const T_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? T_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -2147483648LL, 2147483647LL);
    }

	return ret;
}

flag T_Int32_Decode(T_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
	*pErrCode = ret ? 0 : 268435463;

	return ret;
}

flag T_Int32_ACN_Encode(const T_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? T_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -2147483648LL, 2147483647LL);
    }

	return ret;
}

flag T_Int32_ACN_Decode(T_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
    *pErrCode = ret ? 0 : 268435464;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void T_UInt32_Initialize(T_UInt32* pVal)
{
    *pVal = (T_UInt32) 0;
}
#endif

 
flag T_UInt32_IsConstraintValid(const T_UInt32* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (*pVal <= 4294967295LL);
	*pErrCode = ret ? 0 : ERR_T_UInt32;

	return ret;
}

flag T_UInt32_Equal(const T_UInt32* pVal1, const T_UInt32* pVal2)
{
	flag ret=TRUE;
	
	ret = (*pVal1 == *pVal2);

	return ret;
}

flag T_UInt32_Encode(const T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? T_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 4294967295LL);
    }

	return ret;
}

flag T_UInt32_Decode(T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
	*pErrCode = ret ? 0 : 268435465;

	return ret;
}

flag T_UInt32_ACN_Encode(const T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? T_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 4294967295LL);
    }

	return ret;
}

flag T_UInt32_ACN_Decode(T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
    *pErrCode = ret ? 0 : 268435466;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void T_Int8_Initialize(T_Int8* pVal)
{
    *pVal = (T_Int8) -128;
}
#endif

 
flag T_Int8_IsConstraintValid(const T_Int8* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (-128 <= *pVal && *pVal <= 127);
	*pErrCode = ret ? 0 : ERR_T_Int8;

	return ret;
}

flag T_Int8_Equal(const T_Int8* pVal1, const T_Int8* pVal2)
{
	flag ret=TRUE;
	
	ret = (*pVal1 == *pVal2);

	return ret;
}

flag T_Int8_Encode(const T_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? T_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -128, 127);
    }

	return ret;
}

flag T_Int8_Decode(T_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
	*pErrCode = ret ? 0 : 268435467;

	return ret;
}

flag T_Int8_ACN_Encode(const T_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? T_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -128, 127);
    }

	return ret;
}

flag T_Int8_ACN_Decode(T_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
    *pErrCode = ret ? 0 : 268435468;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void T_UInt8_Initialize(T_UInt8* pVal)
{
    *pVal = (T_UInt8) 0;
}
#endif

 
flag T_UInt8_IsConstraintValid(const T_UInt8* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (*pVal <= 255);
	*pErrCode = ret ? 0 : ERR_T_UInt8;

	return ret;
}

flag T_UInt8_Equal(const T_UInt8* pVal1, const T_UInt8* pVal2)
{
	flag ret=TRUE;
	
	ret = (*pVal1 == *pVal2);

	return ret;
}

flag T_UInt8_Encode(const T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? T_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 255);
    }

	return ret;
}

flag T_UInt8_Decode(T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
	*pErrCode = ret ? 0 : 268435469;

	return ret;
}

flag T_UInt8_ACN_Encode(const T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? T_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 255);
    }

	return ret;
}

flag T_UInt8_ACN_Decode(T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
    *pErrCode = ret ? 0 : 268435470;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void T_Boolean_Initialize(T_Boolean* pVal)
{
    *pVal = (T_Boolean) FALSE;
}
#endif

 
flag T_Boolean_IsConstraintValid(const T_Boolean* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = TRUE; *pErrCode = 0;

	return ret;
}

flag T_Boolean_Equal(const T_Boolean* pVal1, const T_Boolean* pVal2)
{
	flag ret=TRUE;
	
	ret = ( (*pVal1 && *pVal2) || (!*pVal1 && !*pVal2));

	return ret;
}

flag T_Boolean_Encode(const T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? T_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_AppendBit(pBitStrm,*pVal);
    }

	return ret;
}

flag T_Boolean_Decode(T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_ReadBit(pBitStrm, pVal);
	*pErrCode = ret ? 0 : 268435471;

	return ret;
}

flag T_Boolean_ACN_Encode(const T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? T_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    {
	    	static byte true_data[] = {0x80};
	    	static byte false_data[] = {0x7F};
	        byte* tmp = *pVal ? true_data : false_data; 
	        BitStream_AppendBits(pBitStrm, tmp, 1);
	    }
    }

	return ret;
}

flag T_Boolean_ACN_Decode(T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    {
    	static byte tmp[] = {0x80};
    	ret = BitStream_ReadBitPattern(pBitStrm, tmp, 1, pVal);
        *pErrCode = ret ? 0 : 268435472;
    }
    return ret;
}

