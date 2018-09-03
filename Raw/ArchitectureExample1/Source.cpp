
#include <windows.h>
#include <windowsx.h>
#include <string>

#include "game.h"
#include "config.h"

using namespace std;

LRESULT CALLBACK WindowProc(HWND _hWnd, UINT _uiMsg, WPARAM _wParam, LPARAM _lParam)
{


	switch (_uiMsg)
	{
		case WM_DESTROY:
		{
			PostQuitMessage(0);
			return 0;
		}
		break;

		default:break;
	}
	return DefWindowProc(_hWnd, _uiMsg, _wParam, _lParam);
} 

HWND CreateAndRegisterWindow(HINSTANCE _hInstance,int _iWidth,int _iHeight, string _pcTitle)
{
	WNDCLASSEX winclass;

	winclass.cbSize = sizeof(WNDCLASSEX);
	winclass.style =  CS_HREDRAW | CS_VREDRAW; //CS_DBLCLKS | CS_OWNDC |
	winclass.lpfnWndProc = WindowProc;
	winclass.cbClsExtra = 0;
	winclass.cbWndExtra = 0;
	winclass.hInstance = _hInstance;
	winclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	winclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	winclass.hbrBackground = static_cast<HBRUSH>(GetStockObject(WHITE_BRUSH));
	if (IS_PRODUCTION ? winclass.lpszMenuName = NULL : winclass.lpszMenuName = NULL);
	winclass.lpszClassName = CLASS_NAME;
	winclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	if (!RegisterClassEx(&winclass))
	{
		return 0;
	}

	HWND hwnd;

	hwnd = CreateWindowEx(NULL, CLASS_NAME, WINDOW_NAME, WS_BORDER | WS_CAPTION | WS_SYSMENU | WS_VISIBLE , CW_USEDEFAULT, CW_USEDEFAULT, _iWidth, _iHeight, NULL, NULL, _hInstance, NULL);

	if (!hwnd)
	{
		return 0;
	}

	return hwnd;
}

int WINAPI WinMain(HINSTANCE _hInstance, HINSTANCE _prevInstance, LPSTR  _lpCmdLine, int _iCmdShow)
{
	MSG msg;
	ZeroMemory(&msg, sizeof(MSG));

	HWND hwnd = CreateAndRegisterWindow(_hInstance, WIDTH, HEIGHT, "");

	CGame& rGame = CGame::GetInstance();

	if (!rGame.Initialise(_hInstance, hwnd, WIDTH, HEIGHT))
	{
		return 0;
	}

	while (msg.message != WM_QUIT)
	{
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg); // For keyboard and mouse handlings
			DispatchMessage(&msg); // For all other events
		}
		else
		{
			rGame.ExecuteOneFrame();
		}
		//GameLoop();
	}
	return (static_cast<int>(msg.wParam));
}