
// MFC_0225_2View.h : CMFC_0225_2View 类的接口
//

#pragma once


class CMFC_0225_2View : public CView
{
protected: // 仅从序列化创建
	CMFC_0225_2View();
	DECLARE_DYNCREATE(CMFC_0225_2View)

// 特性
public:
	CMFC_0225_2Doc* GetDocument() const;

// 操作
public:
	CString s;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC_0225_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC_0225_2View.cpp 中的调试版本
inline CMFC_0225_2Doc* CMFC_0225_2View::GetDocument() const
   { return reinterpret_cast<CMFC_0225_2Doc*>(m_pDocument); }
#endif

