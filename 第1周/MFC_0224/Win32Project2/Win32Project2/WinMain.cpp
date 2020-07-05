#include <windows.h>
#include <stdio.h>

LRESULT CALLBACK WinSunProc(
	HWND hwnd,//handle to window
	UINT uMsg,//message identifier
	WPARAM wParam,//first message parameter
	LPARAM lParam
);

int WINAPI WinMain(
	HINSTANCE hInstance, //handle to current instance
	HINSTANCE hPrevInstance, //handle to previous instance
	LPSTR lpCmdLine, //command line
	int nCmdShow
)

{//���һ��������
	WNDCLASS wndcls;
	wndcls.cbClsExtra = 0;
	wndcls.cbWndExtra = 0;
	wndcls.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wndcls.hCursor = LoadCursor(NULL, IDC_CROSS);
	wndcls.hIcon = LoadIcon(NULL, IDI_ERROR);
	wndcls.hInstance = hInstance; //Ӧ�ó���ʵ�������WinMain����������
	wndcls.lpfnWndProc = WinSunProc;
	wndcls.lpszClassName = L"sunxin2006";
	wndcls.lpszMenuName = NULL;
	wndcls.style = CS_HREDRAW | CS_VREDRAW;
	RegisterClass(&wndcls);


	//�������ڣ�����һ��������������ɹ��������ں󷵻صľ��
	HWND hwnd;
	LPCWSTR aa = L"sunxin2006";
	hwnd = CreateWindow(aa, L"http://www.sunxin.org", WS_OVERLAPPEDWINDOW, 0, 0, 600, 400, NULL, NULL, hInstance, NULL);

	//��ʾ��ˢ�´���
	ShowWindow(hwnd, SW_SHOWNORMAL);
	UpdateWindow(hwnd);

	//������Ϣ�ṹ�壬��ʼ��Ϣѭ��
	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

//��д���ڹ��̺���
LRESULT CALLBACK WinSunProc(
	HWND hwnd,//handle to window
	UINT uMsg,//message identifier
	WPARAM wParam,//first message parameter
	LPARAM lParam
)
{
	switch (uMsg)
	{
	case WM_CHAR:
		char szChar[20];
		sprintf_s(szChar, "char code is %d", wParam);
		MessageBox(hwnd, (LPCWSTR)szChar, L"char", 0);
		break;
	case WM_LBUTTONDOWN:
		MessageBox(hwnd, L"mouse clicked", L"message", 0);
		HDC hdc;
		hdc = GetDC(hwnd);  //��������ӦWM_PAINT��Ϣʱ����

		TextOut(hdc, 0, 50, L"����Ա֮��", strlen("����Ա֮��"));
		//ReleaseDC(hwnd,hdc);
		break;
	case WM_PAINT:
		HDC hDC;
		PAINTSTRUCT ps;
		hDC = BeginPaint(hwnd, &ps); //BeginPaintֻ������ӦWM_PAINT��Ϣʱ����
		TextOut(hDC, 0, 0, L"http://www.sunxin.org", strlen("http://www.sunxin.org"));
		EndPaint(hwnd, &ps);
		break;
	case WM_CLOSE:
		if (IDYES == MessageBox(hwnd, L"�Ƿ���Ľ�����", L"message", MB_YESNO))
		{
			DestroyWindow(hwnd);
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
	return 0;
}