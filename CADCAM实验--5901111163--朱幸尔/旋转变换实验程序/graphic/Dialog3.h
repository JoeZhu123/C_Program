#if !defined(AFX_DIALOG3_H__CDD54E84_7E91_49BE_83E6_323D966F35B4__INCLUDED_)
#define AFX_DIALOG3_H__CDD54E84_7E91_49BE_83E6_323D966F35B4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialog3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialog3 dialog

class CDialog3 : public CDialog
{
// Construction
public:
	CDialog3(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialog3)
	enum { IDD = IDD_DIALOG3 };
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialog3)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialog3)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOG3_H__CDD54E84_7E91_49BE_83E6_323D966F35B4__INCLUDED_)
