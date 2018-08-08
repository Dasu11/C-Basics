
#ifndef __CENEMY__
#define __CENEMY__

const int g_kiMaxChars = 20;

#pragma once

class CEnemy
{
public:
	CEnemy();
	CEnemy(const char *cName, int iHps, int iXps);
	virtual ~CEnemy();

	virtual void Attack() = 0;
	void SetName(const char* cNewName);
	const char* GetName() const;
	void SetHp(int iNewHp);
	int GetHp()const;
	void SetXp(int iNewXp);
	int GetXp()const;
	virtual void Type();

protected:
	char m_Name[g_kiMaxChars];
	int m_iHp;
	int m_iXp;		
};

#endif