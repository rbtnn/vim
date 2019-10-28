

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for dimm.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: none
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_ActiveIMM,0x4955DD30,0xB159,0x11d0,0x8F,0xCF,0x00,0xAA,0x00,0x6B,0xCC,0x59);


MIDL_DEFINE_GUID(IID, IID_IEnumRegisterWordA,0x08C03412,0xF96B,0x11d0,0xA4,0x75,0x00,0xAA,0x00,0x6B,0xCC,0x59);


MIDL_DEFINE_GUID(IID, IID_IEnumRegisterWordW,0x4955DD31,0xB159,0x11d0,0x8F,0xCF,0x00,0xAA,0x00,0x6B,0xCC,0x59);


MIDL_DEFINE_GUID(IID, IID_IEnumInputContext,0x09b5eab0,0xf997,0x11d1,0x93,0xd4,0x00,0x60,0xb0,0x67,0xb8,0x6e);


MIDL_DEFINE_GUID(IID, IID_IActiveIMMRegistrar,0xb3458082,0xbd00,0x11d1,0x93,0x9b,0x00,0x60,0xb0,0x67,0xb8,0x6e);


MIDL_DEFINE_GUID(IID, IID_IActiveIMMMessagePumpOwner,0xb5cf2cfa,0x8aeb,0x11d1,0x93,0x64,0x00,0x60,0xb0,0x67,0xb8,0x6e);


MIDL_DEFINE_GUID(IID, IID_IActiveIMMApp,0x08c0e040,0x62d1,0x11d1,0x93,0x26,0x00,0x60,0xb0,0x67,0xb8,0x6e);


MIDL_DEFINE_GUID(IID, IID_IActiveIMMIME,0x08C03411,0xF96B,0x11d0,0xA4,0x75,0x00,0xAA,0x00,0x6B,0xCC,0x59);


MIDL_DEFINE_GUID(IID, IID_IActiveIME,0x6FE20962,0xD077,0x11d0,0x8F,0xE7,0x00,0xAA,0x00,0x6B,0xCC,0x59);


MIDL_DEFINE_GUID(IID, IID_IActiveIME2,0xe1c4bf0e,0x2d53,0x11d2,0x93,0xe1,0x00,0x60,0xb0,0x67,0xb8,0x6e);


MIDL_DEFINE_GUID(CLSID, CLSID_CActiveIMM,0x4955DD33,0xB159,0x11d0,0x8F,0xCF,0x00,0xAA,0x00,0x6B,0xCC,0x59);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



