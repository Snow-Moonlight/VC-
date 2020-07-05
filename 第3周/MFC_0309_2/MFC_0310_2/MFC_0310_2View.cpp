
// MFC_0310_2View.cpp : CMFC_0310_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0310_2.h"
#endif

#include "MFC_0310_2Doc.h"
#include "MFC_0310_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0310_2View

IMPLEMENT_DYNCREATE(CMFC_0310_2View, CView)

BEGIN_MESSAGE_MAP(CMFC_0310_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_0310_2View ����/����

CMFC_0310_2View::CMFC_0310_2View()
{
	// TODO: �ڴ˴���ӹ������
	
}

CMFC_0310_2View::~CMFC_0310_2View()
{
}

BOOL CMFC_0310_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0310_2View ����

void CMFC_0310_2View::OnDraw(CDC* pDC)
{
	CMFC_0310_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca[i]);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0310_2View ���

#ifdef _DEBUG
void CMFC_0310_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0310_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0310_2Doc* CMFC_0310_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0310_2Doc)));
	return (CMFC_0310_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0310_2View ��Ϣ�������


void CMFC_0310_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0310_2Doc* pDoc = GetDocument();

	int r = rand() % 50 + 5;
	int t = rand() % 30 + 5;
	
	CRect cr(point.x - r, point.y - t, point.x + r, point.y + t);

	pDoc->ca.Add(cr);
	this->Invalidate();

    //CClientDC dc(this);
	//dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
