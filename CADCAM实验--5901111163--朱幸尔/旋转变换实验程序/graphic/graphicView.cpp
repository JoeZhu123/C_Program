// graphicView.cpp : implementation of the CGraphicView class
//

#include "stdafx.h"
#include "graphic.h"

#include "graphicDoc.h"
#include "graphicView.h"
#include "Dialog4.h"
#include "math.h"
#define PI 3.1415926

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraphicView

IMPLEMENT_DYNCREATE(CGraphicView, CView)

BEGIN_MESSAGE_MAP(CGraphicView, CView)
	//{{AFX_MSG_MAP(CGraphicView)
	ON_COMMAND(IDM_POINT, OnPoint)
	ON_COMMAND(IDM_LINE, OnLine)
	ON_COMMAND(IDM_RECTANGLE, OnRectangle)
	ON_COMMAND(IDM_ELLIPSE, OnEllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(IDM_ANGLEARC, OnAnglearc)
	ON_COMMAND(IDM_CANSHU, OnCanshu)
	ON_COMMAND(IDM_DRAWING, OnDrawing)
	ON_COMMAND(IDM_ROTATING, OnRotating)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraphicView construction/destruction

CGraphicView::CGraphicView()
{
	// TODO: add construction code here
	m_nDrawType=0;
	m_ptOrigin=0;
	m_AX=0;
	m_AY=0;
	m_BX=0;
	m_BY=0;
	m_CX=0;
	m_CY=0;
	m_OX=0;
	m_OY=0;
	m_THETA=0;
	m_OK=0;
}

CGraphicView::~CGraphicView()
{
}

BOOL CGraphicView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CGraphicView drawing

void CGraphicView::OnDraw(CDC* pDC)
{
	CGraphicDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here	
}

/////////////////////////////////////////////////////////////////////////////
// CGraphicView printing

BOOL CGraphicView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGraphicView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGraphicView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CGraphicView diagnostics

#ifdef _DEBUG
void CGraphicView::AssertValid() const
{
	CView::AssertValid();
}

void CGraphicView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGraphicDoc* CGraphicView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGraphicDoc)));
	return (CGraphicDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGraphicView message handlers

void CGraphicView::OnPoint() 
{
	// TODO: Add your command handler code here
	m_nDrawType=1;
	
}

void CGraphicView::OnLine() 
{
	// TODO: Add your command handler code here
	m_nDrawType=2;
}

void CGraphicView::OnRectangle() 
{
	// TODO: Add your command handler code here
	m_nDrawType=3;
}

void CGraphicView::OnEllipse() 
{
	// TODO: Add your command handler code here
	m_nDrawType=4;
}

void CGraphicView::OnAnglearc() 
{
	// TODO: Add your command handler code here
	m_nDrawType=5;
}


void CGraphicView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptOrigin=point;
	CView::OnLButtonDown(nFlags, point);
}

void CGraphicView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	CPen pen(PS_SOLID,1,RGB(255,0,0));
	dc.SelectObject(&pen);
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	dc.SelectObject(pBrush);
	switch(m_nDrawType)
	{
	case 1:
		dc.SetPixel(point,RGB(255,0,0));
		break;
	case 2:
		dc.MoveTo(m_ptOrigin);
		dc.LineTo(point);
		break;
	case 3:
		dc.Rectangle(CRect(m_ptOrigin,point));
		break;
	case 4:
		dc.Ellipse(CRect(m_ptOrigin,point));
		break;
	default:
		break;
	}
	CView::OnLButtonUp(nFlags, point);
}

void CGraphicView::OnCanshu() 
{
	// TODO: Add your command handler code here

	CDialog4 dlg;
	dlg.m_Ax=m_AX;
	dlg.m_Ay=m_AY;
	dlg.m_Bx=m_BX;
	dlg.m_By=m_BY;
	dlg.m_Cx=m_CX;
	dlg.m_Cy=m_CY;
	dlg.m_Ox=m_OX;
	dlg.m_Oy=m_OY;
	dlg.m_Theta=m_THETA;
//	CDialog4 *pDlg=new CDialog4();
//	pDlg->Create(IDD_DIALOG4,this);
//	pDlg->ShowWindow(SW_SHOW);
	if(IDOK==dlg.DoModal())
	{
		m_AX=dlg.m_Ax;
		m_AY=dlg.m_Ay;
		m_BX=dlg.m_Bx;
		m_BY=dlg.m_By;
		m_CX=dlg.m_Cx;
		m_CY=dlg.m_Cy;
		m_OX=dlg.m_Ox;
		m_OY=dlg.m_Oy;
		m_THETA=dlg.m_Theta;
	}
}


	


void CGraphicView::OnDrawing() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CClientDC dc(this);
	CPen pen(PS_SOLID,2,RGB(0,0,0));
	dc.SelectObject(&pen);
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	dc.SelectObject(pBrush);
	dc.MoveTo(m_AX,m_AY);
	pDC->TextOut(m_AX+5,m_AY+5, "A"); 
	dc.LineTo(m_BX,m_BY);
	dc.MoveTo(m_BX,m_BY);
	pDC->TextOut(m_BX+5,m_BY+5, "B"); 
	dc.LineTo(m_CX,m_CY);
	dc.MoveTo(m_CX,m_CY);
	pDC->TextOut(m_CX+5,m_CY+5, "C"); 
	dc.LineTo(m_AX,m_AY);		
	dc.SetPixel(m_OX,m_OY,RGB(255,0,0));
	pDC->TextOut(m_OX+5,m_OY+5, "Ðý×ªÖÐÐÄ O "); 
	
}

void CGraphicView::OnRotating() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CClientDC dc(this);
	CPen pen(PS_SOLID,2,RGB(255,0,0));
	dc.SelectObject(&pen);
	CBrush *pBrush=CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	dc.SelectObject(pBrush);
	float P[3][3],Q[3][3],F[3][3];
	P[0][0]=m_AX;
	P[0][1]=m_AY;
	P[0][2]=1;
	P[1][0]=m_BX;
	P[1][1]=m_BY;
	P[1][2]=1;
	P[2][0]=m_CX;
	P[2][1]=m_CY;
	P[2][2]=1;


	Q[0][0]=cos(m_THETA*PI/180);
	Q[0][1]=sin(m_THETA*PI/180);
	Q[0][2]=0;
	Q[1][0]=-sin(m_THETA*PI/180);
	Q[1][1]=cos(m_THETA*PI/180);
	Q[1][2]=0;
	Q[2][0]=-m_OX*cos(m_THETA*PI/180)+m_OY*sin(m_THETA*PI/180)+m_OX;
	Q[2][1]=-m_OX*sin(m_THETA*PI/180)-m_OY*cos(m_THETA*PI/180)+m_OY;
	Q[2][2]=1;

	int m,n;
	for(m=0;m<=2;m++)
		for(n=0;n<=2;n++)
			F[m][n]=0;
	

	int  i,j,k;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			{
			F[i][j]= F[i][j]+P[i][k]* Q[k][j];
			}
		}
	}

	
			
	m_AX=F[0][0];
	m_AY=F[0][1];
	m_BX=F[1][0];
	m_BY=F[1][1];
	m_CX=F[2][0];
	m_CY=F[2][1];
	dc.MoveTo(m_AX,m_AY);
	pDC->TextOut(m_AX+5,m_AY+5, "A'"); 
	dc.LineTo(m_BX,m_BY);
	dc.MoveTo(m_BX,m_BY);
	pDC->TextOut(m_BX+5,m_BY+5, "B'"); 
	dc.LineTo(m_CX,m_CY);
	dc.MoveTo(m_CX,m_CY);
	pDC->TextOut(m_CX+5,m_CY+5, "C'"); 
	dc.LineTo(m_AX,m_AY);

	

}
