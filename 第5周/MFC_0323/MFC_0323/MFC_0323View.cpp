
// MFC_0323View.cpp : CMFC_0323View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0323.h"
#endif

#include "MFC_0323Doc.h"
#include "MFC_0323View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0323View

IMPLEMENT_DYNCREATE(CMFC_0323View, CView)

BEGIN_MESSAGE_MAP(CMFC_0323View, CView)
	ON_COMMAND(ID_SHOW, &CMFC_0323View::OnShow)
END_MESSAGE_MAP()

// CMFC_0323View ����/����

CMFC_0323View::CMFC_0323View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0323View::~CMFC_0323View()
{
}

BOOL CMFC_0323View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0323View ����

void CMFC_0323View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0323Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0323View ���

#ifdef _DEBUG
void CMFC_0323View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0323View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0323Doc* CMFC_0323View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0323Doc)));
	return (CMFC_0323Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0323View ��Ϣ�������


void CMFC_0323View::OnShow()
{
	// TODO: �ڴ���������������
	/*CString s = _T("123");
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);*/
	int r,t;
	CRect cr;
	this->GetClientRect(&cr);
	int x = cr.Width() / 2;
	int y = cr.Height() / 2;
	if (x < y)t = x;
	else t = y;
	
	//CPen newPen(PS_SOLID, 1, color);
	//CPen*oldPen = pDC->SelectObject(&newPen);
	CClientDC dc(this);
	for (r = 1; r <= t; r++)
	{
		dc.Ellipse(x - r, y - r, x + r, y + r);
		//Invalidate();
	}
}
