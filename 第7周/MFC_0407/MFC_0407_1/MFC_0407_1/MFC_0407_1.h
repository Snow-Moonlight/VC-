
// MFC_0407_1.h : MFC_0407_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC_0407_1App:
// �йش����ʵ�֣������ MFC_0407_1.cpp
//

class CMFC_0407_1App : public CWinApp
{
public:
	CMFC_0407_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_0407_1App theApp;
