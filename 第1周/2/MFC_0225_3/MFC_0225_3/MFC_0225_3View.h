
// MFC_0225_3View.h : CMFC_0225_3View ��Ľӿ�
//

#pragma once


class CMFC_0225_3View : public CView
{
protected: // �������л�����
	CMFC_0225_3View();
	DECLARE_DYNCREATE(CMFC_0225_3View)

// ����
public:
	CMFC_0225_3Doc* GetDocument() const;

// ����
public:
	CString s2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC_0225_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC_0225_3View.cpp �еĵ��԰汾
inline CMFC_0225_3Doc* CMFC_0225_3View::GetDocument() const
   { return reinterpret_cast<CMFC_0225_3Doc*>(m_pDocument); }
#endif

