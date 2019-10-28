

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __dimm_h__
#define __dimm_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEnumRegisterWordA_FWD_DEFINED__
#define __IEnumRegisterWordA_FWD_DEFINED__
typedef interface IEnumRegisterWordA IEnumRegisterWordA;

#endif 	/* __IEnumRegisterWordA_FWD_DEFINED__ */


#ifndef __IEnumRegisterWordW_FWD_DEFINED__
#define __IEnumRegisterWordW_FWD_DEFINED__
typedef interface IEnumRegisterWordW IEnumRegisterWordW;

#endif 	/* __IEnumRegisterWordW_FWD_DEFINED__ */


#ifndef __IEnumInputContext_FWD_DEFINED__
#define __IEnumInputContext_FWD_DEFINED__
typedef interface IEnumInputContext IEnumInputContext;

#endif 	/* __IEnumInputContext_FWD_DEFINED__ */


#ifndef __IActiveIMMRegistrar_FWD_DEFINED__
#define __IActiveIMMRegistrar_FWD_DEFINED__
typedef interface IActiveIMMRegistrar IActiveIMMRegistrar;

#endif 	/* __IActiveIMMRegistrar_FWD_DEFINED__ */


#ifndef __IActiveIMMMessagePumpOwner_FWD_DEFINED__
#define __IActiveIMMMessagePumpOwner_FWD_DEFINED__
typedef interface IActiveIMMMessagePumpOwner IActiveIMMMessagePumpOwner;

#endif 	/* __IActiveIMMMessagePumpOwner_FWD_DEFINED__ */


#ifndef __IActiveIMMApp_FWD_DEFINED__
#define __IActiveIMMApp_FWD_DEFINED__
typedef interface IActiveIMMApp IActiveIMMApp;

#endif 	/* __IActiveIMMApp_FWD_DEFINED__ */


#ifndef __IActiveIMMIME_FWD_DEFINED__
#define __IActiveIMMIME_FWD_DEFINED__
typedef interface IActiveIMMIME IActiveIMMIME;

#endif 	/* __IActiveIMMIME_FWD_DEFINED__ */


#ifndef __IActiveIME_FWD_DEFINED__
#define __IActiveIME_FWD_DEFINED__
typedef interface IActiveIME IActiveIME;

#endif 	/* __IActiveIME_FWD_DEFINED__ */


#ifndef __IActiveIME2_FWD_DEFINED__
#define __IActiveIME2_FWD_DEFINED__
typedef interface IActiveIME2 IActiveIME2;

#endif 	/* __IActiveIME2_FWD_DEFINED__ */


#ifndef __CActiveIMM_FWD_DEFINED__
#define __CActiveIMM_FWD_DEFINED__

#ifdef __cplusplus
typedef class CActiveIMM CActiveIMM;
#else
typedef struct CActiveIMM CActiveIMM;
#endif /* __cplusplus */

#endif 	/* __CActiveIMM_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_dimm_0000_0000 */
/* [local] */ 

//=--------------------------------------------------------------------------=
// dimm.h
//=--------------------------------------------------------------------------=
// (C) Copyright 1995-1998 Microsoft Corporation.  All Rights Reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//=--------------------------------------------------------------------------=

#pragma comment(lib,"uuid.lib")

//--------------------------------------------------------------------------
// IActiveIMM Interfaces.




extern RPC_IF_HANDLE __MIDL_itf_dimm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dimm_0000_0000_v0_0_s_ifspec;


#ifndef __ActiveIMM_LIBRARY_DEFINED__
#define __ActiveIMM_LIBRARY_DEFINED__

/* library ActiveIMM */
/* [version][lcid][helpstring][uuid] */ 

#include <imm.h>
#if 0
typedef WORD LANGID;

typedef /* [public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0001
    {
    LPSTR lpReading;
    LPSTR lpWord;
    } 	REGISTERWORDA;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0002
    {
    LPWSTR lpReading;
    LPWSTR lpWord;
    } 	REGISTERWORDW;

typedef /* [public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0003
    {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[ 32 ];
    } 	LOGFONTA;

typedef /* [public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0004
    {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[ 32 ];
    } 	LOGFONTW;

typedef DWORD HIMC;

typedef DWORD HIMCC;

typedef /* [public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0005
    {
    DWORD dwIndex;
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
    } 	CANDIDATEFORM;

typedef /* [public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0006
    {
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
    } 	COMPOSITIONFORM;

typedef /* [public][public][public][public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0007
    {
    DWORD dwSize;
    DWORD dwStyle;
    DWORD dwCount;
    DWORD dwSelection;
    DWORD dwPageStart;
    DWORD dwPageSize;
    DWORD dwOffset[ 1 ];
    } 	CANDIDATELIST;

typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0008
    {
    DWORD dwStyle;
    CHAR szDescription[ 32 ];
    } 	STYLEBUFA;

typedef /* [public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0009
    {
    DWORD dwStyle;
    WCHAR szDescription[ 32 ];
    } 	STYLEBUFW;

typedef WORD ATOM;

#endif
#if (WINVER < 0x040A)
typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0010
    {
    UINT cbSize;
    UINT fType;
    UINT fState;
    UINT wID;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    DWORD dwItemData;
    CHAR szString[ 80 ];
    HBITMAP hbmpItem;
    } 	IMEMENUITEMINFOA;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0011
    {
    UINT cbSize;
    UINT fType;
    UINT fState;
    UINT wID;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    DWORD dwItemData;
    WCHAR szString[ 80 ];
    HBITMAP hbmpItem;
    } 	IMEMENUITEMINFOW;

#endif
#ifndef _DDKIMM_H_
typedef /* [public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0012
    {
    HWND hWnd;
    BOOL fOpen;
    POINT ptStatusWndPos;
    POINT ptSoftKbdPos;
    DWORD fdwConversion;
    DWORD fdwSentence;
    union 
        {
        LOGFONTA A;
        LOGFONTW W;
        } 	lfFont;
    COMPOSITIONFORM cfCompForm;
    CANDIDATEFORM cfCandForm[ 4 ];
    HIMCC hCompStr;
    HIMCC hCandInfo;
    HIMCC hGuideLine;
    HIMCC hPrivate;
    DWORD dwNumMsgBuf;
    HIMCC hMsgBuf;
    DWORD fdwInit;
    DWORD dwReserve[ 3 ];
    } 	INPUTCONTEXT;

typedef /* [public][public] */ struct __MIDL___MIDL_itf_dimm_0000_0000_0014
    {
    DWORD dwPrivateDataSize;
    DWORD fdwProperty;
    DWORD fdwConversionCaps;
    DWORD fdwSentenceCaps;
    DWORD fdwUICaps;
    DWORD fdwSCSCaps;
    DWORD fdwSelectCaps;
    } 	IMEINFO;

#endif

EXTERN_C const IID LIBID_ActiveIMM;

#ifndef __IEnumRegisterWordA_INTERFACE_DEFINED__
#define __IEnumRegisterWordA_INTERFACE_DEFINED__

/* interface IEnumRegisterWordA */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumRegisterWordA;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08C03412-F96B-11d0-A475-00AA006BCC59")
    IEnumRegisterWordA : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumRegisterWordA **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG ulCount,
            /* [out] */ REGISTERWORDA *rgRegisterWord,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG ulCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumRegisterWordAVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumRegisterWordA * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumRegisterWordA * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumRegisterWordA * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumRegisterWordA * This,
            /* [out] */ IEnumRegisterWordA **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumRegisterWordA * This,
            /* [in] */ ULONG ulCount,
            /* [out] */ REGISTERWORDA *rgRegisterWord,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumRegisterWordA * This);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumRegisterWordA * This,
            /* [in] */ ULONG ulCount);
        
        END_INTERFACE
    } IEnumRegisterWordAVtbl;

    interface IEnumRegisterWordA
    {
        CONST_VTBL struct IEnumRegisterWordAVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumRegisterWordA_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumRegisterWordA_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumRegisterWordA_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumRegisterWordA_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumRegisterWordA_Next(This,ulCount,rgRegisterWord,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,ulCount,rgRegisterWord,pcFetched) ) 

#define IEnumRegisterWordA_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumRegisterWordA_Skip(This,ulCount)	\
    ( (This)->lpVtbl -> Skip(This,ulCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumRegisterWordA_INTERFACE_DEFINED__ */


#ifndef __IEnumRegisterWordW_INTERFACE_DEFINED__
#define __IEnumRegisterWordW_INTERFACE_DEFINED__

/* interface IEnumRegisterWordW */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumRegisterWordW;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4955DD31-B159-11d0-8FCF-00AA006BCC59")
    IEnumRegisterWordW : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumRegisterWordW **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG ulCount,
            /* [out] */ REGISTERWORDW *rgRegisterWord,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG ulCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumRegisterWordWVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumRegisterWordW * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumRegisterWordW * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumRegisterWordW * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumRegisterWordW * This,
            /* [out] */ IEnumRegisterWordW **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumRegisterWordW * This,
            /* [in] */ ULONG ulCount,
            /* [out] */ REGISTERWORDW *rgRegisterWord,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumRegisterWordW * This);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumRegisterWordW * This,
            /* [in] */ ULONG ulCount);
        
        END_INTERFACE
    } IEnumRegisterWordWVtbl;

    interface IEnumRegisterWordW
    {
        CONST_VTBL struct IEnumRegisterWordWVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumRegisterWordW_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumRegisterWordW_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumRegisterWordW_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumRegisterWordW_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumRegisterWordW_Next(This,ulCount,rgRegisterWord,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,ulCount,rgRegisterWord,pcFetched) ) 

#define IEnumRegisterWordW_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumRegisterWordW_Skip(This,ulCount)	\
    ( (This)->lpVtbl -> Skip(This,ulCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumRegisterWordW_INTERFACE_DEFINED__ */


#ifndef __IEnumInputContext_INTERFACE_DEFINED__
#define __IEnumInputContext_INTERFACE_DEFINED__

/* interface IEnumInputContext */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumInputContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09b5eab0-f997-11d1-93d4-0060b067b86e")
    IEnumInputContext : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumInputContext **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG ulCount,
            /* [out] */ HIMC *rgInputContext,
            /* [out] */ ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG ulCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumInputContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumInputContext * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumInputContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumInputContext * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumInputContext * This,
            /* [out] */ IEnumInputContext **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumInputContext * This,
            /* [in] */ ULONG ulCount,
            /* [out] */ HIMC *rgInputContext,
            /* [out] */ ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumInputContext * This);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumInputContext * This,
            /* [in] */ ULONG ulCount);
        
        END_INTERFACE
    } IEnumInputContextVtbl;

    interface IEnumInputContext
    {
        CONST_VTBL struct IEnumInputContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumInputContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumInputContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumInputContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumInputContext_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumInputContext_Next(This,ulCount,rgInputContext,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,ulCount,rgInputContext,pcFetched) ) 

#define IEnumInputContext_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumInputContext_Skip(This,ulCount)	\
    ( (This)->lpVtbl -> Skip(This,ulCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumInputContext_INTERFACE_DEFINED__ */


#ifndef __IActiveIMMRegistrar_INTERFACE_DEFINED__
#define __IActiveIMMRegistrar_INTERFACE_DEFINED__

/* interface IActiveIMMRegistrar */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IActiveIMMRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b3458082-bd00-11d1-939b-0060b067b86e")
    IActiveIMMRegistrar : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterIME( 
            /* [in] */ REFCLSID rclsid,
            /* [in] */ LANGID lgid,
            /* [in] */ LPCWSTR pszIconFile,
            /* [in] */ LPCWSTR pszDesc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterIME( 
            /* [in] */ REFCLSID rclsid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActiveIMMRegistrarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActiveIMMRegistrar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActiveIMMRegistrar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActiveIMMRegistrar * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterIME )( 
            IActiveIMMRegistrar * This,
            /* [in] */ REFCLSID rclsid,
            /* [in] */ LANGID lgid,
            /* [in] */ LPCWSTR pszIconFile,
            /* [in] */ LPCWSTR pszDesc);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterIME )( 
            IActiveIMMRegistrar * This,
            /* [in] */ REFCLSID rclsid);
        
        END_INTERFACE
    } IActiveIMMRegistrarVtbl;

    interface IActiveIMMRegistrar
    {
        CONST_VTBL struct IActiveIMMRegistrarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveIMMRegistrar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActiveIMMRegistrar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActiveIMMRegistrar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActiveIMMRegistrar_RegisterIME(This,rclsid,lgid,pszIconFile,pszDesc)	\
    ( (This)->lpVtbl -> RegisterIME(This,rclsid,lgid,pszIconFile,pszDesc) ) 

#define IActiveIMMRegistrar_UnregisterIME(This,rclsid)	\
    ( (This)->lpVtbl -> UnregisterIME(This,rclsid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActiveIMMRegistrar_INTERFACE_DEFINED__ */


#ifndef __IActiveIMMMessagePumpOwner_INTERFACE_DEFINED__
#define __IActiveIMMMessagePumpOwner_INTERFACE_DEFINED__

/* interface IActiveIMMMessagePumpOwner */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IActiveIMMMessagePumpOwner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b5cf2cfa-8aeb-11d1-9364-0060b067b86e")
    IActiveIMMMessagePumpOwner : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE End( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnTranslateMessage( 
            /* [in] */ const MSG *pMsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Pause( 
            /* [out] */ DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( 
            /* [in] */ DWORD dwCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActiveIMMMessagePumpOwnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActiveIMMMessagePumpOwner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActiveIMMMessagePumpOwner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActiveIMMMessagePumpOwner * This);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IActiveIMMMessagePumpOwner * This);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            IActiveIMMMessagePumpOwner * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnTranslateMessage )( 
            IActiveIMMMessagePumpOwner * This,
            /* [in] */ const MSG *pMsg);
        
        HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IActiveIMMMessagePumpOwner * This,
            /* [out] */ DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IActiveIMMMessagePumpOwner * This,
            /* [in] */ DWORD dwCookie);
        
        END_INTERFACE
    } IActiveIMMMessagePumpOwnerVtbl;

    interface IActiveIMMMessagePumpOwner
    {
        CONST_VTBL struct IActiveIMMMessagePumpOwnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveIMMMessagePumpOwner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActiveIMMMessagePumpOwner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActiveIMMMessagePumpOwner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActiveIMMMessagePumpOwner_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IActiveIMMMessagePumpOwner_End(This)	\
    ( (This)->lpVtbl -> End(This) ) 

#define IActiveIMMMessagePumpOwner_OnTranslateMessage(This,pMsg)	\
    ( (This)->lpVtbl -> OnTranslateMessage(This,pMsg) ) 

#define IActiveIMMMessagePumpOwner_Pause(This,pdwCookie)	\
    ( (This)->lpVtbl -> Pause(This,pdwCookie) ) 

#define IActiveIMMMessagePumpOwner_Resume(This,dwCookie)	\
    ( (This)->lpVtbl -> Resume(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActiveIMMMessagePumpOwner_INTERFACE_DEFINED__ */


#ifndef __IActiveIMMApp_INTERFACE_DEFINED__
#define __IActiveIMMApp_INTERFACE_DEFINED__

/* interface IActiveIMMApp */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IActiveIMMApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08c0e040-62d1-11d1-9326-0060b067b86e")
    IActiveIMMApp : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AssociateContext( 
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIME,
            /* [out] */ HIMC *phPrev) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigureIMEA( 
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDA *pData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigureIMEW( 
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDW *pData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateContext( 
            /* [out] */ HIMC *phIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroyContext( 
            /* [in] */ HIMC hIME) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumRegisterWordA( 
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordA **pEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumRegisterWordW( 
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordW **pEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EscapeA( 
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ LPVOID pData,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EscapeW( 
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ LPVOID pData,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateListA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pCandList,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateListW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pCandList,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateListCountA( 
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwListSize,
            /* [out] */ DWORD *pdwBufLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateListCountW( 
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwListSize,
            /* [out] */ DWORD *pdwBufLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateWindow( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [out] */ CANDIDATEFORM *pCandidate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionFontA( 
            /* [in] */ HIMC hIMC,
            /* [out] */ LOGFONTA *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionFontW( 
            /* [in] */ HIMC hIMC,
            /* [out] */ LOGFONTW *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionStringA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LONG *plCopied,
            /* [out] */ LPVOID pBuf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionStringW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LONG *plCopied,
            /* [out] */ LPVOID pBuf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionWindow( 
            /* [in] */ HIMC hIMC,
            /* [out] */ COMPOSITIONFORM *pCompForm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ HWND hWnd,
            /* [out] */ HIMC *phIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConversionListA( 
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ CANDIDATELIST *pDst,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConversionListW( 
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPWSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ CANDIDATELIST *pDst,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConversionStatus( 
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pfdwConversion,
            /* [out] */ DWORD *pfdwSentence) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultIMEWnd( 
            /* [in] */ HWND hWnd,
            /* [out] */ HWND *phDefWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescriptionA( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPSTR szDescription,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescriptionW( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPWSTR szDescription,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGuideLineA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LPSTR pBuf,
            /* [out] */ DWORD *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGuideLineW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LPWSTR pBuf,
            /* [out] */ DWORD *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIMEFileNameA( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPSTR szFileName,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIMEFileNameW( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPWSTR szFileName,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOpenStatus( 
            /* [in] */ HIMC hIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ HKL hKL,
            /* [in] */ DWORD fdwIndex,
            /* [out] */ DWORD *pdwProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegisterWordStyleA( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFA *pStyleBuf,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegisterWordStyleW( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFW *pStyleBuf,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatusWindowPos( 
            /* [in] */ HIMC hIMC,
            /* [out] */ POINT *pptPos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVirtualKey( 
            /* [in] */ HWND hWnd,
            /* [out] */ UINT *puVirtualKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InstallIMEA( 
            /* [in] */ LPSTR szIMEFileName,
            /* [in] */ LPSTR szLayoutText,
            /* [out] */ HKL *phKL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InstallIMEW( 
            /* [in] */ LPWSTR szIMEFileName,
            /* [in] */ LPWSTR szLayoutText,
            /* [out] */ HKL *phKL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsIME( 
            /* [in] */ HKL hKL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsUIMessageA( 
            /* [in] */ HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsUIMessageW( 
            /* [in] */ HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyIME( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwAction,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterWordA( 
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szRegister) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterWordW( 
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseContext( 
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCandidateWindow( 
            /* [in] */ HIMC hIMC,
            /* [in] */ CANDIDATEFORM *pCandidate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionFontA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ LOGFONTA *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionFontW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ LOGFONTW *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionStringA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ LPVOID pRead,
            /* [in] */ DWORD dwReadLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionStringW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ LPVOID pRead,
            /* [in] */ DWORD dwReadLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionWindow( 
            /* [in] */ HIMC hIMC,
            /* [in] */ COMPOSITIONFORM *pCompForm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetConversionStatus( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD fdwConversion,
            /* [in] */ DWORD fdwSentence) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOpenStatus( 
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fOpen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatusWindowPos( 
            /* [in] */ HIMC hIMC,
            /* [in] */ POINT *pptPos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SimulateHotKey( 
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwHotKeyID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterWordA( 
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szUnregister) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterWordW( 
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szUnregister) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Activate( 
            /* [in] */ BOOL fRestoreLayout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Deactivate( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDefWindowProc( 
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FilterClientWindows( 
            /* [in] */ ATOM *aaClassList,
            /* [in] */ UINT uSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodePageA( 
            /* [in] */ HKL hKL,
            /* [out] */ UINT *uCodePage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLangId( 
            /* [in] */ HKL hKL,
            /* [out] */ LANGID *plid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssociateContextEx( 
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisableIME( 
            /* [in] */ DWORD idThread) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImeMenuItemsA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ IMEMENUITEMINFOA *pImeParentMenu,
            /* [out] */ IMEMENUITEMINFOA *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImeMenuItemsW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ IMEMENUITEMINFOW *pImeParentMenu,
            /* [out] */ IMEMENUITEMINFOW *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumInputContext( 
            /* [in] */ DWORD idThread,
            /* [out] */ IEnumInputContext **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActiveIMMAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActiveIMMApp * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActiveIMMApp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActiveIMMApp * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssociateContext )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIME,
            /* [out] */ HIMC *phPrev);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureIMEA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDA *pData);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureIMEW )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDW *pData);
        
        HRESULT ( STDMETHODCALLTYPE *CreateContext )( 
            IActiveIMMApp * This,
            /* [out] */ HIMC *phIMC);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyContext )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIME);
        
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWordA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordA **pEnum);
        
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWordW )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordW **pEnum);
        
        HRESULT ( STDMETHODCALLTYPE *EscapeA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ LPVOID pData,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *EscapeW )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ LPVOID pData,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListA )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pCandList,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListW )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pCandList,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListCountA )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwListSize,
            /* [out] */ DWORD *pdwBufLen);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListCountW )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwListSize,
            /* [out] */ DWORD *pdwBufLen);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateWindow )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [out] */ CANDIDATEFORM *pCandidate);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionFontA )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ LOGFONTA *plf);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionFontW )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ LOGFONTW *plf);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionStringA )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LONG *plCopied,
            /* [out] */ LPVOID pBuf);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionStringW )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LONG *plCopied,
            /* [out] */ LPVOID pBuf);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionWindow )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ COMPOSITIONFORM *pCompForm);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWnd,
            /* [out] */ HIMC *phIMC);
        
        HRESULT ( STDMETHODCALLTYPE *GetConversionListA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ CANDIDATELIST *pDst,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetConversionListW )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPWSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ CANDIDATELIST *pDst,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetConversionStatus )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pfdwConversion,
            /* [out] */ DWORD *pfdwSentence);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultIMEWnd )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWnd,
            /* [out] */ HWND *phDefWnd);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPSTR szDescription,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionW )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPWSTR szDescription,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetGuideLineA )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LPSTR pBuf,
            /* [out] */ DWORD *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetGuideLineW )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LPWSTR pBuf,
            /* [out] */ DWORD *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetIMEFileNameA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPSTR szFileName,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetIMEFileNameW )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPWSTR szFileName,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetOpenStatus )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ DWORD fdwIndex,
            /* [out] */ DWORD *pdwProperty);
        
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyleA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFA *pStyleBuf,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyleW )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFW *pStyleBuf,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatusWindowPos )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetVirtualKey )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWnd,
            /* [out] */ UINT *puVirtualKey);
        
        HRESULT ( STDMETHODCALLTYPE *InstallIMEA )( 
            IActiveIMMApp * This,
            /* [in] */ LPSTR szIMEFileName,
            /* [in] */ LPSTR szLayoutText,
            /* [out] */ HKL *phKL);
        
        HRESULT ( STDMETHODCALLTYPE *InstallIMEW )( 
            IActiveIMMApp * This,
            /* [in] */ LPWSTR szIMEFileName,
            /* [in] */ LPWSTR szLayoutText,
            /* [out] */ HKL *phKL);
        
        HRESULT ( STDMETHODCALLTYPE *IsIME )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL);
        
        HRESULT ( STDMETHODCALLTYPE *IsUIMessageA )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *IsUIMessageW )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyIME )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwAction,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwValue);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWordA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szRegister);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWordW )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseContext )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIMC);
        
        HRESULT ( STDMETHODCALLTYPE *SetCandidateWindow )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ CANDIDATEFORM *pCandidate);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionFontA )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ LOGFONTA *plf);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionFontW )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ LOGFONTW *plf);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionStringA )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ LPVOID pRead,
            /* [in] */ DWORD dwReadLen);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionStringW )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ LPVOID pRead,
            /* [in] */ DWORD dwReadLen);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionWindow )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ COMPOSITIONFORM *pCompForm);
        
        HRESULT ( STDMETHODCALLTYPE *SetConversionStatus )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD fdwConversion,
            /* [in] */ DWORD fdwSentence);
        
        HRESULT ( STDMETHODCALLTYPE *SetOpenStatus )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fOpen);
        
        HRESULT ( STDMETHODCALLTYPE *SetStatusWindowPos )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SimulateHotKey )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwHotKeyID);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterWordA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szUnregister);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterWordW )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szUnregister);
        
        HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IActiveIMMApp * This,
            /* [in] */ BOOL fRestoreLayout);
        
        HRESULT ( STDMETHODCALLTYPE *Deactivate )( 
            IActiveIMMApp * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnDefWindowProc )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *FilterClientWindows )( 
            IActiveIMMApp * This,
            /* [in] */ ATOM *aaClassList,
            /* [in] */ UINT uSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodePageA )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [out] */ UINT *uCodePage);
        
        HRESULT ( STDMETHODCALLTYPE *GetLangId )( 
            IActiveIMMApp * This,
            /* [in] */ HKL hKL,
            /* [out] */ LANGID *plid);
        
        HRESULT ( STDMETHODCALLTYPE *AssociateContextEx )( 
            IActiveIMMApp * This,
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *DisableIME )( 
            IActiveIMMApp * This,
            /* [in] */ DWORD idThread);
        
        HRESULT ( STDMETHODCALLTYPE *GetImeMenuItemsA )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ IMEMENUITEMINFOA *pImeParentMenu,
            /* [out] */ IMEMENUITEMINFOA *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetImeMenuItemsW )( 
            IActiveIMMApp * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ IMEMENUITEMINFOW *pImeParentMenu,
            /* [out] */ IMEMENUITEMINFOW *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInputContext )( 
            IActiveIMMApp * This,
            /* [in] */ DWORD idThread,
            /* [out] */ IEnumInputContext **ppEnum);
        
        END_INTERFACE
    } IActiveIMMAppVtbl;

    interface IActiveIMMApp
    {
        CONST_VTBL struct IActiveIMMAppVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveIMMApp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActiveIMMApp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActiveIMMApp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActiveIMMApp_AssociateContext(This,hWnd,hIME,phPrev)	\
    ( (This)->lpVtbl -> AssociateContext(This,hWnd,hIME,phPrev) ) 

#define IActiveIMMApp_ConfigureIMEA(This,hKL,hWnd,dwMode,pData)	\
    ( (This)->lpVtbl -> ConfigureIMEA(This,hKL,hWnd,dwMode,pData) ) 

#define IActiveIMMApp_ConfigureIMEW(This,hKL,hWnd,dwMode,pData)	\
    ( (This)->lpVtbl -> ConfigureIMEW(This,hKL,hWnd,dwMode,pData) ) 

#define IActiveIMMApp_CreateContext(This,phIMC)	\
    ( (This)->lpVtbl -> CreateContext(This,phIMC) ) 

#define IActiveIMMApp_DestroyContext(This,hIME)	\
    ( (This)->lpVtbl -> DestroyContext(This,hIME) ) 

#define IActiveIMMApp_EnumRegisterWordA(This,hKL,szReading,dwStyle,szRegister,pData,pEnum)	\
    ( (This)->lpVtbl -> EnumRegisterWordA(This,hKL,szReading,dwStyle,szRegister,pData,pEnum) ) 

#define IActiveIMMApp_EnumRegisterWordW(This,hKL,szReading,dwStyle,szRegister,pData,pEnum)	\
    ( (This)->lpVtbl -> EnumRegisterWordW(This,hKL,szReading,dwStyle,szRegister,pData,pEnum) ) 

#define IActiveIMMApp_EscapeA(This,hKL,hIMC,uEscape,pData,plResult)	\
    ( (This)->lpVtbl -> EscapeA(This,hKL,hIMC,uEscape,pData,plResult) ) 

#define IActiveIMMApp_EscapeW(This,hKL,hIMC,uEscape,pData,plResult)	\
    ( (This)->lpVtbl -> EscapeW(This,hKL,hIMC,uEscape,pData,plResult) ) 

#define IActiveIMMApp_GetCandidateListA(This,hIMC,dwIndex,uBufLen,pCandList,puCopied)	\
    ( (This)->lpVtbl -> GetCandidateListA(This,hIMC,dwIndex,uBufLen,pCandList,puCopied) ) 

#define IActiveIMMApp_GetCandidateListW(This,hIMC,dwIndex,uBufLen,pCandList,puCopied)	\
    ( (This)->lpVtbl -> GetCandidateListW(This,hIMC,dwIndex,uBufLen,pCandList,puCopied) ) 

#define IActiveIMMApp_GetCandidateListCountA(This,hIMC,pdwListSize,pdwBufLen)	\
    ( (This)->lpVtbl -> GetCandidateListCountA(This,hIMC,pdwListSize,pdwBufLen) ) 

#define IActiveIMMApp_GetCandidateListCountW(This,hIMC,pdwListSize,pdwBufLen)	\
    ( (This)->lpVtbl -> GetCandidateListCountW(This,hIMC,pdwListSize,pdwBufLen) ) 

#define IActiveIMMApp_GetCandidateWindow(This,hIMC,dwIndex,pCandidate)	\
    ( (This)->lpVtbl -> GetCandidateWindow(This,hIMC,dwIndex,pCandidate) ) 

#define IActiveIMMApp_GetCompositionFontA(This,hIMC,plf)	\
    ( (This)->lpVtbl -> GetCompositionFontA(This,hIMC,plf) ) 

#define IActiveIMMApp_GetCompositionFontW(This,hIMC,plf)	\
    ( (This)->lpVtbl -> GetCompositionFontW(This,hIMC,plf) ) 

#define IActiveIMMApp_GetCompositionStringA(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf)	\
    ( (This)->lpVtbl -> GetCompositionStringA(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf) ) 

#define IActiveIMMApp_GetCompositionStringW(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf)	\
    ( (This)->lpVtbl -> GetCompositionStringW(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf) ) 

#define IActiveIMMApp_GetCompositionWindow(This,hIMC,pCompForm)	\
    ( (This)->lpVtbl -> GetCompositionWindow(This,hIMC,pCompForm) ) 

#define IActiveIMMApp_GetContext(This,hWnd,phIMC)	\
    ( (This)->lpVtbl -> GetContext(This,hWnd,phIMC) ) 

#define IActiveIMMApp_GetConversionListA(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied)	\
    ( (This)->lpVtbl -> GetConversionListA(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied) ) 

#define IActiveIMMApp_GetConversionListW(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied)	\
    ( (This)->lpVtbl -> GetConversionListW(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied) ) 

#define IActiveIMMApp_GetConversionStatus(This,hIMC,pfdwConversion,pfdwSentence)	\
    ( (This)->lpVtbl -> GetConversionStatus(This,hIMC,pfdwConversion,pfdwSentence) ) 

#define IActiveIMMApp_GetDefaultIMEWnd(This,hWnd,phDefWnd)	\
    ( (This)->lpVtbl -> GetDefaultIMEWnd(This,hWnd,phDefWnd) ) 

#define IActiveIMMApp_GetDescriptionA(This,hKL,uBufLen,szDescription,puCopied)	\
    ( (This)->lpVtbl -> GetDescriptionA(This,hKL,uBufLen,szDescription,puCopied) ) 

#define IActiveIMMApp_GetDescriptionW(This,hKL,uBufLen,szDescription,puCopied)	\
    ( (This)->lpVtbl -> GetDescriptionW(This,hKL,uBufLen,szDescription,puCopied) ) 

#define IActiveIMMApp_GetGuideLineA(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult)	\
    ( (This)->lpVtbl -> GetGuideLineA(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult) ) 

#define IActiveIMMApp_GetGuideLineW(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult)	\
    ( (This)->lpVtbl -> GetGuideLineW(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult) ) 

#define IActiveIMMApp_GetIMEFileNameA(This,hKL,uBufLen,szFileName,puCopied)	\
    ( (This)->lpVtbl -> GetIMEFileNameA(This,hKL,uBufLen,szFileName,puCopied) ) 

#define IActiveIMMApp_GetIMEFileNameW(This,hKL,uBufLen,szFileName,puCopied)	\
    ( (This)->lpVtbl -> GetIMEFileNameW(This,hKL,uBufLen,szFileName,puCopied) ) 

#define IActiveIMMApp_GetOpenStatus(This,hIMC)	\
    ( (This)->lpVtbl -> GetOpenStatus(This,hIMC) ) 

#define IActiveIMMApp_GetProperty(This,hKL,fdwIndex,pdwProperty)	\
    ( (This)->lpVtbl -> GetProperty(This,hKL,fdwIndex,pdwProperty) ) 

#define IActiveIMMApp_GetRegisterWordStyleA(This,hKL,nItem,pStyleBuf,puCopied)	\
    ( (This)->lpVtbl -> GetRegisterWordStyleA(This,hKL,nItem,pStyleBuf,puCopied) ) 

#define IActiveIMMApp_GetRegisterWordStyleW(This,hKL,nItem,pStyleBuf,puCopied)	\
    ( (This)->lpVtbl -> GetRegisterWordStyleW(This,hKL,nItem,pStyleBuf,puCopied) ) 

#define IActiveIMMApp_GetStatusWindowPos(This,hIMC,pptPos)	\
    ( (This)->lpVtbl -> GetStatusWindowPos(This,hIMC,pptPos) ) 

#define IActiveIMMApp_GetVirtualKey(This,hWnd,puVirtualKey)	\
    ( (This)->lpVtbl -> GetVirtualKey(This,hWnd,puVirtualKey) ) 

#define IActiveIMMApp_InstallIMEA(This,szIMEFileName,szLayoutText,phKL)	\
    ( (This)->lpVtbl -> InstallIMEA(This,szIMEFileName,szLayoutText,phKL) ) 

#define IActiveIMMApp_InstallIMEW(This,szIMEFileName,szLayoutText,phKL)	\
    ( (This)->lpVtbl -> InstallIMEW(This,szIMEFileName,szLayoutText,phKL) ) 

#define IActiveIMMApp_IsIME(This,hKL)	\
    ( (This)->lpVtbl -> IsIME(This,hKL) ) 

#define IActiveIMMApp_IsUIMessageA(This,hWndIME,msg,wParam,lParam)	\
    ( (This)->lpVtbl -> IsUIMessageA(This,hWndIME,msg,wParam,lParam) ) 

#define IActiveIMMApp_IsUIMessageW(This,hWndIME,msg,wParam,lParam)	\
    ( (This)->lpVtbl -> IsUIMessageW(This,hWndIME,msg,wParam,lParam) ) 

#define IActiveIMMApp_NotifyIME(This,hIMC,dwAction,dwIndex,dwValue)	\
    ( (This)->lpVtbl -> NotifyIME(This,hIMC,dwAction,dwIndex,dwValue) ) 

#define IActiveIMMApp_RegisterWordA(This,hKL,szReading,dwStyle,szRegister)	\
    ( (This)->lpVtbl -> RegisterWordA(This,hKL,szReading,dwStyle,szRegister) ) 

#define IActiveIMMApp_RegisterWordW(This,hKL,szReading,dwStyle,szRegister)	\
    ( (This)->lpVtbl -> RegisterWordW(This,hKL,szReading,dwStyle,szRegister) ) 

#define IActiveIMMApp_ReleaseContext(This,hWnd,hIMC)	\
    ( (This)->lpVtbl -> ReleaseContext(This,hWnd,hIMC) ) 

#define IActiveIMMApp_SetCandidateWindow(This,hIMC,pCandidate)	\
    ( (This)->lpVtbl -> SetCandidateWindow(This,hIMC,pCandidate) ) 

#define IActiveIMMApp_SetCompositionFontA(This,hIMC,plf)	\
    ( (This)->lpVtbl -> SetCompositionFontA(This,hIMC,plf) ) 

#define IActiveIMMApp_SetCompositionFontW(This,hIMC,plf)	\
    ( (This)->lpVtbl -> SetCompositionFontW(This,hIMC,plf) ) 

#define IActiveIMMApp_SetCompositionStringA(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen)	\
    ( (This)->lpVtbl -> SetCompositionStringA(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) ) 

#define IActiveIMMApp_SetCompositionStringW(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen)	\
    ( (This)->lpVtbl -> SetCompositionStringW(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) ) 

#define IActiveIMMApp_SetCompositionWindow(This,hIMC,pCompForm)	\
    ( (This)->lpVtbl -> SetCompositionWindow(This,hIMC,pCompForm) ) 

#define IActiveIMMApp_SetConversionStatus(This,hIMC,fdwConversion,fdwSentence)	\
    ( (This)->lpVtbl -> SetConversionStatus(This,hIMC,fdwConversion,fdwSentence) ) 

#define IActiveIMMApp_SetOpenStatus(This,hIMC,fOpen)	\
    ( (This)->lpVtbl -> SetOpenStatus(This,hIMC,fOpen) ) 

#define IActiveIMMApp_SetStatusWindowPos(This,hIMC,pptPos)	\
    ( (This)->lpVtbl -> SetStatusWindowPos(This,hIMC,pptPos) ) 

#define IActiveIMMApp_SimulateHotKey(This,hWnd,dwHotKeyID)	\
    ( (This)->lpVtbl -> SimulateHotKey(This,hWnd,dwHotKeyID) ) 

#define IActiveIMMApp_UnregisterWordA(This,hKL,szReading,dwStyle,szUnregister)	\
    ( (This)->lpVtbl -> UnregisterWordA(This,hKL,szReading,dwStyle,szUnregister) ) 

#define IActiveIMMApp_UnregisterWordW(This,hKL,szReading,dwStyle,szUnregister)	\
    ( (This)->lpVtbl -> UnregisterWordW(This,hKL,szReading,dwStyle,szUnregister) ) 

#define IActiveIMMApp_Activate(This,fRestoreLayout)	\
    ( (This)->lpVtbl -> Activate(This,fRestoreLayout) ) 

#define IActiveIMMApp_Deactivate(This)	\
    ( (This)->lpVtbl -> Deactivate(This) ) 

#define IActiveIMMApp_OnDefWindowProc(This,hWnd,Msg,wParam,lParam,plResult)	\
    ( (This)->lpVtbl -> OnDefWindowProc(This,hWnd,Msg,wParam,lParam,plResult) ) 

#define IActiveIMMApp_FilterClientWindows(This,aaClassList,uSize)	\
    ( (This)->lpVtbl -> FilterClientWindows(This,aaClassList,uSize) ) 

#define IActiveIMMApp_GetCodePageA(This,hKL,uCodePage)	\
    ( (This)->lpVtbl -> GetCodePageA(This,hKL,uCodePage) ) 

#define IActiveIMMApp_GetLangId(This,hKL,plid)	\
    ( (This)->lpVtbl -> GetLangId(This,hKL,plid) ) 

#define IActiveIMMApp_AssociateContextEx(This,hWnd,hIMC,dwFlags)	\
    ( (This)->lpVtbl -> AssociateContextEx(This,hWnd,hIMC,dwFlags) ) 

#define IActiveIMMApp_DisableIME(This,idThread)	\
    ( (This)->lpVtbl -> DisableIME(This,idThread) ) 

#define IActiveIMMApp_GetImeMenuItemsA(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult)	\
    ( (This)->lpVtbl -> GetImeMenuItemsA(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult) ) 

#define IActiveIMMApp_GetImeMenuItemsW(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult)	\
    ( (This)->lpVtbl -> GetImeMenuItemsW(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult) ) 

#define IActiveIMMApp_EnumInputContext(This,idThread,ppEnum)	\
    ( (This)->lpVtbl -> EnumInputContext(This,idThread,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActiveIMMApp_INTERFACE_DEFINED__ */


#ifndef __IActiveIMMIME_INTERFACE_DEFINED__
#define __IActiveIMMIME_INTERFACE_DEFINED__

/* interface IActiveIMMIME */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IActiveIMMIME;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08C03411-F96B-11d0-A475-00AA006BCC59")
    IActiveIMMIME : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AssociateContext( 
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIME,
            /* [out] */ HIMC *phPrev) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigureIMEA( 
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDA *pData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigureIMEW( 
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDW *pData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateContext( 
            /* [out] */ HIMC *phIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroyContext( 
            /* [in] */ HIMC hIME) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumRegisterWordA( 
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordA **pEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumRegisterWordW( 
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordW **pEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EscapeA( 
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ LPVOID pData,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EscapeW( 
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ LPVOID pData,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateListA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pCandList,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateListW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pCandList,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateListCountA( 
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwListSize,
            /* [out] */ DWORD *pdwBufLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateListCountW( 
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwListSize,
            /* [out] */ DWORD *pdwBufLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateWindow( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [out] */ CANDIDATEFORM *pCandidate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionFontA( 
            /* [in] */ HIMC hIMC,
            /* [out] */ LOGFONTA *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionFontW( 
            /* [in] */ HIMC hIMC,
            /* [out] */ LOGFONTW *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionStringA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LONG *plCopied,
            /* [out] */ LPVOID pBuf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionStringW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LONG *plCopied,
            /* [out] */ LPVOID pBuf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionWindow( 
            /* [in] */ HIMC hIMC,
            /* [out] */ COMPOSITIONFORM *pCompForm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ HWND hWnd,
            /* [out] */ HIMC *phIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConversionListA( 
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ CANDIDATELIST *pDst,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConversionListW( 
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPWSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ CANDIDATELIST *pDst,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConversionStatus( 
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pfdwConversion,
            /* [out] */ DWORD *pfdwSentence) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultIMEWnd( 
            /* [in] */ HWND hWnd,
            /* [out] */ HWND *phDefWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescriptionA( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPSTR szDescription,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescriptionW( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPWSTR szDescription,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGuideLineA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LPSTR pBuf,
            /* [out] */ DWORD *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGuideLineW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LPWSTR pBuf,
            /* [out] */ DWORD *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIMEFileNameA( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPSTR szFileName,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIMEFileNameW( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPWSTR szFileName,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOpenStatus( 
            /* [in] */ HIMC hIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ HKL hKL,
            /* [in] */ DWORD fdwIndex,
            /* [out] */ DWORD *pdwProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegisterWordStyleA( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFA *pStyleBuf,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegisterWordStyleW( 
            /* [in] */ HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFW *pStyleBuf,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatusWindowPos( 
            /* [in] */ HIMC hIMC,
            /* [out] */ POINT *pptPos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVirtualKey( 
            /* [in] */ HWND hWnd,
            /* [out] */ UINT *puVirtualKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InstallIMEA( 
            /* [in] */ LPSTR szIMEFileName,
            /* [in] */ LPSTR szLayoutText,
            /* [out] */ HKL *phKL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InstallIMEW( 
            /* [in] */ LPWSTR szIMEFileName,
            /* [in] */ LPWSTR szLayoutText,
            /* [out] */ HKL *phKL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsIME( 
            /* [in] */ HKL hKL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsUIMessageA( 
            /* [in] */ HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsUIMessageW( 
            /* [in] */ HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyIME( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwAction,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterWordA( 
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szRegister) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterWordW( 
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseContext( 
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCandidateWindow( 
            /* [in] */ HIMC hIMC,
            /* [in] */ CANDIDATEFORM *pCandidate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionFontA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ LOGFONTA *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionFontW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ LOGFONTW *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionStringA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ LPVOID pRead,
            /* [in] */ DWORD dwReadLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionStringW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ LPVOID pRead,
            /* [in] */ DWORD dwReadLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionWindow( 
            /* [in] */ HIMC hIMC,
            /* [in] */ COMPOSITIONFORM *pCompForm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetConversionStatus( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD fdwConversion,
            /* [in] */ DWORD fdwSentence) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOpenStatus( 
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fOpen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatusWindowPos( 
            /* [in] */ HIMC hIMC,
            /* [in] */ POINT *pptPos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SimulateHotKey( 
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwHotKeyID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterWordA( 
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szUnregister) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterWordW( 
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szUnregister) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateMessage( 
            /* [in] */ HIMC hIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LockIMC( 
            /* [in] */ HIMC hIMC,
            /* [out] */ INPUTCONTEXT **ppIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnlockIMC( 
            /* [in] */ HIMC hIMC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIMCLockCount( 
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwLockCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIMCC( 
            /* [in] */ DWORD dwSize,
            /* [out] */ HIMCC *phIMCC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroyIMCC( 
            /* [in] */ HIMCC hIMCC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LockIMCC( 
            /* [in] */ HIMCC hIMCC,
            /* [out] */ void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnlockIMCC( 
            /* [in] */ HIMCC hIMCC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReSizeIMCC( 
            /* [in] */ HIMCC hIMCC,
            /* [in] */ DWORD dwSize,
            /* [out] */ HIMCC *phIMCC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIMCCSize( 
            /* [in] */ HIMCC hIMCC,
            /* [out] */ DWORD *pdwSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIMCCLockCount( 
            /* [in] */ HIMCC hIMCC,
            /* [out] */ DWORD *pdwLockCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHotKey( 
            /* [in] */ DWORD dwHotKeyID,
            /* [out] */ UINT *puModifiers,
            /* [out] */ UINT *puVKey,
            /* [out] */ HKL *phKL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHotKey( 
            /* [in] */ DWORD dwHotKeyID,
            /* [in] */ UINT uModifiers,
            /* [in] */ UINT uVKey,
            /* [in] */ HKL hKL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateSoftKeyboard( 
            /* [in] */ UINT uType,
            /* [in] */ HWND hOwner,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [out] */ HWND *phSoftKbdWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroySoftKeyboard( 
            /* [in] */ HWND hSoftKbdWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowSoftKeyboard( 
            /* [in] */ HWND hSoftKbdWnd,
            /* [in] */ int nCmdShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodePageA( 
            /* [in] */ HKL hKL,
            /* [out] */ UINT *uCodePage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLangId( 
            /* [in] */ HKL hKL,
            /* [out] */ LANGID *plid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE KeybdEvent( 
            /* [in] */ LANGID lgidIME,
            /* [in] */ BYTE bVk,
            /* [in] */ BYTE bScan,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwExtraInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LockModal( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnlockModal( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssociateContextEx( 
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisableIME( 
            /* [in] */ DWORD idThread) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImeMenuItemsA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ IMEMENUITEMINFOA *pImeParentMenu,
            /* [out] */ IMEMENUITEMINFOA *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImeMenuItemsW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ IMEMENUITEMINFOW *pImeParentMenu,
            /* [out] */ IMEMENUITEMINFOW *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumInputContext( 
            /* [in] */ DWORD idThread,
            /* [out] */ IEnumInputContext **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestMessageA( 
            /* [in] */ HIMC hIMC,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestMessageW( 
            /* [in] */ HIMC hIMC,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendIMCA( 
            /* [in] */ HWND hWnd,
            /* [in] */ UINT uMsg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendIMCW( 
            /* [in] */ HWND hWnd,
            /* [in] */ UINT uMsg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSleeping( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActiveIMMIMEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActiveIMMIME * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActiveIMMIME * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActiveIMMIME * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssociateContext )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIME,
            /* [out] */ HIMC *phPrev);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureIMEA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDA *pData);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureIMEW )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDW *pData);
        
        HRESULT ( STDMETHODCALLTYPE *CreateContext )( 
            IActiveIMMIME * This,
            /* [out] */ HIMC *phIMC);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyContext )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIME);
        
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWordA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordA **pEnum);
        
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWordW )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordW **pEnum);
        
        HRESULT ( STDMETHODCALLTYPE *EscapeA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ LPVOID pData,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *EscapeW )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ LPVOID pData,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListA )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pCandList,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListW )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pCandList,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListCountA )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwListSize,
            /* [out] */ DWORD *pdwBufLen);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateListCountW )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwListSize,
            /* [out] */ DWORD *pdwBufLen);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateWindow )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [out] */ CANDIDATEFORM *pCandidate);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionFontA )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ LOGFONTA *plf);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionFontW )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ LOGFONTW *plf);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionStringA )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LONG *plCopied,
            /* [out] */ LPVOID pBuf);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionStringW )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LONG *plCopied,
            /* [out] */ LPVOID pBuf);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionWindow )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ COMPOSITIONFORM *pCompForm);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWnd,
            /* [out] */ HIMC *phIMC);
        
        HRESULT ( STDMETHODCALLTYPE *GetConversionListA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ CANDIDATELIST *pDst,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetConversionListW )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPWSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ CANDIDATELIST *pDst,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetConversionStatus )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pfdwConversion,
            /* [out] */ DWORD *pfdwSentence);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultIMEWnd )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWnd,
            /* [out] */ HWND *phDefWnd);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPSTR szDescription,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionW )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPWSTR szDescription,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetGuideLineA )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LPSTR pBuf,
            /* [out] */ DWORD *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetGuideLineW )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ LPWSTR pBuf,
            /* [out] */ DWORD *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetIMEFileNameA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPSTR szFileName,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetIMEFileNameW )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ LPWSTR szFileName,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetOpenStatus )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ DWORD fdwIndex,
            /* [out] */ DWORD *pdwProperty);
        
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyleA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFA *pStyleBuf,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyleW )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFW *pStyleBuf,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatusWindowPos )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetVirtualKey )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWnd,
            /* [out] */ UINT *puVirtualKey);
        
        HRESULT ( STDMETHODCALLTYPE *InstallIMEA )( 
            IActiveIMMIME * This,
            /* [in] */ LPSTR szIMEFileName,
            /* [in] */ LPSTR szLayoutText,
            /* [out] */ HKL *phKL);
        
        HRESULT ( STDMETHODCALLTYPE *InstallIMEW )( 
            IActiveIMMIME * This,
            /* [in] */ LPWSTR szIMEFileName,
            /* [in] */ LPWSTR szLayoutText,
            /* [out] */ HKL *phKL);
        
        HRESULT ( STDMETHODCALLTYPE *IsIME )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL);
        
        HRESULT ( STDMETHODCALLTYPE *IsUIMessageA )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *IsUIMessageW )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyIME )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwAction,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwValue);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWordA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szRegister);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWordW )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseContext )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIMC);
        
        HRESULT ( STDMETHODCALLTYPE *SetCandidateWindow )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ CANDIDATEFORM *pCandidate);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionFontA )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ LOGFONTA *plf);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionFontW )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ LOGFONTW *plf);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionStringA )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ LPVOID pRead,
            /* [in] */ DWORD dwReadLen);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionStringW )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ LPVOID pRead,
            /* [in] */ DWORD dwReadLen);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionWindow )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ COMPOSITIONFORM *pCompForm);
        
        HRESULT ( STDMETHODCALLTYPE *SetConversionStatus )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD fdwConversion,
            /* [in] */ DWORD fdwSentence);
        
        HRESULT ( STDMETHODCALLTYPE *SetOpenStatus )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fOpen);
        
        HRESULT ( STDMETHODCALLTYPE *SetStatusWindowPos )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ POINT *pptPos);
        
        HRESULT ( STDMETHODCALLTYPE *SimulateHotKey )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwHotKeyID);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterWordA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPSTR szUnregister);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterWordW )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szUnregister);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateMessage )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC);
        
        HRESULT ( STDMETHODCALLTYPE *LockIMC )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ INPUTCONTEXT **ppIMC);
        
        HRESULT ( STDMETHODCALLTYPE *UnlockIMC )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC);
        
        HRESULT ( STDMETHODCALLTYPE *GetIMCLockCount )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwLockCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIMCC )( 
            IActiveIMMIME * This,
            /* [in] */ DWORD dwSize,
            /* [out] */ HIMCC *phIMCC);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyIMCC )( 
            IActiveIMMIME * This,
            /* [in] */ HIMCC hIMCC);
        
        HRESULT ( STDMETHODCALLTYPE *LockIMCC )( 
            IActiveIMMIME * This,
            /* [in] */ HIMCC hIMCC,
            /* [out] */ void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *UnlockIMCC )( 
            IActiveIMMIME * This,
            /* [in] */ HIMCC hIMCC);
        
        HRESULT ( STDMETHODCALLTYPE *ReSizeIMCC )( 
            IActiveIMMIME * This,
            /* [in] */ HIMCC hIMCC,
            /* [in] */ DWORD dwSize,
            /* [out] */ HIMCC *phIMCC);
        
        HRESULT ( STDMETHODCALLTYPE *GetIMCCSize )( 
            IActiveIMMIME * This,
            /* [in] */ HIMCC hIMCC,
            /* [out] */ DWORD *pdwSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetIMCCLockCount )( 
            IActiveIMMIME * This,
            /* [in] */ HIMCC hIMCC,
            /* [out] */ DWORD *pdwLockCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetHotKey )( 
            IActiveIMMIME * This,
            /* [in] */ DWORD dwHotKeyID,
            /* [out] */ UINT *puModifiers,
            /* [out] */ UINT *puVKey,
            /* [out] */ HKL *phKL);
        
        HRESULT ( STDMETHODCALLTYPE *SetHotKey )( 
            IActiveIMMIME * This,
            /* [in] */ DWORD dwHotKeyID,
            /* [in] */ UINT uModifiers,
            /* [in] */ UINT uVKey,
            /* [in] */ HKL hKL);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSoftKeyboard )( 
            IActiveIMMIME * This,
            /* [in] */ UINT uType,
            /* [in] */ HWND hOwner,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [out] */ HWND *phSoftKbdWnd);
        
        HRESULT ( STDMETHODCALLTYPE *DestroySoftKeyboard )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hSoftKbdWnd);
        
        HRESULT ( STDMETHODCALLTYPE *ShowSoftKeyboard )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hSoftKbdWnd,
            /* [in] */ int nCmdShow);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodePageA )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [out] */ UINT *uCodePage);
        
        HRESULT ( STDMETHODCALLTYPE *GetLangId )( 
            IActiveIMMIME * This,
            /* [in] */ HKL hKL,
            /* [out] */ LANGID *plid);
        
        HRESULT ( STDMETHODCALLTYPE *KeybdEvent )( 
            IActiveIMMIME * This,
            /* [in] */ LANGID lgidIME,
            /* [in] */ BYTE bVk,
            /* [in] */ BYTE bScan,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwExtraInfo);
        
        HRESULT ( STDMETHODCALLTYPE *LockModal )( 
            IActiveIMMIME * This);
        
        HRESULT ( STDMETHODCALLTYPE *UnlockModal )( 
            IActiveIMMIME * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssociateContextEx )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWnd,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *DisableIME )( 
            IActiveIMMIME * This,
            /* [in] */ DWORD idThread);
        
        HRESULT ( STDMETHODCALLTYPE *GetImeMenuItemsA )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ IMEMENUITEMINFOA *pImeParentMenu,
            /* [out] */ IMEMENUITEMINFOA *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetImeMenuItemsW )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ IMEMENUITEMINFOW *pImeParentMenu,
            /* [out] */ IMEMENUITEMINFOW *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInputContext )( 
            IActiveIMMIME * This,
            /* [in] */ DWORD idThread,
            /* [out] */ IEnumInputContext **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *RequestMessageA )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *RequestMessageW )( 
            IActiveIMMIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *SendIMCA )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT uMsg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *SendIMCW )( 
            IActiveIMMIME * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT uMsg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *IsSleeping )( 
            IActiveIMMIME * This);
        
        END_INTERFACE
    } IActiveIMMIMEVtbl;

    interface IActiveIMMIME
    {
        CONST_VTBL struct IActiveIMMIMEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveIMMIME_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActiveIMMIME_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActiveIMMIME_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActiveIMMIME_AssociateContext(This,hWnd,hIME,phPrev)	\
    ( (This)->lpVtbl -> AssociateContext(This,hWnd,hIME,phPrev) ) 

#define IActiveIMMIME_ConfigureIMEA(This,hKL,hWnd,dwMode,pData)	\
    ( (This)->lpVtbl -> ConfigureIMEA(This,hKL,hWnd,dwMode,pData) ) 

#define IActiveIMMIME_ConfigureIMEW(This,hKL,hWnd,dwMode,pData)	\
    ( (This)->lpVtbl -> ConfigureIMEW(This,hKL,hWnd,dwMode,pData) ) 

#define IActiveIMMIME_CreateContext(This,phIMC)	\
    ( (This)->lpVtbl -> CreateContext(This,phIMC) ) 

#define IActiveIMMIME_DestroyContext(This,hIME)	\
    ( (This)->lpVtbl -> DestroyContext(This,hIME) ) 

#define IActiveIMMIME_EnumRegisterWordA(This,hKL,szReading,dwStyle,szRegister,pData,pEnum)	\
    ( (This)->lpVtbl -> EnumRegisterWordA(This,hKL,szReading,dwStyle,szRegister,pData,pEnum) ) 

#define IActiveIMMIME_EnumRegisterWordW(This,hKL,szReading,dwStyle,szRegister,pData,pEnum)	\
    ( (This)->lpVtbl -> EnumRegisterWordW(This,hKL,szReading,dwStyle,szRegister,pData,pEnum) ) 

#define IActiveIMMIME_EscapeA(This,hKL,hIMC,uEscape,pData,plResult)	\
    ( (This)->lpVtbl -> EscapeA(This,hKL,hIMC,uEscape,pData,plResult) ) 

#define IActiveIMMIME_EscapeW(This,hKL,hIMC,uEscape,pData,plResult)	\
    ( (This)->lpVtbl -> EscapeW(This,hKL,hIMC,uEscape,pData,plResult) ) 

#define IActiveIMMIME_GetCandidateListA(This,hIMC,dwIndex,uBufLen,pCandList,puCopied)	\
    ( (This)->lpVtbl -> GetCandidateListA(This,hIMC,dwIndex,uBufLen,pCandList,puCopied) ) 

#define IActiveIMMIME_GetCandidateListW(This,hIMC,dwIndex,uBufLen,pCandList,puCopied)	\
    ( (This)->lpVtbl -> GetCandidateListW(This,hIMC,dwIndex,uBufLen,pCandList,puCopied) ) 

#define IActiveIMMIME_GetCandidateListCountA(This,hIMC,pdwListSize,pdwBufLen)	\
    ( (This)->lpVtbl -> GetCandidateListCountA(This,hIMC,pdwListSize,pdwBufLen) ) 

#define IActiveIMMIME_GetCandidateListCountW(This,hIMC,pdwListSize,pdwBufLen)	\
    ( (This)->lpVtbl -> GetCandidateListCountW(This,hIMC,pdwListSize,pdwBufLen) ) 

#define IActiveIMMIME_GetCandidateWindow(This,hIMC,dwIndex,pCandidate)	\
    ( (This)->lpVtbl -> GetCandidateWindow(This,hIMC,dwIndex,pCandidate) ) 

#define IActiveIMMIME_GetCompositionFontA(This,hIMC,plf)	\
    ( (This)->lpVtbl -> GetCompositionFontA(This,hIMC,plf) ) 

#define IActiveIMMIME_GetCompositionFontW(This,hIMC,plf)	\
    ( (This)->lpVtbl -> GetCompositionFontW(This,hIMC,plf) ) 

#define IActiveIMMIME_GetCompositionStringA(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf)	\
    ( (This)->lpVtbl -> GetCompositionStringA(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf) ) 

#define IActiveIMMIME_GetCompositionStringW(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf)	\
    ( (This)->lpVtbl -> GetCompositionStringW(This,hIMC,dwIndex,dwBufLen,plCopied,pBuf) ) 

#define IActiveIMMIME_GetCompositionWindow(This,hIMC,pCompForm)	\
    ( (This)->lpVtbl -> GetCompositionWindow(This,hIMC,pCompForm) ) 

#define IActiveIMMIME_GetContext(This,hWnd,phIMC)	\
    ( (This)->lpVtbl -> GetContext(This,hWnd,phIMC) ) 

#define IActiveIMMIME_GetConversionListA(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied)	\
    ( (This)->lpVtbl -> GetConversionListA(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied) ) 

#define IActiveIMMIME_GetConversionListW(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied)	\
    ( (This)->lpVtbl -> GetConversionListW(This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied) ) 

#define IActiveIMMIME_GetConversionStatus(This,hIMC,pfdwConversion,pfdwSentence)	\
    ( (This)->lpVtbl -> GetConversionStatus(This,hIMC,pfdwConversion,pfdwSentence) ) 

#define IActiveIMMIME_GetDefaultIMEWnd(This,hWnd,phDefWnd)	\
    ( (This)->lpVtbl -> GetDefaultIMEWnd(This,hWnd,phDefWnd) ) 

#define IActiveIMMIME_GetDescriptionA(This,hKL,uBufLen,szDescription,puCopied)	\
    ( (This)->lpVtbl -> GetDescriptionA(This,hKL,uBufLen,szDescription,puCopied) ) 

#define IActiveIMMIME_GetDescriptionW(This,hKL,uBufLen,szDescription,puCopied)	\
    ( (This)->lpVtbl -> GetDescriptionW(This,hKL,uBufLen,szDescription,puCopied) ) 

#define IActiveIMMIME_GetGuideLineA(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult)	\
    ( (This)->lpVtbl -> GetGuideLineA(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult) ) 

#define IActiveIMMIME_GetGuideLineW(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult)	\
    ( (This)->lpVtbl -> GetGuideLineW(This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult) ) 

#define IActiveIMMIME_GetIMEFileNameA(This,hKL,uBufLen,szFileName,puCopied)	\
    ( (This)->lpVtbl -> GetIMEFileNameA(This,hKL,uBufLen,szFileName,puCopied) ) 

#define IActiveIMMIME_GetIMEFileNameW(This,hKL,uBufLen,szFileName,puCopied)	\
    ( (This)->lpVtbl -> GetIMEFileNameW(This,hKL,uBufLen,szFileName,puCopied) ) 

#define IActiveIMMIME_GetOpenStatus(This,hIMC)	\
    ( (This)->lpVtbl -> GetOpenStatus(This,hIMC) ) 

#define IActiveIMMIME_GetProperty(This,hKL,fdwIndex,pdwProperty)	\
    ( (This)->lpVtbl -> GetProperty(This,hKL,fdwIndex,pdwProperty) ) 

#define IActiveIMMIME_GetRegisterWordStyleA(This,hKL,nItem,pStyleBuf,puCopied)	\
    ( (This)->lpVtbl -> GetRegisterWordStyleA(This,hKL,nItem,pStyleBuf,puCopied) ) 

#define IActiveIMMIME_GetRegisterWordStyleW(This,hKL,nItem,pStyleBuf,puCopied)	\
    ( (This)->lpVtbl -> GetRegisterWordStyleW(This,hKL,nItem,pStyleBuf,puCopied) ) 

#define IActiveIMMIME_GetStatusWindowPos(This,hIMC,pptPos)	\
    ( (This)->lpVtbl -> GetStatusWindowPos(This,hIMC,pptPos) ) 

#define IActiveIMMIME_GetVirtualKey(This,hWnd,puVirtualKey)	\
    ( (This)->lpVtbl -> GetVirtualKey(This,hWnd,puVirtualKey) ) 

#define IActiveIMMIME_InstallIMEA(This,szIMEFileName,szLayoutText,phKL)	\
    ( (This)->lpVtbl -> InstallIMEA(This,szIMEFileName,szLayoutText,phKL) ) 

#define IActiveIMMIME_InstallIMEW(This,szIMEFileName,szLayoutText,phKL)	\
    ( (This)->lpVtbl -> InstallIMEW(This,szIMEFileName,szLayoutText,phKL) ) 

#define IActiveIMMIME_IsIME(This,hKL)	\
    ( (This)->lpVtbl -> IsIME(This,hKL) ) 

#define IActiveIMMIME_IsUIMessageA(This,hWndIME,msg,wParam,lParam)	\
    ( (This)->lpVtbl -> IsUIMessageA(This,hWndIME,msg,wParam,lParam) ) 

#define IActiveIMMIME_IsUIMessageW(This,hWndIME,msg,wParam,lParam)	\
    ( (This)->lpVtbl -> IsUIMessageW(This,hWndIME,msg,wParam,lParam) ) 

#define IActiveIMMIME_NotifyIME(This,hIMC,dwAction,dwIndex,dwValue)	\
    ( (This)->lpVtbl -> NotifyIME(This,hIMC,dwAction,dwIndex,dwValue) ) 

#define IActiveIMMIME_RegisterWordA(This,hKL,szReading,dwStyle,szRegister)	\
    ( (This)->lpVtbl -> RegisterWordA(This,hKL,szReading,dwStyle,szRegister) ) 

#define IActiveIMMIME_RegisterWordW(This,hKL,szReading,dwStyle,szRegister)	\
    ( (This)->lpVtbl -> RegisterWordW(This,hKL,szReading,dwStyle,szRegister) ) 

#define IActiveIMMIME_ReleaseContext(This,hWnd,hIMC)	\
    ( (This)->lpVtbl -> ReleaseContext(This,hWnd,hIMC) ) 

#define IActiveIMMIME_SetCandidateWindow(This,hIMC,pCandidate)	\
    ( (This)->lpVtbl -> SetCandidateWindow(This,hIMC,pCandidate) ) 

#define IActiveIMMIME_SetCompositionFontA(This,hIMC,plf)	\
    ( (This)->lpVtbl -> SetCompositionFontA(This,hIMC,plf) ) 

#define IActiveIMMIME_SetCompositionFontW(This,hIMC,plf)	\
    ( (This)->lpVtbl -> SetCompositionFontW(This,hIMC,plf) ) 

#define IActiveIMMIME_SetCompositionStringA(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen)	\
    ( (This)->lpVtbl -> SetCompositionStringA(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) ) 

#define IActiveIMMIME_SetCompositionStringW(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen)	\
    ( (This)->lpVtbl -> SetCompositionStringW(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) ) 

#define IActiveIMMIME_SetCompositionWindow(This,hIMC,pCompForm)	\
    ( (This)->lpVtbl -> SetCompositionWindow(This,hIMC,pCompForm) ) 

#define IActiveIMMIME_SetConversionStatus(This,hIMC,fdwConversion,fdwSentence)	\
    ( (This)->lpVtbl -> SetConversionStatus(This,hIMC,fdwConversion,fdwSentence) ) 

#define IActiveIMMIME_SetOpenStatus(This,hIMC,fOpen)	\
    ( (This)->lpVtbl -> SetOpenStatus(This,hIMC,fOpen) ) 

#define IActiveIMMIME_SetStatusWindowPos(This,hIMC,pptPos)	\
    ( (This)->lpVtbl -> SetStatusWindowPos(This,hIMC,pptPos) ) 

#define IActiveIMMIME_SimulateHotKey(This,hWnd,dwHotKeyID)	\
    ( (This)->lpVtbl -> SimulateHotKey(This,hWnd,dwHotKeyID) ) 

#define IActiveIMMIME_UnregisterWordA(This,hKL,szReading,dwStyle,szUnregister)	\
    ( (This)->lpVtbl -> UnregisterWordA(This,hKL,szReading,dwStyle,szUnregister) ) 

#define IActiveIMMIME_UnregisterWordW(This,hKL,szReading,dwStyle,szUnregister)	\
    ( (This)->lpVtbl -> UnregisterWordW(This,hKL,szReading,dwStyle,szUnregister) ) 

#define IActiveIMMIME_GenerateMessage(This,hIMC)	\
    ( (This)->lpVtbl -> GenerateMessage(This,hIMC) ) 

#define IActiveIMMIME_LockIMC(This,hIMC,ppIMC)	\
    ( (This)->lpVtbl -> LockIMC(This,hIMC,ppIMC) ) 

#define IActiveIMMIME_UnlockIMC(This,hIMC)	\
    ( (This)->lpVtbl -> UnlockIMC(This,hIMC) ) 

#define IActiveIMMIME_GetIMCLockCount(This,hIMC,pdwLockCount)	\
    ( (This)->lpVtbl -> GetIMCLockCount(This,hIMC,pdwLockCount) ) 

#define IActiveIMMIME_CreateIMCC(This,dwSize,phIMCC)	\
    ( (This)->lpVtbl -> CreateIMCC(This,dwSize,phIMCC) ) 

#define IActiveIMMIME_DestroyIMCC(This,hIMCC)	\
    ( (This)->lpVtbl -> DestroyIMCC(This,hIMCC) ) 

#define IActiveIMMIME_LockIMCC(This,hIMCC,ppv)	\
    ( (This)->lpVtbl -> LockIMCC(This,hIMCC,ppv) ) 

#define IActiveIMMIME_UnlockIMCC(This,hIMCC)	\
    ( (This)->lpVtbl -> UnlockIMCC(This,hIMCC) ) 

#define IActiveIMMIME_ReSizeIMCC(This,hIMCC,dwSize,phIMCC)	\
    ( (This)->lpVtbl -> ReSizeIMCC(This,hIMCC,dwSize,phIMCC) ) 

#define IActiveIMMIME_GetIMCCSize(This,hIMCC,pdwSize)	\
    ( (This)->lpVtbl -> GetIMCCSize(This,hIMCC,pdwSize) ) 

#define IActiveIMMIME_GetIMCCLockCount(This,hIMCC,pdwLockCount)	\
    ( (This)->lpVtbl -> GetIMCCLockCount(This,hIMCC,pdwLockCount) ) 

#define IActiveIMMIME_GetHotKey(This,dwHotKeyID,puModifiers,puVKey,phKL)	\
    ( (This)->lpVtbl -> GetHotKey(This,dwHotKeyID,puModifiers,puVKey,phKL) ) 

#define IActiveIMMIME_SetHotKey(This,dwHotKeyID,uModifiers,uVKey,hKL)	\
    ( (This)->lpVtbl -> SetHotKey(This,dwHotKeyID,uModifiers,uVKey,hKL) ) 

#define IActiveIMMIME_CreateSoftKeyboard(This,uType,hOwner,x,y,phSoftKbdWnd)	\
    ( (This)->lpVtbl -> CreateSoftKeyboard(This,uType,hOwner,x,y,phSoftKbdWnd) ) 

#define IActiveIMMIME_DestroySoftKeyboard(This,hSoftKbdWnd)	\
    ( (This)->lpVtbl -> DestroySoftKeyboard(This,hSoftKbdWnd) ) 

#define IActiveIMMIME_ShowSoftKeyboard(This,hSoftKbdWnd,nCmdShow)	\
    ( (This)->lpVtbl -> ShowSoftKeyboard(This,hSoftKbdWnd,nCmdShow) ) 

#define IActiveIMMIME_GetCodePageA(This,hKL,uCodePage)	\
    ( (This)->lpVtbl -> GetCodePageA(This,hKL,uCodePage) ) 

#define IActiveIMMIME_GetLangId(This,hKL,plid)	\
    ( (This)->lpVtbl -> GetLangId(This,hKL,plid) ) 

#define IActiveIMMIME_KeybdEvent(This,lgidIME,bVk,bScan,dwFlags,dwExtraInfo)	\
    ( (This)->lpVtbl -> KeybdEvent(This,lgidIME,bVk,bScan,dwFlags,dwExtraInfo) ) 

#define IActiveIMMIME_LockModal(This)	\
    ( (This)->lpVtbl -> LockModal(This) ) 

#define IActiveIMMIME_UnlockModal(This)	\
    ( (This)->lpVtbl -> UnlockModal(This) ) 

#define IActiveIMMIME_AssociateContextEx(This,hWnd,hIMC,dwFlags)	\
    ( (This)->lpVtbl -> AssociateContextEx(This,hWnd,hIMC,dwFlags) ) 

#define IActiveIMMIME_DisableIME(This,idThread)	\
    ( (This)->lpVtbl -> DisableIME(This,idThread) ) 

#define IActiveIMMIME_GetImeMenuItemsA(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult)	\
    ( (This)->lpVtbl -> GetImeMenuItemsA(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult) ) 

#define IActiveIMMIME_GetImeMenuItemsW(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult)	\
    ( (This)->lpVtbl -> GetImeMenuItemsW(This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult) ) 

#define IActiveIMMIME_EnumInputContext(This,idThread,ppEnum)	\
    ( (This)->lpVtbl -> EnumInputContext(This,idThread,ppEnum) ) 

#define IActiveIMMIME_RequestMessageA(This,hIMC,wParam,lParam,plResult)	\
    ( (This)->lpVtbl -> RequestMessageA(This,hIMC,wParam,lParam,plResult) ) 

#define IActiveIMMIME_RequestMessageW(This,hIMC,wParam,lParam,plResult)	\
    ( (This)->lpVtbl -> RequestMessageW(This,hIMC,wParam,lParam,plResult) ) 

#define IActiveIMMIME_SendIMCA(This,hWnd,uMsg,wParam,lParam,plResult)	\
    ( (This)->lpVtbl -> SendIMCA(This,hWnd,uMsg,wParam,lParam,plResult) ) 

#define IActiveIMMIME_SendIMCW(This,hWnd,uMsg,wParam,lParam,plResult)	\
    ( (This)->lpVtbl -> SendIMCW(This,hWnd,uMsg,wParam,lParam,plResult) ) 

#define IActiveIMMIME_IsSleeping(This)	\
    ( (This)->lpVtbl -> IsSleeping(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActiveIMMIME_INTERFACE_DEFINED__ */


#ifndef __IActiveIME_INTERFACE_DEFINED__
#define __IActiveIME_INTERFACE_DEFINED__

/* interface IActiveIME */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IActiveIME;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6FE20962-D077-11d0-8FE7-00AA006BCC59")
    IActiveIME : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Inquire( 
            /* [in] */ DWORD dwSystemInfoFlags,
            /* [out] */ IMEINFO *pIMEInfo,
            /* [out] */ LPWSTR szWndClass,
            /* [out] */ DWORD *pdwPrivate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConversionList( 
            /* [in] */ HIMC hIMC,
            /* [in] */ LPWSTR szSource,
            /* [in] */ UINT uFlag,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pDest,
            /* [out] */ UINT *puCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDW *pRegisterWord) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Destroy( 
            /* [in] */ UINT uReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Escape( 
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ void *pData,
            /* [out] */ LRESULT *plResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetActiveContext( 
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fFlag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessKey( 
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uVirKey,
            /* [in] */ DWORD lParam,
            /* [in] */ BYTE *pbKeyState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwAction,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Select( 
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fSelect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionString( 
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ void *pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ void *pRead,
            /* [in] */ DWORD dwReadLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ToAsciiEx( 
            /* [in] */ UINT uVirKey,
            /* [in] */ UINT uScanCode,
            /* [in] */ BYTE *pbKeyState,
            /* [in] */ UINT fuState,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwTransBuf,
            /* [out] */ UINT *puSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterWord( 
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterWord( 
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegisterWordStyle( 
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFW *pStyleBuf,
            /* [out] */ UINT *puBufSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumRegisterWord( 
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordW **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodePageA( 
            /* [out] */ UINT *uCodePage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLangId( 
            /* [out] */ LANGID *plid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActiveIMEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActiveIME * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActiveIME * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActiveIME * This);
        
        HRESULT ( STDMETHODCALLTYPE *Inquire )( 
            IActiveIME * This,
            /* [in] */ DWORD dwSystemInfoFlags,
            /* [out] */ IMEINFO *pIMEInfo,
            /* [out] */ LPWSTR szWndClass,
            /* [out] */ DWORD *pdwPrivate);
        
        HRESULT ( STDMETHODCALLTYPE *ConversionList )( 
            IActiveIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPWSTR szSource,
            /* [in] */ UINT uFlag,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pDest,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IActiveIME * This,
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDW *pRegisterWord);
        
        HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IActiveIME * This,
            /* [in] */ UINT uReserved);
        
        HRESULT ( STDMETHODCALLTYPE *Escape )( 
            IActiveIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ void *pData,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *SetActiveContext )( 
            IActiveIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fFlag);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessKey )( 
            IActiveIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uVirKey,
            /* [in] */ DWORD lParam,
            /* [in] */ BYTE *pbKeyState);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IActiveIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwAction,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwValue);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            IActiveIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fSelect);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionString )( 
            IActiveIME * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ void *pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ void *pRead,
            /* [in] */ DWORD dwReadLen);
        
        HRESULT ( STDMETHODCALLTYPE *ToAsciiEx )( 
            IActiveIME * This,
            /* [in] */ UINT uVirKey,
            /* [in] */ UINT uScanCode,
            /* [in] */ BYTE *pbKeyState,
            /* [in] */ UINT fuState,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwTransBuf,
            /* [out] */ UINT *puSize);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWord )( 
            IActiveIME * This,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szString);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterWord )( 
            IActiveIME * This,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szString);
        
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyle )( 
            IActiveIME * This,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFW *pStyleBuf,
            /* [out] */ UINT *puBufSize);
        
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWord )( 
            IActiveIME * This,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordW **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodePageA )( 
            IActiveIME * This,
            /* [out] */ UINT *uCodePage);
        
        HRESULT ( STDMETHODCALLTYPE *GetLangId )( 
            IActiveIME * This,
            /* [out] */ LANGID *plid);
        
        END_INTERFACE
    } IActiveIMEVtbl;

    interface IActiveIME
    {
        CONST_VTBL struct IActiveIMEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveIME_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActiveIME_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActiveIME_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActiveIME_Inquire(This,dwSystemInfoFlags,pIMEInfo,szWndClass,pdwPrivate)	\
    ( (This)->lpVtbl -> Inquire(This,dwSystemInfoFlags,pIMEInfo,szWndClass,pdwPrivate) ) 

#define IActiveIME_ConversionList(This,hIMC,szSource,uFlag,uBufLen,pDest,puCopied)	\
    ( (This)->lpVtbl -> ConversionList(This,hIMC,szSource,uFlag,uBufLen,pDest,puCopied) ) 

#define IActiveIME_Configure(This,hKL,hWnd,dwMode,pRegisterWord)	\
    ( (This)->lpVtbl -> Configure(This,hKL,hWnd,dwMode,pRegisterWord) ) 

#define IActiveIME_Destroy(This,uReserved)	\
    ( (This)->lpVtbl -> Destroy(This,uReserved) ) 

#define IActiveIME_Escape(This,hIMC,uEscape,pData,plResult)	\
    ( (This)->lpVtbl -> Escape(This,hIMC,uEscape,pData,plResult) ) 

#define IActiveIME_SetActiveContext(This,hIMC,fFlag)	\
    ( (This)->lpVtbl -> SetActiveContext(This,hIMC,fFlag) ) 

#define IActiveIME_ProcessKey(This,hIMC,uVirKey,lParam,pbKeyState)	\
    ( (This)->lpVtbl -> ProcessKey(This,hIMC,uVirKey,lParam,pbKeyState) ) 

#define IActiveIME_Notify(This,hIMC,dwAction,dwIndex,dwValue)	\
    ( (This)->lpVtbl -> Notify(This,hIMC,dwAction,dwIndex,dwValue) ) 

#define IActiveIME_Select(This,hIMC,fSelect)	\
    ( (This)->lpVtbl -> Select(This,hIMC,fSelect) ) 

#define IActiveIME_SetCompositionString(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen)	\
    ( (This)->lpVtbl -> SetCompositionString(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) ) 

#define IActiveIME_ToAsciiEx(This,uVirKey,uScanCode,pbKeyState,fuState,hIMC,pdwTransBuf,puSize)	\
    ( (This)->lpVtbl -> ToAsciiEx(This,uVirKey,uScanCode,pbKeyState,fuState,hIMC,pdwTransBuf,puSize) ) 

#define IActiveIME_RegisterWord(This,szReading,dwStyle,szString)	\
    ( (This)->lpVtbl -> RegisterWord(This,szReading,dwStyle,szString) ) 

#define IActiveIME_UnregisterWord(This,szReading,dwStyle,szString)	\
    ( (This)->lpVtbl -> UnregisterWord(This,szReading,dwStyle,szString) ) 

#define IActiveIME_GetRegisterWordStyle(This,nItem,pStyleBuf,puBufSize)	\
    ( (This)->lpVtbl -> GetRegisterWordStyle(This,nItem,pStyleBuf,puBufSize) ) 

#define IActiveIME_EnumRegisterWord(This,szReading,dwStyle,szRegister,pData,ppEnum)	\
    ( (This)->lpVtbl -> EnumRegisterWord(This,szReading,dwStyle,szRegister,pData,ppEnum) ) 

#define IActiveIME_GetCodePageA(This,uCodePage)	\
    ( (This)->lpVtbl -> GetCodePageA(This,uCodePage) ) 

#define IActiveIME_GetLangId(This,plid)	\
    ( (This)->lpVtbl -> GetLangId(This,plid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActiveIME_INTERFACE_DEFINED__ */


#ifndef __IActiveIME2_INTERFACE_DEFINED__
#define __IActiveIME2_INTERFACE_DEFINED__

/* interface IActiveIME2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IActiveIME2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e1c4bf0e-2d53-11d2-93e1-0060b067b86e")
    IActiveIME2 : public IActiveIME
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Sleep( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unsleep( 
            /* [in] */ BOOL fDead) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActiveIME2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActiveIME2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActiveIME2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActiveIME2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Inquire )( 
            IActiveIME2 * This,
            /* [in] */ DWORD dwSystemInfoFlags,
            /* [out] */ IMEINFO *pIMEInfo,
            /* [out] */ LPWSTR szWndClass,
            /* [out] */ DWORD *pdwPrivate);
        
        HRESULT ( STDMETHODCALLTYPE *ConversionList )( 
            IActiveIME2 * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ LPWSTR szSource,
            /* [in] */ UINT uFlag,
            /* [in] */ UINT uBufLen,
            /* [out] */ CANDIDATELIST *pDest,
            /* [out] */ UINT *puCopied);
        
        HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IActiveIME2 * This,
            /* [in] */ HKL hKL,
            /* [in] */ HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ REGISTERWORDW *pRegisterWord);
        
        HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IActiveIME2 * This,
            /* [in] */ UINT uReserved);
        
        HRESULT ( STDMETHODCALLTYPE *Escape )( 
            IActiveIME2 * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ void *pData,
            /* [out] */ LRESULT *plResult);
        
        HRESULT ( STDMETHODCALLTYPE *SetActiveContext )( 
            IActiveIME2 * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fFlag);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessKey )( 
            IActiveIME2 * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uVirKey,
            /* [in] */ DWORD lParam,
            /* [in] */ BYTE *pbKeyState);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IActiveIME2 * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwAction,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwValue);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            IActiveIME2 * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fSelect);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionString )( 
            IActiveIME2 * This,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ void *pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ void *pRead,
            /* [in] */ DWORD dwReadLen);
        
        HRESULT ( STDMETHODCALLTYPE *ToAsciiEx )( 
            IActiveIME2 * This,
            /* [in] */ UINT uVirKey,
            /* [in] */ UINT uScanCode,
            /* [in] */ BYTE *pbKeyState,
            /* [in] */ UINT fuState,
            /* [in] */ HIMC hIMC,
            /* [out] */ DWORD *pdwTransBuf,
            /* [out] */ UINT *puSize);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWord )( 
            IActiveIME2 * This,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szString);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterWord )( 
            IActiveIME2 * This,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szString);
        
        HRESULT ( STDMETHODCALLTYPE *GetRegisterWordStyle )( 
            IActiveIME2 * This,
            /* [in] */ UINT nItem,
            /* [out] */ STYLEBUFW *pStyleBuf,
            /* [out] */ UINT *puBufSize);
        
        HRESULT ( STDMETHODCALLTYPE *EnumRegisterWord )( 
            IActiveIME2 * This,
            /* [in] */ LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ LPWSTR szRegister,
            /* [in] */ LPVOID pData,
            /* [out] */ IEnumRegisterWordW **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodePageA )( 
            IActiveIME2 * This,
            /* [out] */ UINT *uCodePage);
        
        HRESULT ( STDMETHODCALLTYPE *GetLangId )( 
            IActiveIME2 * This,
            /* [out] */ LANGID *plid);
        
        HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            IActiveIME2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Unsleep )( 
            IActiveIME2 * This,
            /* [in] */ BOOL fDead);
        
        END_INTERFACE
    } IActiveIME2Vtbl;

    interface IActiveIME2
    {
        CONST_VTBL struct IActiveIME2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveIME2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActiveIME2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActiveIME2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActiveIME2_Inquire(This,dwSystemInfoFlags,pIMEInfo,szWndClass,pdwPrivate)	\
    ( (This)->lpVtbl -> Inquire(This,dwSystemInfoFlags,pIMEInfo,szWndClass,pdwPrivate) ) 

#define IActiveIME2_ConversionList(This,hIMC,szSource,uFlag,uBufLen,pDest,puCopied)	\
    ( (This)->lpVtbl -> ConversionList(This,hIMC,szSource,uFlag,uBufLen,pDest,puCopied) ) 

#define IActiveIME2_Configure(This,hKL,hWnd,dwMode,pRegisterWord)	\
    ( (This)->lpVtbl -> Configure(This,hKL,hWnd,dwMode,pRegisterWord) ) 

#define IActiveIME2_Destroy(This,uReserved)	\
    ( (This)->lpVtbl -> Destroy(This,uReserved) ) 

#define IActiveIME2_Escape(This,hIMC,uEscape,pData,plResult)	\
    ( (This)->lpVtbl -> Escape(This,hIMC,uEscape,pData,plResult) ) 

#define IActiveIME2_SetActiveContext(This,hIMC,fFlag)	\
    ( (This)->lpVtbl -> SetActiveContext(This,hIMC,fFlag) ) 

#define IActiveIME2_ProcessKey(This,hIMC,uVirKey,lParam,pbKeyState)	\
    ( (This)->lpVtbl -> ProcessKey(This,hIMC,uVirKey,lParam,pbKeyState) ) 

#define IActiveIME2_Notify(This,hIMC,dwAction,dwIndex,dwValue)	\
    ( (This)->lpVtbl -> Notify(This,hIMC,dwAction,dwIndex,dwValue) ) 

#define IActiveIME2_Select(This,hIMC,fSelect)	\
    ( (This)->lpVtbl -> Select(This,hIMC,fSelect) ) 

#define IActiveIME2_SetCompositionString(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen)	\
    ( (This)->lpVtbl -> SetCompositionString(This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen) ) 

#define IActiveIME2_ToAsciiEx(This,uVirKey,uScanCode,pbKeyState,fuState,hIMC,pdwTransBuf,puSize)	\
    ( (This)->lpVtbl -> ToAsciiEx(This,uVirKey,uScanCode,pbKeyState,fuState,hIMC,pdwTransBuf,puSize) ) 

#define IActiveIME2_RegisterWord(This,szReading,dwStyle,szString)	\
    ( (This)->lpVtbl -> RegisterWord(This,szReading,dwStyle,szString) ) 

#define IActiveIME2_UnregisterWord(This,szReading,dwStyle,szString)	\
    ( (This)->lpVtbl -> UnregisterWord(This,szReading,dwStyle,szString) ) 

#define IActiveIME2_GetRegisterWordStyle(This,nItem,pStyleBuf,puBufSize)	\
    ( (This)->lpVtbl -> GetRegisterWordStyle(This,nItem,pStyleBuf,puBufSize) ) 

#define IActiveIME2_EnumRegisterWord(This,szReading,dwStyle,szRegister,pData,ppEnum)	\
    ( (This)->lpVtbl -> EnumRegisterWord(This,szReading,dwStyle,szRegister,pData,ppEnum) ) 

#define IActiveIME2_GetCodePageA(This,uCodePage)	\
    ( (This)->lpVtbl -> GetCodePageA(This,uCodePage) ) 

#define IActiveIME2_GetLangId(This,plid)	\
    ( (This)->lpVtbl -> GetLangId(This,plid) ) 


#define IActiveIME2_Sleep(This)	\
    ( (This)->lpVtbl -> Sleep(This) ) 

#define IActiveIME2_Unsleep(This,fDead)	\
    ( (This)->lpVtbl -> Unsleep(This,fDead) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActiveIME2_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CActiveIMM;

#ifdef __cplusplus

class DECLSPEC_UUID("4955DD33-B159-11d0-8FCF-00AA006BCC59")
CActiveIMM;
#endif
#endif /* __ActiveIMM_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


