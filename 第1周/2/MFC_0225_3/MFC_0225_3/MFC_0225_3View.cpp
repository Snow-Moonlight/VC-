
// MFC_0225_3View.cpp : CMFC_0225_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0225_3.h"
#endif

#include "MFC_0225_3Doc.h"
#include "MFC_0225_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0225_3View

IMPLEMENT_DYNCREATE(CMFC_0225_3View, CView)

BEGIN_MESSAGE_MAP(CMFC_0225_3View, CView)
END_MESSAGE_MAP()

// CMFC_0225_3View ����/����

CMFC_0225_3View::CMFC_0225_3View()
{
	// TODO: �ڴ˴���ӹ������
	s2 = _T("����View����ַ�����");
}

CMFC_0225_3View::~CMFC_0225_3View()
{
}

BOOL CMFC_0225_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0225_3View ����

void CMFC_0225_3View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0225_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s = pDoc->s1;
	s += s2;
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);
}


// CMFC_0225_3View ���

#ifdef _DEBUG
void CMFC_0225_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0225_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0225_3Doc* CMFC_0225_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0225_3Doc)));
	return (CMFC_0225_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0225_3View ��Ϣ�������
