
// MFC_0324_3View.cpp : CMFC_0324_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0324_3.h"
#endif

#include "MFC_0324_3Doc.h"
#include "MFC_0324_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0324_3View

IMPLEMENT_DYNCREATE(CMFC_0324_3View, CView)

BEGIN_MESSAGE_MAP(CMFC_0324_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_PAINTLINE, &CMFC_0324_3View::OnPaintline)
	ON_COMMAND(ID_PAINTRECT, &CMFC_0324_3View::OnPaintrect)
	ON_COMMAND(ID_PAINTECLIPSE, &CMFC_0324_3View::OnPainteclipse)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_0324_3View ����/����

CMFC_0324_3View::CMFC_0324_3View()
{
	// TODO: �ڴ˴���ӹ������
	a = 0;
	b = 0;
	c = 0;
}

CMFC_0324_3View::~CMFC_0324_3View()
{
}

BOOL CMFC_0324_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0324_3View ����

void CMFC_0324_3View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0324_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0324_3View ���

#ifdef _DEBUG
void CMFC_0324_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0324_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0324_3Doc* CMFC_0324_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0324_3Doc)));
	return (CMFC_0324_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0324_3View ��Ϣ�������

void CMFC_0324_3View::OnPaintline()
{
	// TODO: �ڴ���������������
	a = 1;

}


void CMFC_0324_3View::OnPaintrect()
{
	// TODO: �ڴ���������������
	b = 1;
}

void CMFC_0324_3View::OnPainteclipse()
{
	// TODO: �ڴ���������������
	c = 1;
}

void CMFC_0324_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	m_ptOrigin = point;
	cr.left = point.x;
	cr.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC_0324_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	npoint = point;
	cr.right = point.x;
	cr.bottom = point.y;
	if (a == 1)
	{
		CClientDC dc(this);
		dc.MoveTo(m_ptOrigin);
		dc.LineTo(npoint);
		a = 0;
	}
	else if (b == 1)
	{
		CClientDC dc(this);
		dc.Rectangle(cr.left, cr.top, cr.right, cr.bottom);
		b = 0;
	}
	else if (c == 1)
	{
		CClientDC dc(this);
		dc.Ellipse(cr.left, cr.top, cr.right, cr.bottom);
		c = 0;
	}
	CView::OnLButtonUp(nFlags, point);
}
