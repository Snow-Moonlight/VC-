
// MFC_0413_4View.cpp : CMFC_0413_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0413_4.h"
#endif

#include "MFC_0413_4Doc.h"
#include "MFC_0413_4View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0413_4View

IMPLEMENT_DYNCREATE(CMFC_0413_4View, CView)

BEGIN_MESSAGE_MAP(CMFC_0413_4View, CView)
	ON_COMMAND(ID_POPOUT, &CMFC_0413_4View::OnPopout)
END_MESSAGE_MAP()

// CMFC_0413_4View ����/����

CMFC_0413_4View::CMFC_0413_4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0413_4View::~CMFC_0413_4View()
{
}

BOOL CMFC_0413_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0413_4View ����

void CMFC_0413_4View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0413_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0413_4View ���

#ifdef _DEBUG
void CMFC_0413_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0413_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0413_4Doc* CMFC_0413_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0413_4Doc)));
	return (CMFC_0413_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0413_4View ��Ϣ�������


void CMFC_0413_4View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
}
