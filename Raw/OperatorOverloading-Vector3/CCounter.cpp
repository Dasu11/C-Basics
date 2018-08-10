#include "CCounter.h"

CCounter::CCounter()
	:m_iValue(0)
{
}


CCounter::~CCounter()
{
}


const CCounter& CCounter::operator++() 
{
	++m_iValue;
	return (*this);
}