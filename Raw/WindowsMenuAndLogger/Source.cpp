
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <windowsx.h>
#include "resource.h"

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	switch (uMsg)
	{
	case WM_CREATE:
	{
		return 0;
	}
	break;
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		hdc = BeginPaint(hwnd, &ps);
		EndPaint(hwnd, &ps);
		return 0;
	}
	break;

	case WM_COMMAND:
	{
		switch (LOWORD(wParam))
		{
		default:
			break;
		}
	}
	break;
	case WM_DESTROY:
	{
		PostQuitMessage(0);
		return 0;
	}
	break;
	default:break;
	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE _hInstance, HINSTANCE _prevInstance, LPSTR  _lpCmdLine, int _iCmdShow)
{
	WNDCLASSEX winclass;

	HWND hwnd;
	MSG msg;

	winclass.cbSize = sizeof(WNDCLASSEX);
	winclass.style = CS_DBLCLKS | CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
	winclass.lpfnWndProc = WindowProc;
	winclass.cbClsExtra = 0;
	winclass.cbWndExtra = 0;
	winclass.hInstance = _hInstance;
	winclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	winclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	winclass.hbrBackground = static_cast<HBRUSH>(GetStockObject(WHITE_BRUSH));
	winclass.lpszMenuName = MAKEINTRESOURCE(IDR_MENU1);
	winclass.lpszClassName = "My First Window";
	winclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);


	//Register the window
	if (!RegisterClassEx(&winclass))
	{
		return 0;
	}

	hwnd = CreateWindowEx(NULL, "My First Window", "My Basic Window", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 0, 0, 800, 800, NULL, NULL, _hInstance, NULL);



	if (!hwnd)
	{
		return 0;
	}

	//Main even loop 

	while (true)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
			{
				break;
			}
			TranslateMessage(&msg); // For keyboard and mouse handlings
			DispatchMessage(&msg); // For all other events
		}
		//GameLoop();
	}
	return (static_cast<int>(msg.wParam));
}



