
// MFC_0420_1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC_0420_1App: 
// �йش����ʵ�֣������ MFC_0420_1.cpp
//

class CMFC_0420_1App : public CWinApp
{
public:
	CMFC_0420_1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC_0420_1App theApp;