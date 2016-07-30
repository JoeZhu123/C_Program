// graphic.h : main header file for the GRAPHIC application
//

#if !defined(AFX_GRAPHIC_H__42A7EF2C_5D32_457C_A8C8_6C078A58A60C__INCLUDED_)
#define AFX_GRAPHIC_H__42A7EF2C_5D32_457C_A8C8_6C078A58A60C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include "Graphic_i.h"

/////////////////////////////////////////////////////////////////////////////
// CGraphicApp:
// See graphic.cpp for the implementation of this class
//

class CGraphicApp : public CWinApp
{
public:
	CGraphicApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGraphicApp)
	public:
	virtual BOOL InitInstance();
		virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CGraphicApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	BOOL m_bATLInited;
private:
	BOOL InitATL();
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRAPHIC_H__42A7EF2C_5D32_457C_A8C8_6C078A58A60C__INCLUDED_)
