
// MFC_0413_3View.cpp : CMFC_0413_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0413_3.h"
#endif

#include "MFC_0413_3Doc.h"
#include "MFC_0413_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0413_3View

IMPLEMENT_DYNCREATE(CMFC_0413_3View, CView)

BEGIN_MESSAGE_MAP(CMFC_0413_3View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC_0413_3View ����/����

CMFC_0413_3View::CMFC_0413_3View()
{
	// TODO: �ڴ˴���ӹ������
	
}

CMFC_0413_3View::~CMFC_0413_3View()
{
}

BOOL CMFC_0413_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0413_3View ����

void CMFC_0413_3View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0413_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect ct; int r = rand() % 50;
	GetClientRect(&ct);
	pDoc->cr.top = ct.Height() / 2 - r;
	pDoc->cr.left = 100 - r;
	pDoc->cr.bottom = ct.Height() / 2 + r;
	pDoc->cr.right = 100 + r;
	CClientDC dc(this);
	dc.Ellipse(pDoc->cr.left, pDoc->cr.top, pDoc->cr.right, pDoc->cr.bottom);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0413_3View ���

#ifdef _DEBUG
void CMFC_0413_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0413_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0413_3Doc* CMFC_0413_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0413_3Doc)));
	return (CMFC_0413_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0413_3View ��Ϣ�������


void CMFC_0413_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CView::OnTimer(nIDEvent);
}
