#if !defined(AFX_DIALOG4_H__2EEDA0E9_4DA4_4A0D_8A23_386CA175605F__INCLUDED_)
#define AFX_DIALOG4_H__2EEDA0E9_4DA4_4A0D_8A23_386CA175605F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialog4.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialog4 dialog

class CDialog4 : public CDialog
{
// Construction
public:
	CDialog4(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialog4)
	enum { IDD = IDD_DIALOG4 };
	float		m_Ax;
	float		m_Ay;
	float		m_Bx;
	float		m_By;
	float		m_Cx;
	float		m_Cy;
	float		m_Ox;
	float		m_Oy;
	float		m_ok;
	float		m_Theta;

	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialog4)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialog4)
	afx_msg void OnDraw();
	afx_msg void OnXuanzhuan();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOG4_H__2EEDA0E9_4DA4_4A0D_8A23_386CA175605F__INCLUDED_)
