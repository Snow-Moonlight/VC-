
// MFC_0310_4View.cpp : CMFC_0310_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0310_4.h"
#endif

#include "MFC_0310_4Doc.h"
#include "MFC_0310_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0310_4View

IMPLEMENT_DYNCREATE(CMFC_0310_4View, CView)

BEGIN_MESSAGE_MAP(CMFC_0310_4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_0310_4View ����/����

CMFC_0310_4View::CMFC_0310_4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0310_4View::~CMFC_0310_4View()
{
}

BOOL CMFC_0310_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0310_4View ����

void CMFC_0310_4View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0310_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0310_4View ���

#ifdef _DEBUG
void CMFC_0310_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0310_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0310_4Doc* CMFC_0310_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0310_4Doc)));
	return (CMFC_0310_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0310_4View ��Ϣ�������


void CMFC_0310_4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0310_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int sum = pDoc->A + pDoc->B;

	CString s;
	s.Format(_T("A+B=%d"), sum);
	CClientDC dc(this);
	dc.TextOutW(100, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
