
// MFC_0317_2View.cpp : CMFC_0317_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0317_2.h"
#endif

#include "MFC_0317_2Doc.h"
#include "MFC_0317_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0317_2View

IMPLEMENT_DYNCREATE(CMFC_0317_2View, CView)

BEGIN_MESSAGE_MAP(CMFC_0317_2View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC_0317_2View ����/����

CMFC_0317_2View::CMFC_0317_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0317_2View::~CMFC_0317_2View()
{
}

BOOL CMFC_0317_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0317_2View ����

void CMFC_0317_2View::OnDraw(CDC* pDC)
{
	CMFC_0317_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0317_2View ���

#ifdef _DEBUG
void CMFC_0317_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0317_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0317_2Doc* CMFC_0317_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0317_2Doc)));
	return (CMFC_0317_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0317_2View ��Ϣ�������


void CMFC_0317_2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0317_2Doc* pDoc = GetDocument();
	CRect c;
	GetClientRect(&c);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <= (c.right - c.left))
		{
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= (c.bottom - c.top))
		{
			pDoc->cr.top += 5;
			pDoc->cr.bottom += 5;
		}
		break;
	case VK_HOME:
		if (pDoc->cr.bottom - pDoc->cr.top >= 0 && pDoc->cr.right - pDoc->cr.left >= 0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.top -= 5;
		}
		break;
	case VK_END:
		if (pDoc->cr.bottom - pDoc->cr.top >= 0 && pDoc->cr.right - pDoc->cr.left >= 0)
		{
			pDoc->cr.left += 5;
			pDoc->cr.top += 5;
		}
		break;
}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFC_0317_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0317_2Doc* pDoc = GetDocument(); 
	pDoc->cr.left = 30;
	pDoc->cr.top = 30;
	pDoc->cr.right = 80;
	pDoc->cr.bottom = 80;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
