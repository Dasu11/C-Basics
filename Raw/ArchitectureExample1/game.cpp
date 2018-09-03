#include "game.h"

#include <time.h>

#include "clock.h"
#include "config.h"
#include "utils.h"
#include "backbuffer.h"
#include "sprite.h"
#include "mario.h"
#include "CVector2.h"
#include "animatedsprite.h"

CGame* CGame::s_pGame = 0;

CGame::CGame()
	:m_pClock(0)
	, m_hApplicationInstance(0)
	, m_hMainWindow(0)
	, m_pBackBuffer(0)
{

}

CGame::~CGame()
{
	delete m_pBackBuffer;
	m_pBackBuffer = 0;

	delete m_pClock;
	m_pClock = 0;

	delete m_pSprite;
	
	//for (size_t i = 0; i < 500; i++)
	//{
		m_pSprite = 0;
	//}
	
}


bool CGame::Initialise(HINSTANCE _hInstance, HWND _hWnd, int _iWidth, int _iHeight) 
{
	srand(time(0));

	m_hApplicationInstance = _hInstance;
	m_hMainWindow = _hWnd;

	m_pClock = new CClock();
	VALIDATE(m_pClock->Initialise());

	m_pBackBuffer = new CBackBuffer();
	VALIDATE(m_pBackBuffer->Initialise(_hWnd, _iWidth, _iHeight));

	//for (size_t i = 0; i < 10; i++)
	//{
	//	m_pSprite[i] = new CMario();
	//	VALIDATE(m_pSprite[i]->Initialise(102, 103));
	//	CVector2 vVector(0, 0);//((rand()%10)+(-5), (rand() % 10) + (-5));
	//	m_pSprite[i]->SetDirection(vVector);
	//}

		m_pSprite = new CAnimatedSprite();
		VALIDATE(m_pSprite->Initialise(104, 105));
		m_pSprite->SetFrameSpeed(0.1f);
		
		m_pSprite->SetFrameWidth(32);

	ShowCursor(SHOW_CURSOR);
	return true;
}


void CGame::Draw()
{
	m_pBackBuffer->Clear();
	//for (size_t i = 0; i < 10; i++)
	//{
		m_pSprite->Draw();
	//}
	m_pBackBuffer->Present();
}

void CGame::Process(float _fDeltaTick)
{
	//for (size_t i = 0; i < 10; i++)
	//{
		m_pSprite->Process(_fDeltaTick);
	//}
}

void CGame::ExecuteOneFrame()
{
	float fDT = m_pClock->GetDeltaTick();
	Process(fDT);
	Draw();
	m_pClock->Process();
	Sleep(1);
}

CGame& CGame::GetInstance()
{
	if (s_pGame == 0)
	{
		s_pGame = new CGame();
	}

	return (*s_pGame);
}

void CGame::DestroyInstance()
{
	delete s_pGame;
	s_pGame = 0;
}


CBackBuffer* CGame::GetBackBuffer()
{
	return m_pBackBuffer;
}

HINSTANCE CGame::GetAppInstance() 
{
	return m_hApplicationInstance;
}

HWND CGame::GetWindow() 
{
	return m_hMainWindow;
}
