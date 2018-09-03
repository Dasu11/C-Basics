#include "mario.h"
#include "sprite.h"
#include "backbuffer.h"
#include "resource.h"
#include "game.h"
#include "utils.h"
#include "config.h"
#include <time.h>  
#include "CVector2.h"

CMario::CMario()
{

}

CMario::CMario(int _iX,int _iY)
{
	m_iX = WIDTH / 2;//_iX;
	m_iY = HEIGHT / 2;//_iY;
}

CMario::~CMario() {}

bool CMario::Initialise(int _iSpriteResourceID, int _iMaskResourceID) 
{
	return CSprite::Initialise(_iSpriteResourceID, _iMaskResourceID);
}

void CMario::Draw()
{
	CSprite::Draw();
}

void CMario::Process(float _fDeltaTick)
{
	// m_iX += _fDeltaTick * 500;
	//if ((GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	//{
	//	m_iX -= _fDeltaTick * 500;
	//	ClampWidth();
	//}
	//if ((GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	//{
	//	m_iX += _fDeltaTick * 500;
	//	ClampWidth();
	//}
	//if ((GetAsyncKeyState(VK_UP) & 0x8000) == 0x8000)
	//{
	//	m_iY -= _fDeltaTick * 500;
	//	ClampHeight();
	//}
	//if ((GetAsyncKeyState(VK_DOWN) & 0x8000) == 0x8000)
	//{
	//	m_iY += _fDeltaTick * 500;
	//	ClampHeight();
	//}

	CSprite::TranslateRelative(_fDeltaTick * m_iVelocityX, _fDeltaTick * m_iVelocityY);
	Clamp();
}

void CMario::Clamp()
{
	if (m_iX < 0 || m_iX > WIDTH || m_iY < 0 || m_iY > HEIGHT)
	{
		m_iX = WIDTH / 2;
		m_iY = HEIGHT / 2;
		CVector2 vVector((rand() % 10) + (-5), (rand() % 10) + (-5));
		SetDirection(vVector);
	}
}

void CMario::SetDirection(CVector2& _vVelocity)
{
	m_iVelocityX = _vVelocity.x;
	m_iVelocityY = _vVelocity.y;
}

void CMario::SetSpeed(int _iSpeed)
{
	m_iSpeed = _iSpeed;
}
