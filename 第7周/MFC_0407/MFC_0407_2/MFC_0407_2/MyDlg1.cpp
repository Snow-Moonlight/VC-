// MyDlg1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC_0407_2.h"
#include "MyDlg1.h"
#include "afxdialogex.h"


// MyDlg1 �Ի���

IMPLEMENT_DYNAMIC(MyDlg1, CDialogEx)

MyDlg1::MyDlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
	, ss(_T(""))
{

}

MyDlg1::~MyDlg1()
{
}

void MyDlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
	DDV_MaxChars(pDX, s, 500);
	DDX_Text(pDX, IDC_EDIT2, ss);
	DDV_MaxChars(pDX, ss, 500);
}


BEGIN_MESSAGE_MAP(MyDlg1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg1::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg1 ��Ϣ�������


void MyDlg1::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CString sss;
	sss = s;
	s = ss;
	ss = sss;
	UpdateData(false);
}
