
// MFC_0407_1View.cpp : CMFC_0407_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0407_1.h"
#endif

#include "MFC_0407_1Doc.h"
#include "MFC_0407_1View.h"
#include "MyDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0407_1View

IMPLEMENT_DYNCREATE(CMFC_0407_1View, CView)

BEGIN_MESSAGE_MAP(CMFC_0407_1View, CView)
	ON_COMMAND(ID_POPOUT, &CMFC_0407_1View::OnPopout)
END_MESSAGE_MAP()

// CMFC_0407_1View ����/����

CMFC_0407_1View::CMFC_0407_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0407_1View::~CMFC_0407_1View()
{
}

BOOL CMFC_0407_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0407_1View ����

void CMFC_0407_1View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0407_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0407_1View ���

#ifdef _DEBUG
void CMFC_0407_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0407_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0407_1Doc* CMFC_0407_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0407_1Doc)));
	return (CMFC_0407_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0407_1View ��Ϣ�������


void CMFC_0407_1View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t != IDOK)
	{
		CClientDC dc(this);
		CString s = _T("�����˳��Ի���");
		dc.TextOutW(100, 100, s);
	}
}
