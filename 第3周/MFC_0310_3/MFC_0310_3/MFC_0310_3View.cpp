
// MFC_0310_3View.cpp : CMFC_0310_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0310_3.h"
#endif

#include "MFC_0310_3Doc.h"
#include "MFC_0310_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0310_3View

IMPLEMENT_DYNCREATE(CMFC_0310_3View, CView)

BEGIN_MESSAGE_MAP(CMFC_0310_3View, CView)
	ON_WM_MBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC_0310_3View ����/����

CMFC_0310_3View::CMFC_0310_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0310_3View::~CMFC_0310_3View()
{
}

BOOL CMFC_0310_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0310_3View ����

void CMFC_0310_3View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0310_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0310_3View ���

#ifdef _DEBUG
void CMFC_0310_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0310_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0310_3Doc* CMFC_0310_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0310_3Doc)));
	return (CMFC_0310_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0310_3View ��Ϣ�������


void CMFC_0310_3View::OnMButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMButtonDown(nFlags, point);
}


void CMFC_0310_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("�����������");
	CClientDC dc(this);
	dc.TextOutW(100, 200, s);
	CView::OnLButtonDown(nFlags, point);
}


void CMFC_0310_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString ss = _T("�������̧��");
	CClientDC dc(this);
	dc.TextOutW(200, 200, ss);
	CView::OnLButtonUp(nFlags, point);
}
