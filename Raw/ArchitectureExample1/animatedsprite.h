#pragma once
#include "sprite.h"
#include <vector>
#include "CVector2.h"

class CAnimatedSprite :
	public CSprite
{
public:
	CAnimatedSprite();
	bool Initialise(int _iSpriteID, int _iMaskID);
	void Draw()override;
	void Process(float _fDeltaTick)override;
	void AddFrame(int _iX);
	void SetFrameSpeed(float _fSpeed);
	void SetFrameWidth(int _iWidth);
	int GetFrameWidth();
	void SetDirectionVelocity(CVector2& _vVelocity);

protected:
	std::vector<int> m_vecFrames;
	int m_iCurrentSprite;
	int m_iFrameWidth;
	float m_fFrameSpeed;
	float m_fTimeElapsed;
	float m_iVelocityX;
	float m_iVelocityY;
};

