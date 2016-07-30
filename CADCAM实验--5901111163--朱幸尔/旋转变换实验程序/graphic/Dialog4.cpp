// Dialog4.cpp : implementation file
//

#include "stdafx.h"
#include "graphic.h"
#include "Dialog4.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialog4 dialog


CDialog4::CDialog4(CWnd* pParent /*=NULL*/)
	: CDialog(CDialog4::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialog4)
	m_Ax = 0;
	m_Ay = 0;
	m_Bx = 0;
	m_By = 0;
	m_Cx = 0;
	m_Cy = 0;
	m_Ox = 0;
	m_Oy = 0;
	m_Theta = 0.0;
	//}}AFX_DATA_INIT
}


void CDialog4::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialog4)
	DDX_Text(pDX, IDC_EDIT1, m_Ax);
	DDX_Text(pDX, IDC_EDIT6, m_Ay);
	DDX_Text(pDX, IDC_EDIT2, m_Bx);
	DDX_Text(pDX, IDC_EDIT7, m_By);
	DDX_Text(pDX, IDC_EDIT3, m_Cx);
	DDX_Text(pDX, IDC_EDIT8, m_Cy);
	DDX_Text(pDX, IDC_EDIT4, m_Ox);
	DDX_Text(pDX, IDC_EDIT9, m_Oy);
	DDX_Text(pDX, IDC_EDIT5, m_Theta);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialog4, CDialog)
	//{{AFX_MSG_MAP(CDialog4)
	ON_BN_CLICKED(IDC_BUTTON1, OnDraw)
	ON_BN_CLICKED(IDC_BUTTON2, OnXuanzhuan)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialog4 message handlers

void CDialog4::OnDraw() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	char char1[10],char2[10],char3[10],char6[10],char7[10],char8[10];
	GetDlgItem(IDC_EDIT1)->GetWindowText(char1,10);
	GetDlgItem(IDC_EDIT2)->GetWindowText(char2,10);
	GetDlgItem(IDC_EDIT3)->GetWindowText(char3,10);	
	GetDlgItem(IDC_EDIT6)->GetWindowText(char6,10);
	GetDlgItem(IDC_EDIT7)->GetWindowText(char7,10);
	GetDlgItem(IDC_EDIT8)->GetWindowText(char8,10);
	

	m_Ax=atof(char1);
	m_Ay=atof(char6);
	m_Bx=atof(char2);
	m_By=atof(char7);
	m_Cx=atof(char3);
	m_Cy=atof(char8);
	m_ok=1;
	
	

	
	
}

void CDialog4::OnXuanzhuan() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	char char4[10],char5[10],char9[10];
	GetDlgItem(IDC_EDIT4)->GetWindowText(char4,10);
	GetDlgItem(IDC_EDIT9)->GetWindowText(char9,10);
	GetDlgItem(IDC_EDIT5)->GetWindowText(char5,10);

	m_Ox=atof(char4);
	m_Oy=atof(char9);
	m_Theta=atof(char9);
	m_ok=2;

}
