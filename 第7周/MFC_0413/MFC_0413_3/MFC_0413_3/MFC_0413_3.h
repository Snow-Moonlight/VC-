
// MFC_0413_3.h : MFC_0413_3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC_0413_3App:
// �йش����ʵ�֣������ MFC_0413_3.cpp
//

class CMFC_0413_3App : public CWinApp
{
public:
	CMFC_0413_3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_0413_3App theApp;
