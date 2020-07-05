
// MFC_0317_1View.cpp : CMFC_0317_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0317_1.h"
#endif

#include "MFC_0317_1Doc.h"
#include "MFC_0317_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0317_1View

IMPLEMENT_DYNCREATE(CMFC_0317_1View, CView)

BEGIN_MESSAGE_MAP(CMFC_0317_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFC_0317_1View ����/����

CMFC_0317_1View::CMFC_0317_1View()
{
	// TODO: �ڴ˴���ӹ������
	count = 0; acount = 0;
}

CMFC_0317_1View::~CMFC_0317_1View()
{
}

BOOL CMFC_0317_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0317_1View ����

void CMFC_0317_1View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0317_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0317_1View ���

#ifdef _DEBUG
void CMFC_0317_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0317_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0317_1Doc* CMFC_0317_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0317_1Doc)));
	return (CMFC_0317_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0317_1View ��Ϣ�������


void CMFC_0317_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0317_1Doc* pDoc = GetDocument();
	GetCapture();
	pDoc->x = point.x;
	pDoc->y = point.y;
	acount = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC_0317_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0317_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	acount = 0;
	ReleaseCapture();
	CClientDC dc(this);
	int a;
	int sum = 0;
	sum += point.x - pDoc->x;
	a = sum / count;
	CString ss,aa;
	ss.Format(_T("ƽ��ÿ�κ����ƶ�%d������"), a);
	aa.Format(_T("point.x=%d,pDoc->x=%d"), point.x, pDoc->x);
	dc.TextOutW(200, 20, ss);
	dc.TextOutW(300, 50, aa);
	CView::OnLButtonUp(nFlags, point);
}


void CMFC_0317_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0317_1Doc* pDoc = GetDocument();

	if (acount == 1)
		count++;
	CClientDC dc(this);
	CString s;
	s.Format(_T("�ƶ�������%d"), count);
	dc.TextOutW(20, 20, s);
	CView::OnMouseMove(nFlags, point);
}
