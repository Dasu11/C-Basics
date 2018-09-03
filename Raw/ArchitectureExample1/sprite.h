#pragma once

#ifndef _SPRITE_H_
#define _SPRITE_H_


#include <windows.h>
class CSprite
{
public:
	CSprite();
	~CSprite();

	virtual bool Initialise(int _iResourceID, int _iMaskResourceID) = 0;

	virtual void Draw() = 0;
	virtual void Process(float _fDeltaTick)= 0;

	int GetWidth()const;
	int GetHeight()const;

	int GetX()const;
	int GetY()const;
	
	void SetX(int _i);
	void SetY(int _i);

	void TranslateRelative(float _iX, float _iY);
	void TranslateAbsolute(int _iX, int _iY);

protected:
	int m_iX;
	int m_iY;

	HBITMAP m_hSprite;
	HBITMAP m_hMask;

	BITMAP m_bitmapSprite;
	BITMAP m_bitmapMask;

	static HDC s_hSharedSpriteDC;
	static int s_iRefCount;

private:
	CSprite(const CSprite& _kr);
	CSprite& operator= (const CSprite& _kr);

};


#endif
