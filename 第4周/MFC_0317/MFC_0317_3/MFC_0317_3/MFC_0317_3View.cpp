
// MFC_0317_3View.cpp : CMFC_0317_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0317_3.h"
#endif

#include "MFC_0317_3Doc.h"
#include "MFC_0317_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0317_3View

IMPLEMENT_DYNCREATE(CMFC_0317_3View, CView)

BEGIN_MESSAGE_MAP(CMFC_0317_3View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFC_0317_3View ����/����

CMFC_0317_3View::CMFC_0317_3View()
{
	// TODO: �ڴ˴���ӹ������
	
}

CMFC_0317_3View::~CMFC_0317_3View()
{
}

BOOL CMFC_0317_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0317_3View ����

void CMFC_0317_3View::OnDraw(CDC* pDC)
{
	CMFC_0317_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (pDoc->set)
		for (int i = 0; i < pDoc->N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
			pDoc->set = false;
		}
	for (int i = 0; i < pDoc->N; i++)
	{
		pDC->Ellipse(pDoc->cr[i]);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0317_3View ���

#ifdef _DEBUG
void CMFC_0317_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0317_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0317_3Doc* CMFC_0317_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0317_3Doc)));
	return (CMFC_0317_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0317_3View ��Ϣ�������


void CMFC_0317_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0317_3Doc* pDoc = GetDocument();
	CRect c;
	GetClientRect(&c);
	int i = nIDEvent;
	pDoc->cr[i].top += 10;
	pDoc->cr[i].bottom += 10;
	if (pDoc->cr[i].bottom >= (c.bottom - c.top))
	{
		pDoc->cr[i].top -= 50;
		pDoc->cr[i].bottom -= 50;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}
