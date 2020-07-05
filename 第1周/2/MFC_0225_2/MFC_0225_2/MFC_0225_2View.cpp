
// MFC_0225_2View.cpp : CMFC_0225_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0225_2.h"
#endif

#include "MFC_0225_2Doc.h"
#include "MFC_0225_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0225_2View

IMPLEMENT_DYNCREATE(CMFC_0225_2View, CView)

BEGIN_MESSAGE_MAP(CMFC_0225_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_0225_2View ����/����

CMFC_0225_2View::CMFC_0225_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0225_2View::~CMFC_0225_2View()
{
}

BOOL CMFC_0225_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0225_2View ����

void CMFC_0225_2View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0225_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0225_2View ���

#ifdef _DEBUG
void CMFC_0225_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0225_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0225_2Doc* CMFC_0225_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0225_2Doc)));
	return (CMFC_0225_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0225_2View ��Ϣ�������


void CMFC_0225_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0225_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC_0225_2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0225_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	int num = pDoc->count;
	s.Format(_T("%d"),num);
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);
	CView::OnRButtonDown(nFlags, point);
}
