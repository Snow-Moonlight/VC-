
// MFC_0323.h : MFC_0323 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC_0323App:
// �йش����ʵ�֣������ MFC_0323.cpp
//

class CMFC_0323App : public CWinApp
{
public:
	CMFC_0323App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_0323App theApp;
