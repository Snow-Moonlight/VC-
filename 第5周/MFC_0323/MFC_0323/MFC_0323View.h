
// MFC_0323View.h : CMFC_0323View ��Ľӿ�
//

#pragma once


class CMFC_0323View : public CView
{
protected: // �������л�����
	CMFC_0323View();
	DECLARE_DYNCREATE(CMFC_0323View)

// ����
public:
	CMFC_0323Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC_0323View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
};

#ifndef _DEBUG  // MFC_0323View.cpp �еĵ��԰汾
inline CMFC_0323Doc* CMFC_0323View::GetDocument() const
   { return reinterpret_cast<CMFC_0323Doc*>(m_pDocument); }
#endif

