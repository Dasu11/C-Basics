#include "sprite.h"
#include "backbuffer.h"
#include "resource.h"
#include "game.h"
#include "utils.h"
#include "config.h"

HDC CSprite::s_hSharedSpriteDC = 0;
int CSprite::s_iRefCount = 0;


CSprite::CSprite()
	:m_iX(WIDTH/2)
	, m_iY(HEIGHT/2)
{
	++s_iRefCount;
}

CSprite::~CSprite() 
{
	DeleteObject(m_hSprite);
	DeleteObject(m_hMask);
	
	--s_iRefCount;

	if(s_iRefCount == 0)
	{
		DeleteDC(s_hSharedSpriteDC);
		s_hSharedSpriteDC = 0;
	}
}

bool CSprite::Initialise(int _iSpriteResourceID, int _iMaskResourceID)
{
	HINSTANCE hInstance = CGame::GetInstance().GetAppInstance();

	if (!s_hSharedSpriteDC)
	{
		s_hSharedSpriteDC = CreateCompatibleDC(NULL);
	}
	m_hSprite = LoadBitmap(hInstance, MAKEINTRESOURCE(_iSpriteResourceID));
	VALIDATE(m_hSprite);

	m_hMask = LoadBitmap(hInstance, MAKEINTRESOURCE(_iMaskResourceID));
	VALIDATE(m_hMask);
	 
	GetObject(m_hSprite, sizeof(BITMAP), &m_bitmapSprite);
	GetObject(m_hMask, sizeof(BITMAP), &m_bitmapMask);

	return true;
}

void CSprite::Draw()
{
	int iW = GetWidth();
	int iH = GetHeight();

	int iX = m_iX - (iW / 2);
	int iY = m_iY - (iH / 2);

	CBackBuffer* pBackBuffer = CGame::GetInstance().GetBackBuffer();

	HGDIOBJ hOldObj = SelectObject(s_hSharedSpriteDC, m_hMask);

	BitBlt(pBackBuffer->GetBFDC(), iX, iY, iW, iH, s_hSharedSpriteDC, 0, 0, SRCAND);
	SelectObject(s_hSharedSpriteDC, m_hSprite);

	BitBlt(pBackBuffer->GetBFDC(), iX, iY, iW, iH, s_hSharedSpriteDC, 0, 0, SRCPAINT);
	SelectObject(s_hSharedSpriteDC, hOldObj);
}

void CSprite::Process(float _fDeltaTick) 
{
	 // m_iX += _fDeltaTick * 500;
	//if ((GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	//{
	//	m_iX -= _fDeltaTick * 500;
	//}
	//if ((GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	//{
	//	m_iX += _fDeltaTick * 500;
	//}
	//if ((GetAsyncKeyState(VK_UP) & 0x8000) == 0x8000)
	//{
	//	m_iY -= _fDeltaTick * 500;
	//}
	//if ((GetAsyncKeyState(VK_DOWN) & 0x8000) == 0x8000)
	//{
	//	m_iY += _fDeltaTick * 500;
	//}
}


int CSprite::GetWidth() const
{
	return (m_bitmapSprite.bmWidth);
}

int CSprite::GetHeight() const
{
	return (m_bitmapSprite.bmHeight);
}

int CSprite::GetX()const 
{
	return m_iX;
}

int CSprite::GetY()const
{
	return m_iY;
}

void CSprite::SetX(int _i)
{
	m_iX = _i;
}

void CSprite::SetY(int _i)
{
	m_iY = _i;
}

void CSprite::TranslateRelative(float _iX, float _iY)
{
	m_iX += _iX;
	m_iY += _iY;
}

void CSprite::TranslateAbsolute(int _iX, int _iY)
{
	m_iX = _iX;
	m_iY = _iY;
}
