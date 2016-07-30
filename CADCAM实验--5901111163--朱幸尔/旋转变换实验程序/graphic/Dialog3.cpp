// Dialog3.cpp : implementation file
//

#include "stdafx.h"
#include "graphic.h"
#include "Dialog3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialog3 dialog


CDialog3::CDialog3(CWnd* pParent /*=NULL*/)
	: CDialog(CDialog3::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialog3)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDialog3::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialog3)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialog3, CDialog)
	//{{AFX_MSG_MAP(CDialog3)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialog3 message handlers
