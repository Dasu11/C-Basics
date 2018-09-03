#include "clock.h"
#include <windows.h>

CClock::CClock()
	:m_fTimeElapsed(0.0f)
	,m_fLastTime(0.0f)
	,m_fDeltaTime(0.0f)
	,m_fCurrenTime(0.0f)
{
}

CClock::~CClock() {}

bool CClock::Initialise() { return true; }

void CClock::Process() 
{
	m_fLastTime = m_fCurrenTime;
	m_fCurrenTime = static_cast<float>(timeGetTime());//returna miliseconds timeGetTime()

	if (m_fLastTime == 0.0f)
	{
		m_fLastTime = m_fCurrenTime;
	}

	m_fDeltaTime = m_fCurrenTime - m_fLastTime;
	m_fTimeElapsed += m_fDeltaTime;
}

float CClock::GetDeltaTick() 
{
	return (m_fDeltaTime/1000);
}