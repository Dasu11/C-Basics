#pragma once
class CCounter
{
public:
	CCounter();
	~CCounter();

	int GetValue()const { return (m_iValue); };
	void SetValue(int iVal) { m_iValue = iVal; }
	const CCounter& operator++();


private:
	int m_iValue;
};

