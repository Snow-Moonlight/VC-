
// MFC_0310_1View.cpp : CMFC_0310_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0310_1.h"
#endif

#include "MFC_0310_1Doc.h"
#include "MFC_0310_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0310_1View

IMPLEMENT_DYNCREATE(CMFC_0310_1View, CView)

BEGIN_MESSAGE_MAP(CMFC_0310_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_0310_1View ����/����

CMFC_0310_1View::CMFC_0310_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0310_1View::~CMFC_0310_1View()
{
}

BOOL CMFC_0310_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0310_1View ����

void CMFC_0310_1View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0310_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0310_1View ���

#ifdef _DEBUG
void CMFC_0310_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0310_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0310_1Doc* CMFC_0310_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0310_1Doc)));
	return (CMFC_0310_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0310_1View ��Ϣ�������


void CMFC_0310_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r;
	CRect cr;
	this->GetClientRect(&cr);

	int x = cr.Width() / 2;
	int y = cr.Height() / 2;
	if (x < y)r = x;
	else r = y;

	CClientDC dc(this);
	dc.Ellipse(x - r, y - r, x + r, y + r);

	CView::OnLButtonDown(nFlags, point);
}
