
// MFC_0413_1View.cpp : CMFC_0413_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0413_1.h"
#endif

#include "MFC_0413_1Doc.h"
#include "MFC_0413_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0413_1View

IMPLEMENT_DYNCREATE(CMFC_0413_1View, CView)

BEGIN_MESSAGE_MAP(CMFC_0413_1View, CView)
	ON_WM_LBUTTONDOWN()
//	ON_WM_MBUTTONUP()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC_0413_1View ����/����

CMFC_0413_1View::CMFC_0413_1View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
}

CMFC_0413_1View::~CMFC_0413_1View()
{
}

BOOL CMFC_0413_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0413_1View ����

void CMFC_0413_1View::OnDraw(CDC* pDC)
{
	CMFC_0413_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	pDoc->cr.left = x - 50;
	pDoc->cr.top = y - 50;
	pDoc->cr.right = x + 50;
	pDoc->cr.bottom = y + 50;
	dc.Rectangle(pDoc->cr.left, pDoc->cr.top, pDoc->cr.right, pDoc->cr.bottom);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0413_1View ���

#ifdef _DEBUG
void CMFC_0413_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0413_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0413_1Doc* CMFC_0413_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0413_1Doc)));
	return (CMFC_0413_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0413_1View ��Ϣ�������


void CMFC_0413_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();
	x = point.x;
	y = point.y;
	flag += 1;
	CView::OnLButtonDown(nFlags, point);
}

void CMFC_0413_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();
	x1 = point.x;
	y1 = point.y;
	x = x1;
	y = y1;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void CMFC_0413_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMouseMove(nFlags, point);
}
