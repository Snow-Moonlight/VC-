
// MFC_0225_2.h : MFC_0225_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC_0225_2App:
// �йش����ʵ�֣������ MFC_0225_2.cpp
//

class CMFC_0225_2App : public CWinApp
{
public:
	CMFC_0225_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_0225_2App theApp;
