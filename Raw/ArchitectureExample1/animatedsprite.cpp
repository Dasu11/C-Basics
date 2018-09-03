#include "animatedsprite.h"
#include "backbuffer.h"
#include "game.h"


CAnimatedSprite::CAnimatedSprite()
{
}


bool CAnimatedSprite::Initialise(int _iSpriteID, int _iMaskID) 
{
	return CSprite::Initialise(_iSpriteID,_iMaskID); 
}
void CAnimatedSprite::Draw()
{
	int _iTopLeftY = 0;
	int _iTopLeftX = m_iCurrentSprite * 32;

	int iW = GetFrameWidth();
	int iH = GetHeight();

	int iX = m_iX - (iW / 2);
	int iY = m_iY - (iH / 2);

	CBackBuffer* pBackBuffer = CGame::GetInstance().GetBackBuffer();

	HGDIOBJ hOldObj = SelectObject(s_hSharedSpriteDC, m_hMask);

	BitBlt(pBackBuffer->GetBFDC(), iX, iY, iW, iH, s_hSharedSpriteDC, _iTopLeftX, _iTopLeftY, SRCAND);
	SelectObject(s_hSharedSpriteDC, m_hSprite);

	BitBlt(pBackBuffer->GetBFDC(), iX, iY, iW, iH, s_hSharedSpriteDC, _iTopLeftX,_iTopLeftY, SRCPAINT);
	SelectObject(s_hSharedSpriteDC, hOldObj);
}

void CAnimatedSprite::Process(float _fDeltaTick)
{

	//CSprite::Process(_fDeltaTick);
	m_fTimeElapsed += _fDeltaTick;
	if ((GetAsyncKeyState(VK_DOWN) & 0x8000) == 0x8000)	
	{
		
		if (m_fTimeElapsed >= m_fFrameSpeed && m_fFrameSpeed != 0)
		{
			m_fTimeElapsed = 0;
			++m_iCurrentSprite;
			if (m_iCurrentSprite >= 3)
				m_iCurrentSprite = 0;
		}

		TranslateRelative(0, _fDeltaTick * 350);
	}
	if ((GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		if (m_fTimeElapsed >= m_fFrameSpeed && m_fFrameSpeed != 0)
		{
			m_fTimeElapsed = 0;
			++m_iCurrentSprite;
			if (m_iCurrentSprite < 4 || m_iCurrentSprite >=6)
				m_iCurrentSprite = 4;
		}
		TranslateRelative(_fDeltaTick * 350, 0);
	}
	if ((GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	{
		if (m_fTimeElapsed >= m_fFrameSpeed && m_fFrameSpeed != 0)
		{
			m_fTimeElapsed = 0;
			++m_iCurrentSprite;
			if (m_iCurrentSprite < 7 || m_iCurrentSprite >= 9)
				m_iCurrentSprite = 7;
		}
		TranslateRelative( _fDeltaTick * -350,0);
	}
	if ((GetAsyncKeyState(VK_UP) & 0x8000) == 0x8000)
	{
		if (m_fTimeElapsed >= m_fFrameSpeed && m_fFrameSpeed != 0)
		{
			m_fTimeElapsed = 0;
			++m_iCurrentSprite;
			if (m_iCurrentSprite < 10 || m_iCurrentSprite >= 12)
				m_iCurrentSprite = 10;
		}
		TranslateRelative(0, _fDeltaTick * -350);
	}
	
}

void CAnimatedSprite::AddFrame(int _iX) 
{
	m_vecFrames.push_back(_iX);
}
void CAnimatedSprite::SetFrameSpeed(float _fSpeed) 
{
	m_fFrameSpeed = _fSpeed;
}
void CAnimatedSprite::SetFrameWidth(int _iWidth) 
{
	m_iFrameWidth = _iWidth;
}

int CAnimatedSprite::GetFrameWidth() 
{
	return m_iFrameWidth;
}

void CAnimatedSprite::SetDirectionVelocity(CVector2& _vVelocity)
{
	m_iVelocityX = _vVelocity.x;
	m_iVelocityY = _vVelocity.y;
}
