#pragma once

#ifndef _CLOCK_H_
#define _CLOCK_H_

class CClock
{
public:
	CClock();
	~CClock();
	bool Initialise();
	void Process();
	float GetDeltaTick();

protected:
	float m_fTimeElapsed;
	float m_fDeltaTime;
	float m_fLastTime;
	float m_fCurrenTime;

private:
	CClock(const CClock& _kr);
	CClock& operator= (const CClock& _kr);
};

#endif

