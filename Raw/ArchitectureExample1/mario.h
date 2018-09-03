#pragma once

#ifndef _MARIO_H_
#define _MARIO_H_

#include "sprite.h"

class CVector2;

class CMario :
	public CSprite
{
public:
	CMario();
	CMario(int _iX, int iY);
	~CMario();

	bool Initialise(int _iResourceID, int _iMaskResourceID) ;
	void Draw() ;
	void Process(float _fDeltaTick) ;
	void Clamp();
	void SetDirection(CVector2& _vVelocity);
	void SetSpeed(int _iSpeed);

protected:
	int m_iVelocityX;
	int m_iVelocityY;
	int m_iSpeed;
};

#endif
