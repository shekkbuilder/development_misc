/*** Autogenerated by WIDL 0.9.2 from mshtmhst.idl - Do not edit ***/
#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_MSHTMHST_H
#define __WIDL_MSHTMHST_H
#ifdef __cplusplus
extern "C" {
#endif
#include <ocidl.h>
#include <objidl.h>
#include <oleidl.h>
#include <oaidl.h>
#include <docobj.h>
#define CONTEXT_MENU_DEFAULT     0
#define CONTEXT_MENU_IMAGE       1
#define CONTEXT_MENU_CONTROL     2
#define CONTEXT_MENU_TABLE       3
#define CONTEXT_MENU_TEXTSELECT  4
#define CONTEXT_MENU_ANCHOR      5
#define CONTEXT_MENU_UNKNOWN     6
#define CONTEXT_MENU_IMGDYNSRC   7
#define CONTEXT_MENU_IMGART      8
#define CONTEXT_MENU_DEBUG       9
#define CONTEXT_MENU_VSCROLL    10
#define CONTEXT_MENU_HSCROLL    11
#define MENUEXT_SHOWDIALOG 1
#define DOCHOSTUIFLAG_BROWSER (DOCHOSTUIFLAG_DISABLE_HELP_MENU|DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE)
#define HTMLDLG_NOUI            0x0010
#define HTMLDLG_MODAL           0x0020
#define HTMLDLG_MODELESS        0x0040
#define HTMLDLG_PRINT_TEMPLATE  0x0080
#define HTMLDLG_VERIFY          0x0100
#define PRINT_DONTBOTHERUSER     0x0001
#define PRINT_WAITFORCOMPLETION  0x0002
#ifndef __IHTMLWindow2_FWD_DEFINED__
#define __IHTMLWindow2_FWD_DEFINED__
typedef interface IHTMLWindow2 IHTMLWindow2;
#endif
#ifndef __IHostDialogHelper_FWD_DEFINED__
#define __IHostDialogHelper_FWD_DEFINED__
typedef struct IHostDialogHelper IHostDialogHelper;
#endif

/*****************************************************************************
 * IHostDialogHelper interface
 */
#ifndef __IHostDialogHelper_INTERFACE_DEFINED__
#define __IHostDialogHelper_INTERFACE_DEFINED__

DEFINE_GUID(IID_IHostDialogHelper, 0x53dec138, 0xa51e, 0x11d2, 0x86,0x1e, 0x00,0xc0,0x4f,0xa3,0x5c,0x89);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IHostDialogHelper : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ShowHTMLDialog(
        HWND hwndParent,
        IMoniker* pMk,
        VARIANT* pvarArgIn,
        WCHAR* pchOptions,
        VARIANT* pvarArgOut,
        IUnknown* punkHost) = 0;

};
#else
typedef struct IHostDialogHelperVtbl IHostDialogHelperVtbl;
struct IHostDialogHelper {
    const IHostDialogHelperVtbl* lpVtbl;
};
struct IHostDialogHelperVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHostDialogHelper* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHostDialogHelper* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHostDialogHelper* This);

    /*** IHostDialogHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowHTMLDialog)(
        IHostDialogHelper* This,
        HWND hwndParent,
        IMoniker* pMk,
        VARIANT* pvarArgIn,
        WCHAR* pchOptions,
        VARIANT* pvarArgOut,
        IUnknown* punkHost);

    END_INTERFACE
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHostDialogHelper_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IHostDialogHelper_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IHostDialogHelper_Release(p) (p)->lpVtbl->Release(p)
/*** IHostDialogHelper methods ***/
#define IHostDialogHelper_ShowHTMLDialog(p,a,b,c,d,e,f) (p)->lpVtbl->ShowHTMLDialog(p,a,b,c,d,e,f)
#endif

#endif

HRESULT CALLBACK IHostDialogHelper_ShowHTMLDialog_Proxy(
    IHostDialogHelper* This,
    HWND hwndParent,
    IMoniker* pMk,
    VARIANT* pvarArgIn,
    WCHAR* pchOptions,
    VARIANT* pvarArgOut,
    IUnknown* punkHost);
void __RPC_STUB IHostDialogHelper_ShowHTMLDialog_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IHostDialogHelper_INTERFACE_DEFINED__ */

/*****************************************************************************
 * HostDialogHelper coclass
 */

DEFINE_GUID(CLSID_HostDialogHelper, 0x429af92c, 0xa51f, 0x11d2, 0x86,0x1e, 0x00,0xc0,0x4f,0xa3,0x5c,0x89);

typedef enum tagDOCHOSTUIDBLCLK {
    DOCHOSTUIDBLCLK_DEFAULT = 0,
    DOCHOSTUIDBLCLK_SHOWPROPERTIES = 1,
    DOCHOSTUIDBLCLK_SHOWCODE = 2
} DOCHOSTUIDBLCLK;
typedef enum tagDOCHOSTUIFLAG {
    DOCHOSTUIFLAG_DIALOG = 0x1,
    DOCHOSTUIFLAG_DISABLE_HELP_MENU = 0x2,
    DOCHOSTUIFLAG_NO3DBORDER = 0x4,
    DOCHOSTUIFLAG_SCROLL_NO = 0x8,
    DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE = 0x10,
    DOCHOSTUIFLAG_OPENNEWWIN = 0x20,
    DOCHOSTUIFLAG_DISABLE_OFFSCREEN = 0x40,
    DOCHOSTUIFLAG_FLAT_SCROLLBAR = 0x80,
    DOCHOSTUIFLAG_DIV_BLOCKDEFAULT = 0x100,
    DOCHOSTUIFLAG_ACTIVATE_CLIENTHIT_ONLY = 0x200,
    DOCHOSTUIFLAG_OVERRIDEBEHAVIORFACTORY = 0x400,
    DOCHOSTUIFLAG_CODEPAGELINKEDFONTS = 0x800,
    DOCHOSTUIFLAG_URL_ENCODING_DISABLE_UTF8 = 0x1000,
    DOCHOSTUIFLAG_URL_ENCODING_ENABLE_UTF8 = 0x2000,
    DOCHOSTUIFLAG_ENABLE_FORMS_AUTOCOMPLETE = 0x4000,
    DOCHOSTUIFLAG_ENABLE_INPLACE_NAVIGATION = 0x10000,
    DOCHOSTUIFLAG_IME_ENABLE_RECONVERSION = 0x20000,
    DOCHOSTUIFLAG_THEME = 0x40000,
    DOCHOSTUIFLAG_NOTHEME = 0x80000,
    DOCHOSTUIFLAG_NOPICS = 0x100000,
    DOCHOSTUIFLAG_NO3DOUTERBORDER = 0x200000,
    DOCHOSTUIFLAG_DISABLE_EDIT_NS_FIXUP = 0x400000,
    DOCHOSTUIFLAG_LOCAL_MACHINE_ACCESS_CHECK = 0x800000,
    DOCHOSTUIFLAG_DISABLE_UNTRUSTEDPROTOCOL = 0x1000000
} DOCHOSTUIFLAG;
#ifndef __IDocHostUIHandler_FWD_DEFINED__
#define __IDocHostUIHandler_FWD_DEFINED__
typedef struct IDocHostUIHandler IDocHostUIHandler;
#endif

typedef struct _DOCHOSTUIINFO {
    ULONG cbSize;
    DWORD dwFlags;
    DWORD dwDoubleClick;
    OLECHAR *pchHostCss;
    OLECHAR *pchHostNS;
} DOCHOSTUIINFO;
/*****************************************************************************
 * IDocHostUIHandler interface
 */
#ifndef __IDocHostUIHandler_INTERFACE_DEFINED__
#define __IDocHostUIHandler_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDocHostUIHandler, 0xbd3f23c0, 0xd43e, 0x11cf, 0x89,0x3b, 0x00,0xaa,0x00,0xbd,0xce,0x1a);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IDocHostUIHandler : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ShowContextMenu(
        DWORD dwID,
        POINT* ppt,
        IUnknown* pcmdtReserved,
        IDispatch* pdispReserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetHostInfo(
        DOCHOSTUIINFO* pInfo) = 0;

    virtual HRESULT STDMETHODCALLTYPE ShowUI(
        DWORD dwID,
        IOleInPlaceActiveObject* pActiveObject,
        IOleCommandTarget* pCommandTarget,
        IOleInPlaceFrame* pFrame,
        IOleInPlaceUIWindow* pDoc) = 0;

    virtual HRESULT STDMETHODCALLTYPE HideUI(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE UpdateUI(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnableModeless(
        BOOL fEnable) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnDocWindowActivate(
        BOOL fActivate) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnFrameWindowActivate(
        BOOL fActivate) = 0;

    virtual HRESULT STDMETHODCALLTYPE ResizeBorder(
        LPCRECT prcBorder,
        IOleInPlaceUIWindow* pUIWindow,
        BOOL fRameWindow) = 0;

    virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator(
        LPMSG lpMsg,
        const GUID* pguidCmdGroup,
        DWORD nCmdID) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOptionKeyPath(
        LPOLESTR* pchKey,
        DWORD dw) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDropTarget(
        IDropTarget* pDropTarget,
        IDropTarget** ppDropTarget) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetExternal(
        IDispatch** ppDispatch) = 0;

    virtual HRESULT STDMETHODCALLTYPE TranslateUrl(
        DWORD dwTranslate,
        OLECHAR* pchURLIn,
        OLECHAR** ppchURLOut) = 0;

    virtual HRESULT STDMETHODCALLTYPE FilterDataObject(
        IDataObject* pDO,
        IDataObject** ppDORet) = 0;

};
#else
typedef struct IDocHostUIHandlerVtbl IDocHostUIHandlerVtbl;
struct IDocHostUIHandler {
    const IDocHostUIHandlerVtbl* lpVtbl;
};
struct IDocHostUIHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDocHostUIHandler* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDocHostUIHandler* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDocHostUIHandler* This);

    /*** IDocHostUIHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowContextMenu)(
        IDocHostUIHandler* This,
        DWORD dwID,
        POINT* ppt,
        IUnknown* pcmdtReserved,
        IDispatch* pdispReserved);

    HRESULT (STDMETHODCALLTYPE *GetHostInfo)(
        IDocHostUIHandler* This,
        DOCHOSTUIINFO* pInfo);

    HRESULT (STDMETHODCALLTYPE *ShowUI)(
        IDocHostUIHandler* This,
        DWORD dwID,
        IOleInPlaceActiveObject* pActiveObject,
        IOleCommandTarget* pCommandTarget,
        IOleInPlaceFrame* pFrame,
        IOleInPlaceUIWindow* pDoc);

    HRESULT (STDMETHODCALLTYPE *HideUI)(
        IDocHostUIHandler* This);

    HRESULT (STDMETHODCALLTYPE *UpdateUI)(
        IDocHostUIHandler* This);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IDocHostUIHandler* This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *OnDocWindowActivate)(
        IDocHostUIHandler* This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *OnFrameWindowActivate)(
        IDocHostUIHandler* This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *ResizeBorder)(
        IDocHostUIHandler* This,
        LPCRECT prcBorder,
        IOleInPlaceUIWindow* pUIWindow,
        BOOL fRameWindow);

    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IDocHostUIHandler* This,
        LPMSG lpMsg,
        const GUID* pguidCmdGroup,
        DWORD nCmdID);

    HRESULT (STDMETHODCALLTYPE *GetOptionKeyPath)(
        IDocHostUIHandler* This,
        LPOLESTR* pchKey,
        DWORD dw);

    HRESULT (STDMETHODCALLTYPE *GetDropTarget)(
        IDocHostUIHandler* This,
        IDropTarget* pDropTarget,
        IDropTarget** ppDropTarget);

    HRESULT (STDMETHODCALLTYPE *GetExternal)(
        IDocHostUIHandler* This,
        IDispatch** ppDispatch);

    HRESULT (STDMETHODCALLTYPE *TranslateUrl)(
        IDocHostUIHandler* This,
        DWORD dwTranslate,
        OLECHAR* pchURLIn,
        OLECHAR** ppchURLOut);

    HRESULT (STDMETHODCALLTYPE *FilterDataObject)(
        IDocHostUIHandler* This,
        IDataObject* pDO,
        IDataObject** ppDORet);

    END_INTERFACE
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDocHostUIHandler_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDocHostUIHandler_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDocHostUIHandler_Release(p) (p)->lpVtbl->Release(p)
/*** IDocHostUIHandler methods ***/
#define IDocHostUIHandler_ShowContextMenu(p,a,b,c,d) (p)->lpVtbl->ShowContextMenu(p,a,b,c,d)
#define IDocHostUIHandler_GetHostInfo(p,a) (p)->lpVtbl->GetHostInfo(p,a)
#define IDocHostUIHandler_ShowUI(p,a,b,c,d,e) (p)->lpVtbl->ShowUI(p,a,b,c,d,e)
#define IDocHostUIHandler_HideUI(p) (p)->lpVtbl->HideUI(p)
#define IDocHostUIHandler_UpdateUI(p) (p)->lpVtbl->UpdateUI(p)
#define IDocHostUIHandler_EnableModeless(p,a) (p)->lpVtbl->EnableModeless(p,a)
#define IDocHostUIHandler_OnDocWindowActivate(p,a) (p)->lpVtbl->OnDocWindowActivate(p,a)
#define IDocHostUIHandler_OnFrameWindowActivate(p,a) (p)->lpVtbl->OnFrameWindowActivate(p,a)
#define IDocHostUIHandler_ResizeBorder(p,a,b,c) (p)->lpVtbl->ResizeBorder(p,a,b,c)
#define IDocHostUIHandler_TranslateAccelerator(p,a,b,c) (p)->lpVtbl->TranslateAccelerator(p,a,b,c)
#define IDocHostUIHandler_GetOptionKeyPath(p,a,b) (p)->lpVtbl->GetOptionKeyPath(p,a,b)
#define IDocHostUIHandler_GetDropTarget(p,a,b) (p)->lpVtbl->GetDropTarget(p,a,b)
#define IDocHostUIHandler_GetExternal(p,a) (p)->lpVtbl->GetExternal(p,a)
#define IDocHostUIHandler_TranslateUrl(p,a,b,c) (p)->lpVtbl->TranslateUrl(p,a,b,c)
#define IDocHostUIHandler_FilterDataObject(p,a,b) (p)->lpVtbl->FilterDataObject(p,a,b)
#endif

#endif

HRESULT CALLBACK IDocHostUIHandler_ShowContextMenu_Proxy(
    IDocHostUIHandler* This,
    DWORD dwID,
    POINT* ppt,
    IUnknown* pcmdtReserved,
    IDispatch* pdispReserved);
void __RPC_STUB IDocHostUIHandler_ShowContextMenu_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_GetHostInfo_Proxy(
    IDocHostUIHandler* This,
    DOCHOSTUIINFO* pInfo);
void __RPC_STUB IDocHostUIHandler_GetHostInfo_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_ShowUI_Proxy(
    IDocHostUIHandler* This,
    DWORD dwID,
    IOleInPlaceActiveObject* pActiveObject,
    IOleCommandTarget* pCommandTarget,
    IOleInPlaceFrame* pFrame,
    IOleInPlaceUIWindow* pDoc);
void __RPC_STUB IDocHostUIHandler_ShowUI_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_HideUI_Proxy(
    IDocHostUIHandler* This);
void __RPC_STUB IDocHostUIHandler_HideUI_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_UpdateUI_Proxy(
    IDocHostUIHandler* This);
void __RPC_STUB IDocHostUIHandler_UpdateUI_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_EnableModeless_Proxy(
    IDocHostUIHandler* This,
    BOOL fEnable);
void __RPC_STUB IDocHostUIHandler_EnableModeless_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_OnDocWindowActivate_Proxy(
    IDocHostUIHandler* This,
    BOOL fActivate);
void __RPC_STUB IDocHostUIHandler_OnDocWindowActivate_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_OnFrameWindowActivate_Proxy(
    IDocHostUIHandler* This,
    BOOL fActivate);
void __RPC_STUB IDocHostUIHandler_OnFrameWindowActivate_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_ResizeBorder_Proxy(
    IDocHostUIHandler* This,
    LPCRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fRameWindow);
void __RPC_STUB IDocHostUIHandler_ResizeBorder_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_TranslateAccelerator_Proxy(
    IDocHostUIHandler* This,
    LPMSG lpMsg,
    const GUID* pguidCmdGroup,
    DWORD nCmdID);
void __RPC_STUB IDocHostUIHandler_TranslateAccelerator_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_GetOptionKeyPath_Proxy(
    IDocHostUIHandler* This,
    LPOLESTR* pchKey,
    DWORD dw);
void __RPC_STUB IDocHostUIHandler_GetOptionKeyPath_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_GetDropTarget_Proxy(
    IDocHostUIHandler* This,
    IDropTarget* pDropTarget,
    IDropTarget** ppDropTarget);
void __RPC_STUB IDocHostUIHandler_GetDropTarget_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_GetExternal_Proxy(
    IDocHostUIHandler* This,
    IDispatch** ppDispatch);
void __RPC_STUB IDocHostUIHandler_GetExternal_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_TranslateUrl_Proxy(
    IDocHostUIHandler* This,
    DWORD dwTranslate,
    OLECHAR* pchURLIn,
    OLECHAR** ppchURLOut);
void __RPC_STUB IDocHostUIHandler_TranslateUrl_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostUIHandler_FilterDataObject_Proxy(
    IDocHostUIHandler* This,
    IDataObject* pDO,
    IDataObject** ppDORet);
void __RPC_STUB IDocHostUIHandler_FilterDataObject_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDocHostUIHandler_INTERFACE_DEFINED__ */

#ifndef __IDocHostUIHandler2_FWD_DEFINED__
#define __IDocHostUIHandler2_FWD_DEFINED__
typedef struct IDocHostUIHandler2 IDocHostUIHandler2;
#endif

/*****************************************************************************
 * IDocHostUIHandler2 interface
 */
#ifndef __IDocHostUIHandler2_INTERFACE_DEFINED__
#define __IDocHostUIHandler2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDocHostUIHandler2, 0x3050f6d0, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IDocHostUIHandler2 : public IDocHostUIHandler
{
    virtual HRESULT STDMETHODCALLTYPE GetOverrideKeyPath(
        LPOLESTR* pchKey,
        DWORD dw) = 0;

};
#else
typedef struct IDocHostUIHandler2Vtbl IDocHostUIHandler2Vtbl;
struct IDocHostUIHandler2 {
    const IDocHostUIHandler2Vtbl* lpVtbl;
};
struct IDocHostUIHandler2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDocHostUIHandler2* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDocHostUIHandler2* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDocHostUIHandler2* This);

    /*** IDocHostUIHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowContextMenu)(
        IDocHostUIHandler2* This,
        DWORD dwID,
        POINT* ppt,
        IUnknown* pcmdtReserved,
        IDispatch* pdispReserved);

    HRESULT (STDMETHODCALLTYPE *GetHostInfo)(
        IDocHostUIHandler2* This,
        DOCHOSTUIINFO* pInfo);

    HRESULT (STDMETHODCALLTYPE *ShowUI)(
        IDocHostUIHandler2* This,
        DWORD dwID,
        IOleInPlaceActiveObject* pActiveObject,
        IOleCommandTarget* pCommandTarget,
        IOleInPlaceFrame* pFrame,
        IOleInPlaceUIWindow* pDoc);

    HRESULT (STDMETHODCALLTYPE *HideUI)(
        IDocHostUIHandler2* This);

    HRESULT (STDMETHODCALLTYPE *UpdateUI)(
        IDocHostUIHandler2* This);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IDocHostUIHandler2* This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *OnDocWindowActivate)(
        IDocHostUIHandler2* This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *OnFrameWindowActivate)(
        IDocHostUIHandler2* This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *ResizeBorder)(
        IDocHostUIHandler2* This,
        LPCRECT prcBorder,
        IOleInPlaceUIWindow* pUIWindow,
        BOOL fRameWindow);

    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IDocHostUIHandler2* This,
        LPMSG lpMsg,
        const GUID* pguidCmdGroup,
        DWORD nCmdID);

    HRESULT (STDMETHODCALLTYPE *GetOptionKeyPath)(
        IDocHostUIHandler2* This,
        LPOLESTR* pchKey,
        DWORD dw);

    HRESULT (STDMETHODCALLTYPE *GetDropTarget)(
        IDocHostUIHandler2* This,
        IDropTarget* pDropTarget,
        IDropTarget** ppDropTarget);

    HRESULT (STDMETHODCALLTYPE *GetExternal)(
        IDocHostUIHandler2* This,
        IDispatch** ppDispatch);

    HRESULT (STDMETHODCALLTYPE *TranslateUrl)(
        IDocHostUIHandler2* This,
        DWORD dwTranslate,
        OLECHAR* pchURLIn,
        OLECHAR** ppchURLOut);

    HRESULT (STDMETHODCALLTYPE *FilterDataObject)(
        IDocHostUIHandler2* This,
        IDataObject* pDO,
        IDataObject** ppDORet);

    /*** IDocHostUIHandler2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOverrideKeyPath)(
        IDocHostUIHandler2* This,
        LPOLESTR* pchKey,
        DWORD dw);

    END_INTERFACE
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDocHostUIHandler2_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDocHostUIHandler2_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDocHostUIHandler2_Release(p) (p)->lpVtbl->Release(p)
/*** IDocHostUIHandler methods ***/
#define IDocHostUIHandler2_ShowContextMenu(p,a,b,c,d) (p)->lpVtbl->ShowContextMenu(p,a,b,c,d)
#define IDocHostUIHandler2_GetHostInfo(p,a) (p)->lpVtbl->GetHostInfo(p,a)
#define IDocHostUIHandler2_ShowUI(p,a,b,c,d,e) (p)->lpVtbl->ShowUI(p,a,b,c,d,e)
#define IDocHostUIHandler2_HideUI(p) (p)->lpVtbl->HideUI(p)
#define IDocHostUIHandler2_UpdateUI(p) (p)->lpVtbl->UpdateUI(p)
#define IDocHostUIHandler2_EnableModeless(p,a) (p)->lpVtbl->EnableModeless(p,a)
#define IDocHostUIHandler2_OnDocWindowActivate(p,a) (p)->lpVtbl->OnDocWindowActivate(p,a)
#define IDocHostUIHandler2_OnFrameWindowActivate(p,a) (p)->lpVtbl->OnFrameWindowActivate(p,a)
#define IDocHostUIHandler2_ResizeBorder(p,a,b,c) (p)->lpVtbl->ResizeBorder(p,a,b,c)
#define IDocHostUIHandler2_TranslateAccelerator(p,a,b,c) (p)->lpVtbl->TranslateAccelerator(p,a,b,c)
#define IDocHostUIHandler2_GetOptionKeyPath(p,a,b) (p)->lpVtbl->GetOptionKeyPath(p,a,b)
#define IDocHostUIHandler2_GetDropTarget(p,a,b) (p)->lpVtbl->GetDropTarget(p,a,b)
#define IDocHostUIHandler2_GetExternal(p,a) (p)->lpVtbl->GetExternal(p,a)
#define IDocHostUIHandler2_TranslateUrl(p,a,b,c) (p)->lpVtbl->TranslateUrl(p,a,b,c)
#define IDocHostUIHandler2_FilterDataObject(p,a,b) (p)->lpVtbl->FilterDataObject(p,a,b)
/*** IDocHostUIHandler2 methods ***/
#define IDocHostUIHandler2_GetOverrideKeyPath(p,a,b) (p)->lpVtbl->GetOverrideKeyPath(p,a,b)
#endif

#endif

HRESULT CALLBACK IDocHostUIHandler2_GetOverrideKeyPath_Proxy(
    IDocHostUIHandler2* This,
    LPOLESTR* pchKey,
    DWORD dw);
void __RPC_STUB IDocHostUIHandler2_GetOverrideKeyPath_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDocHostUIHandler2_INTERFACE_DEFINED__ */

#ifndef __ICustomDoc_FWD_DEFINED__
#define __ICustomDoc_FWD_DEFINED__
typedef struct ICustomDoc ICustomDoc;
#endif

/*****************************************************************************
 * ICustomDoc interface
 */
#ifndef __ICustomDoc_INTERFACE_DEFINED__
#define __ICustomDoc_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICustomDoc, 0x3050f3f0, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct ICustomDoc : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetUIHandler(
        IDocHostUIHandler* pUIHandler) = 0;

};
#else
typedef struct ICustomDocVtbl ICustomDocVtbl;
struct ICustomDoc {
    const ICustomDocVtbl* lpVtbl;
};
struct ICustomDocVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICustomDoc* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICustomDoc* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICustomDoc* This);

    /*** ICustomDoc methods ***/
    HRESULT (STDMETHODCALLTYPE *SetUIHandler)(
        ICustomDoc* This,
        IDocHostUIHandler* pUIHandler);

    END_INTERFACE
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICustomDoc_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define ICustomDoc_AddRef(p) (p)->lpVtbl->AddRef(p)
#define ICustomDoc_Release(p) (p)->lpVtbl->Release(p)
/*** ICustomDoc methods ***/
#define ICustomDoc_SetUIHandler(p,a) (p)->lpVtbl->SetUIHandler(p,a)
#endif

#endif

HRESULT CALLBACK ICustomDoc_SetUIHandler_Proxy(
    ICustomDoc* This,
    IDocHostUIHandler* pUIHandler);
void __RPC_STUB ICustomDoc_SetUIHandler_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ICustomDoc_INTERFACE_DEFINED__ */

#ifndef __IDocHostShowUI_FWD_DEFINED__
#define __IDocHostShowUI_FWD_DEFINED__
typedef struct IDocHostShowUI IDocHostShowUI;
#endif

/*****************************************************************************
 * IDocHostShowUI interface
 */
#ifndef __IDocHostShowUI_INTERFACE_DEFINED__
#define __IDocHostShowUI_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDocHostShowUI, 0xc4d244b0, 0xd43e, 0x11cf, 0x89,0x3b, 0x00,0xaa,0x00,0xbd,0xce,0x1a);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IDocHostShowUI : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ShowMessage(
        HWND hwnd,
        LPOLESTR lpstrText,
        LPOLESTR lpstrCaption,
        DWORD dwType,
        LPOLESTR lpstrHelpFile,
        DWORD dwHelpContext,
        LRESULT* plResult) = 0;

    virtual HRESULT STDMETHODCALLTYPE ShowHelp(
        HWND hwnd,
        LPOLESTR pszHelpFile,
        UINT uCommand,
        DWORD dwData,
        POINT ptMouse,
        IDispatch* pDispatchObjectHit) = 0;

};
#else
typedef struct IDocHostShowUIVtbl IDocHostShowUIVtbl;
struct IDocHostShowUI {
    const IDocHostShowUIVtbl* lpVtbl;
};
struct IDocHostShowUIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDocHostShowUI* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDocHostShowUI* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDocHostShowUI* This);

    /*** IDocHostShowUI methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowMessage)(
        IDocHostShowUI* This,
        HWND hwnd,
        LPOLESTR lpstrText,
        LPOLESTR lpstrCaption,
        DWORD dwType,
        LPOLESTR lpstrHelpFile,
        DWORD dwHelpContext,
        LRESULT* plResult);

    HRESULT (STDMETHODCALLTYPE *ShowHelp)(
        IDocHostShowUI* This,
        HWND hwnd,
        LPOLESTR pszHelpFile,
        UINT uCommand,
        DWORD dwData,
        POINT ptMouse,
        IDispatch* pDispatchObjectHit);

    END_INTERFACE
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDocHostShowUI_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDocHostShowUI_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDocHostShowUI_Release(p) (p)->lpVtbl->Release(p)
/*** IDocHostShowUI methods ***/
#define IDocHostShowUI_ShowMessage(p,a,b,c,d,e,f,g) (p)->lpVtbl->ShowMessage(p,a,b,c,d,e,f,g)
#define IDocHostShowUI_ShowHelp(p,a,b,c,d,e,f) (p)->lpVtbl->ShowHelp(p,a,b,c,d,e,f)
#endif

#endif

HRESULT CALLBACK IDocHostShowUI_ShowMessage_Proxy(
    IDocHostShowUI* This,
    HWND hwnd,
    LPOLESTR lpstrText,
    LPOLESTR lpstrCaption,
    DWORD dwType,
    LPOLESTR lpstrHelpFile,
    DWORD dwHelpContext,
    LRESULT* plResult);
void __RPC_STUB IDocHostShowUI_ShowMessage_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDocHostShowUI_ShowHelp_Proxy(
    IDocHostShowUI* This,
    HWND hwnd,
    LPOLESTR pszHelpFile,
    UINT uCommand,
    DWORD dwData,
    POINT ptMouse,
    IDispatch* pDispatchObjectHit);
void __RPC_STUB IDocHostShowUI_ShowHelp_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDocHostShowUI_INTERFACE_DEFINED__ */

#define IClassFactory3 IClassFactoryEx
#define IID_IClassFactory3 IID_IClassFactoryEx
#ifndef __IClassFactoryEx_FWD_DEFINED__
#define __IClassFactoryEx_FWD_DEFINED__
typedef struct IClassFactoryEx IClassFactoryEx;
#endif

/*****************************************************************************
 * IClassFactoryEx interface
 */
#ifndef __IClassFactoryEx_INTERFACE_DEFINED__
#define __IClassFactoryEx_INTERFACE_DEFINED__

DEFINE_GUID(IID_IClassFactoryEx, 0x342d1ea0, 0xae25, 0x11d1, 0x89,0xc5, 0x00,0x60,0x08,0xc3,0xfb,0xfc);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IClassFactoryEx : public IClassFactory
{
    virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithContext(
        IUnknown* punkContext,
        IUnknown* punkOuter,
        REFIID riid,
        void** ppv) = 0;

};
#else
typedef struct IClassFactoryExVtbl IClassFactoryExVtbl;
struct IClassFactoryEx {
    const IClassFactoryExVtbl* lpVtbl;
};
struct IClassFactoryExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IClassFactoryEx* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IClassFactoryEx* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IClassFactoryEx* This);

    /*** IClassFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IClassFactoryEx* This,
        IUnknown* pUnkOuter,
        REFIID riid,
        void** ppvObject);

    HRESULT (STDMETHODCALLTYPE *LockServer)(
        IClassFactoryEx* This,
        BOOL fLock);

    /*** IClassFactoryEx methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstanceWithContext)(
        IClassFactoryEx* This,
        IUnknown* punkContext,
        IUnknown* punkOuter,
        REFIID riid,
        void** ppv);

    END_INTERFACE
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IClassFactoryEx_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IClassFactoryEx_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IClassFactoryEx_Release(p) (p)->lpVtbl->Release(p)
/*** IClassFactory methods ***/
#define IClassFactoryEx_CreateInstance(p,a,b,c) (p)->lpVtbl->CreateInstance(p,a,b,c)
#define IClassFactoryEx_LockServer(p,a) (p)->lpVtbl->LockServer(p,a)
/*** IClassFactoryEx methods ***/
#define IClassFactoryEx_CreateInstanceWithContext(p,a,b,c,d) (p)->lpVtbl->CreateInstanceWithContext(p,a,b,c,d)
#endif

#endif

HRESULT CALLBACK IClassFactoryEx_CreateInstanceWithContext_Proxy(
    IClassFactoryEx* This,
    IUnknown* punkContext,
    IUnknown* punkOuter,
    REFIID riid,
    void** ppv);
void __RPC_STUB IClassFactoryEx_CreateInstanceWithContext_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IClassFactoryEx_INTERFACE_DEFINED__ */

typedef HRESULT WINAPI SHOWHTMLDIALOGFN(HWND,IMoniker*,VARIANT*,WCHAR*,VARIANT*);
typedef HRESULT WINAPI SHOWHTMLDIALOGEXFN(HWND,IMoniker*,DWORD,VARIANT*,WCHAR*,VARIANT*);
typedef HRESULT WINAPI SHOWMODELESSHTMLDIALOGFN(HWND,IMoniker*,VARIANT*,VARIANT*,IHTMLWindow2**);
EXTERN_C HRESULT WINAPI ShowHTMLDialog(HWND,IMoniker*,VARIANT*,WCHAR*,VARIANT*);
EXTERN_C HRESULT WINAPI ShowHTMLDialogEx(HWND,IMoniker*,DWORD,VARIANT*,WCHAR*,VARIANT*);
EXTERN_C HRESULT WINAPI ShowModelessHTMLDialog(HWND,IMoniker*,VARIANT*,VARIANT*,IHTMLWindow2**);
EXTERN_C HRESULT WINAPI RunHTMLApplication(HINSTANCE,HINSTANCE,LPSTR,int);
EXTERN_C HRESULT WINAPI CreateHTMLPropertyPage(IMoniker*,IPropertyPage**);
/* Begin additional prototypes for all interfaces */

unsigned long   __RPC_USER BSTR_UserSize     (unsigned long *, unsigned long,   BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (unsigned long *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (unsigned long *, BSTR *);
unsigned long   __RPC_USER VARIANT_UserSize     (unsigned long *, unsigned long,   VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (unsigned long *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (unsigned long *, VARIANT *);
unsigned long   __RPC_USER HWND_UserSize     (unsigned long *, unsigned long,   HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (unsigned long *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (unsigned long *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif
#endif /* __WIDL_MSHTMHST_H */

