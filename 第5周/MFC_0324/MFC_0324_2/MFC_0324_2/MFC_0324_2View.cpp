
// MFC_0324_2View.cpp : CMFC_0324_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0324_2.h"
#endif

#include "MFC_0324_2Doc.h"
#include "MFC_0324_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0324_2View

IMPLEMENT_DYNCREATE(CMFC_0324_2View, CView)

BEGIN_MESSAGE_MAP(CMFC_0324_2View, CView)
	ON_COMMAND(ID_SHOWICON, &CMFC_0324_2View::OnShowicon)
END_MESSAGE_MAP()

// CMFC_0324_2View ����/����

CMFC_0324_2View::CMFC_0324_2View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFC_0324_2View::~CMFC_0324_2View()
{
}

BOOL CMFC_0324_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0324_2View ����

void CMFC_0324_2View::OnDraw(CDC* pDC)
{
	CMFC_0324_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0324_2View ���

#ifdef _DEBUG
void CMFC_0324_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0324_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0324_2Doc* CMFC_0324_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0324_2Doc)));
	return (CMFC_0324_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0324_2View ��Ϣ�������


void CMFC_0324_2View::OnShowicon()
{
	// TODO: �ڴ���������������
}
