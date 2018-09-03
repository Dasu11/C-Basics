#pragma once

#ifndef _GAME_H_
#define _GAME_H_

#include <windows.h>

//class CSprite;
class CClock;
class CBackBuffer;
class CMario;
class CAnimatedSprite;

class CGame
{
public:
	~CGame();
	bool Initialise(HINSTANCE _hInstance,HWND _hWnd, int _iWidth, int _iHeight);
	void Draw();
	void Process(float _fDeltaTick);
	void ExecuteOneFrame();

	CBackBuffer* GetBackBuffer();
	HINSTANCE GetAppInstance();
	HWND GetWindow();

	//singleton
	static CGame& GetInstance();
	static void DestroyInstance();

protected:
	//sprite, clock,back buffer,application data
	CClock * m_pClock;
	CAnimatedSprite * m_pSprite;
	CBackBuffer * m_pBackBuffer;

	HINSTANCE m_hApplicationInstance;
	HWND m_hMainWindow;
	static CGame* s_pGame;

private:
	CGame();
	CGame(const CGame& _kr);
	CGame& operator= (const CGame& _kr);
};

#endif

