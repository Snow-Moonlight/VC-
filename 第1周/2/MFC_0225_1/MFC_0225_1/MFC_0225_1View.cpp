
// MFC_0225_1View.cpp : CMFC_0225_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0225_1.h"
#endif

#include "MFC_0225_1Doc.h"
#include "MFC_0225_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0225_1View

IMPLEMENT_DYNCREATE(CMFC_0225_1View, CView)

BEGIN_MESSAGE_MAP(CMFC_0225_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_0225_1View ����/����

CMFC_0225_1View::CMFC_0225_1View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
}

CMFC_0225_1View::~CMFC_0225_1View()
{
}

BOOL CMFC_0225_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0225_1View ����

void CMFC_0225_1View::OnDraw(CDC* pDC)
{
	CMFC_0225_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0225_1View ���

#ifdef _DEBUG
void CMFC_0225_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0225_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0225_1Doc* CMFC_0225_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0225_1Doc)));
	return (CMFC_0225_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0225_1View ��Ϣ�������


void CMFC_0225_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0225_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	flag = 1;
	CClientDC dc(this);
	dc.TextOutW(100, 100, pDoc->s);
	CView::OnLButtonDown(nFlags, point);
}
